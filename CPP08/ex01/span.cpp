#include "span.hpp"

Span::Span(unsigned int N) {
	this->N = N;
}

Span::~Span() {}

Span::Span(const Span &span) {
	*this = span;
}

Span &Span::operator=(const Span &span){
	if (this != &span)
		this->N = span.N;
		this->vctr = span.vctr;
	return *this;
}

void Span::addNumber(int num) {
	if (vctr.size() >= N) {
		throw ErrorLim("Invalid number of elements\n");
	}
	vctr.push_back(num);
}

int Span::shortestSpan() {
	if (N > 2) {
		std::sort(vctr.begin(), vctr.end());
		int shrt = vctr.back(); //static_cast<int>
		int shrt1;
		for (unsigned int i = 0; i < N; i++) {
			shrt1 = vctr[i + 1] - vctr[i];
			if (shrt1 < shrt && shrt1 >= 0) {
				shrt = shrt1;
			}
		}
		return shrt;
	} else {
		throw ErrorLim("Invalid number of elements\n");
	}
}

int Span::longestSpan() {
	if (N > 2) {
		std::sort(vctr.begin(), vctr.end());
		return (vctr.back() - vctr.front());
	} else
		throw ErrorLim("Invalid number of elements\n");
}

Span::ErrorLim::ErrorLim() {}
Span::ErrorLim::ErrorLim(std::string const &msg) : msg(msg) {}
Span::ErrorLim::~ErrorLim() throw() {}
const char* Span::ErrorLim::what() const throw() {return msg.c_str();}
