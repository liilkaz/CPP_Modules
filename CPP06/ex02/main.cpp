#include "Base.hpp"
#include <cstdlib>

Base * generate(void) {
	Base *base = new Base;

	srand (time(NULL));
	int ran = rand() % 3 + 1;

	if (ran == 1) {
		base = new A();
		std::cout << "random: class A" << std::endl;
	} else if(ran == 2) {
		base = new B();
		std::cout << "random: class B" << std::endl;
	} else {
		base = new C();
		std::cout << "random: class C" << std::endl;
	}
	return (base);
}

void identify(Base* p) { //для конвертации указателя родительского класса в указатель дочернего класса 
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a !=NULL)
		std::cout << "class A" << std::endl;
	else if (b !=NULL)
		std::cout << "class B" << std::endl;
	else if (c !=NULL)
		std::cout << "class C" << std::endl;
	else
		std::cout << "error convert" << std::endl;
}

void identify(Base& p) { //для конвертации ссылки родительского класса в ссылку дочернего класса
	try {
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "class A" << std::endl;
	}
	catch (std::exception &e) {}

	try {
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "class B" << std::endl;
	}
	catch (std::exception &e) {}

	try {
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "class C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main(void) {
	Base *bams = generate();
	if (!bams) {
		std::cout << "error!" << std::endl;
		exit(1);
	}
	identify(bams);
	identify(*bams);
}