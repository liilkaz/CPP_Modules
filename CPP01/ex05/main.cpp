#include "Karen.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		Karen kar;
		kar.complain(argv[1]);
	}
	else
		std::cerr << "Error!\n";
}