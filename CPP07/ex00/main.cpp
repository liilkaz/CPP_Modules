#include <iostream>
#include "whatever.hpp"

int main() {
	int a = 5;
	int b = 10;

	float c = 15.5;
	float d = 72.21;
	
	std::string str1 = "Banana";
	std::string str2 = "Mango";

	std::cout << "\033[0;33m*******SWAP*******\033[0m" << std::endl;
	std::cout << "\033[0;32m*******int*******\033[0m" << std::endl;
	std::cout << "a = " << a << " <-----> b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << "; b = " << b << std::endl;

	std::cout << "\033[0;32m*******float*******\033[0m" << std::endl;
	std::cout << "c = " << c << " <-----> d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << "; d = " << d << std::endl;

	std::cout << "\033[0;32m*******string*******\033[0m" << std::endl;
	std::cout << "str1 = " << str1 << " <-----> str2 = " << str2 << std::endl;
	::swap(str1, str2);
	std::cout << "str1 = " << str1 << "; str2 = " << str2 << std::endl;


	std::cout << "\033[0;33m********MIN********\033[0m" << std::endl;
	std::cout << "\033[0;32m*******int*******\033[0m" << std::endl;
	int minimum = ::min(a,b);
	std::cout << a << " ? " << b << std::endl;
	std::cout << "smallest argument: " << minimum << std::endl;

	std::cout << "\033[0;32m*******float*******\033[0m" << std::endl;
	float minimum1 = ::min(c,d);
	std::cout << c << " ? " << d << std::endl;
	std::cout << "smallest argument: " << minimum1 << std::endl;

	std::cout << "\033[0;32m*******string*******\033[0m" << std::endl;
	std::string minimum2 = ::min(str1,str2);
	std::cout << str1 << " ? " << str2<< std::endl;
	std::cout << "smallest argument: " << minimum2 << std::endl;


	std::cout << "\033[0;33m********MAX********\033[0m" << std::endl;
	std::cout << "\033[0;32m*******int*******\033[0m" << std::endl;
	int maximum = ::max(a,b);
	std::cout << a << " ? " << b << std::endl;
	std::cout << "biggest argument: " << maximum << std::endl;

	std::cout << "\033[0;32m*******float*******\033[0m" << std::endl;
	float maximum1 = ::max(c,d);
	std::cout << c << " ? " << d << std::endl;
	std::cout << "biggest argument: " << maximum1 << std::endl;

	std::cout << "\033[0;32m*******string*******\033[0m" << std::endl;
	std::string maximum2 = ::max(str1,str2);
	std::cout << str1 << " ? " << str2 << std::endl;
	std::cout << "biggest argument: " << maximum2 << std::endl;
	
}

//SUBJ:
// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }

/*Should output the following if you did well:
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2*/


//ЧЕКЛИСТ
// int main(void) {
// 	Awesome a(2), b(4);

// 	swap(a, b);

// 	std::cout << a << " " << b << std::endl;
// 	std:: cout << max(a,b) << std::endl;
// 	std::cout << min(a,b) << std::endl;

// 	return 0;
// }

