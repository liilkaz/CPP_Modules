#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Span {
	private:
		unsigned int N;
		std::vector<int> vctr;
		Span();

	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &span);

		Span &operator=(const Span &span);

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();

		class ErrorLim :public std::exception {
			private:
				ErrorLim();
				std::string msg;
			public:
				ErrorLim(std::string const &msg);
				virtual ~ErrorLim() throw();
				virtual const char* what() const throw();
		};
};


#endif