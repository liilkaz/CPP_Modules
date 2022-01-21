#include <iostream>
#include <string>

int	main(int argc, char **argv){
	std::string str;

	if (argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for (int i = 1; i < argc; i++){
		str += argv[i];
		if (i != argc - 1)
			str += " ";
	}
	for(size_t i = 0; i < str.size(); i++){
		std::cout << (char)toupper(str[i]);
	}
	std::cout << std::endl;
}
