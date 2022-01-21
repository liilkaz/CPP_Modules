#include "Point.hpp"
# define OFF_COLOR "\033[0m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"


/* 
	Point A(5.48, 7.35);
	Point B(16.25, 10.4);
	Point C(2.98, 3.15);

	Point D(4.29, 6.5); // вне
	Point E(8, 6.5); //внутри
	Point F(9.52, 8.5); //внутри
	*/

int main(void)
{
	// Point A(5.48, 7.35);
	// Point B(16.25, 10.40);
	// Point C(2.98, 3.15);

	// Point D(4.29, 6.5); //вне
	// Point E(8, 6.5); //внутри
	// Point F(9.52, 8); //внутри

	Point A(4.6, -1.02);
	Point B(6.3, 4.36);
	Point C(12.14, 2.58);

	Point D(7.78, 2.38);
	Point E(10.85, 1.96);
	Point F(4.72, 0.24);

	if (bsp(A, B, C, F))
		std::cout << GREEN << "TRUE" << OFF_COLOR << std::endl;
	else
		std::cout << RED << "FALSE" << OFF_COLOR << std::endl;
}