#include "span.hpp"

int main()
{	
	srand(time(NULL));
	int N = 100;
	Span sp = Span(N);
	int rndm;
	std::cout << "Numbers: ";
	for(int i = 0; i < N; i++)
	{
		rndm = rand() % (500000 + 1);
		std::cout << rndm << " ";
		sp.addNumber(rndm);
	}
	std::cout << std::endl;

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}