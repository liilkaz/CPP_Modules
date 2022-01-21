#include "easyfind.hpp"
#include <vector>

int main() {
	std::vector<int> vector;
	for (int i = 0; i < 250; i++) {
		vector.push_back(i);
	}
	std::vector<int>::iterator it;
	try {
		it = easyfind(vector, 250);
		std::cout << "element " << *it << " is found" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
}