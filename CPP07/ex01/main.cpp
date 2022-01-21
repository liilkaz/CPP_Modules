#include "iter.hpp"

int main(void) {
	std::cout << "\033[0;32m*******int*******\033[0m" << std::endl;
	int arr[5] = {15, 25, 14, 3, 7};

	for (int i = 0; i < 5; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	::iter(arr, 5, func);
	
	for (int i = 0; i < 5; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "\033[0;32m*******string*******\033[0m" << std::endl;
	std::string arr1[3] = {"aq", "sa", "df"};
	for (int i = 0; i < 3; i++){
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;
	::iter(arr1, 3, func);
	
	for (int i = 0; i < 3; i++){
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;
	
	std::cout << "\033[0;32m*******char*******\033[0m" << std::endl;
	char arr2[3] = {'a', 'b', 'c'};
	for (int i = 0; i < 3; i++){
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
	::iter(arr2, 3, func);
	
	for (int i = 0; i < 3; i++){
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
}

// int main() {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];

// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);

// 	return 0;
// }