#include <iostream>
#include <cctype>

void print_for_fun(std::string arg) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (arg == "nan" || arg == "nanf") {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan"  << std::endl;
	} else if (arg[0] == '-') {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf"  << std::endl;
	} else {
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf"  << std::endl;
	}
}

void conv_int(double dd) {
		// double dd = static_cast<double>(i);	
		int ii = static_cast<int>(dd);
		char c = static_cast<char>(dd);
		float f = static_cast<float>(dd);
	if (isprint (dd)) {
		std::cout << "char: '" << c << "'"<< std::endl;
	} else if (dd <0 || dd > 127) {
		std::cout << "char: impossible" << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
		std::cout << "int: " << ii << std::endl;
	if (dd >= 1000000 || dd <= -1000000 || dd - ii != 0) {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << dd << std::endl;
	} else {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << dd << ".0" << std::endl;
	}
}

int main(int argc, char **argv) {
	if (argc == 2) {
		std::string arg = argv[1];
		if (arg.size() == 1) {
			if (isdigit(arg[0])) {
				conv_int(atoi(arg.c_str()));
			} else {
				double dd = static_cast<double>(arg[0]);	
				int i = static_cast<int>(dd);
				char c = static_cast<char>(dd);
				float f = static_cast<float>(dd);

				std::cout << "char: '" << c << "'" << std::endl;
				std::cout << "int: " << i << std::endl;
				std::cout << "float: " << f << ".0f" << std::endl;
				std::cout << "double: " << dd << ".0" << std::endl;
			}
		} else if (arg == "-inf" || arg == "+inf" || arg == "nan" || arg == "-inff" || arg == "+inff" || arg == "nanf"){
			print_for_fun(arg);
		}
		else if (arg.size() > 1 && (atol(arg.c_str()) < INT_MAX && atol(arg.c_str()) > INT_MIN))
		{
			bool point = 0;
			bool minus = 0;
			if (arg[0] == '+' || arg[0] == '-')
				minus = 1;
			size_t i = minus;
			for ( ; i < arg.size(); i++) {
				if (!isdigit(arg[i])) {
					if (arg[i] == '.') {
						point = true;
					}
					else if (arg[i] == 'f' && point == 1)
					{
						conv_int(atof(arg.c_str()));
						return (0);
					}
					else
						break;
				}
			}
			if (i == arg.size())
				conv_int(atof(arg.c_str()));
			else
				std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
				
		} 
		else {
			std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
			exit (1);
		}

	}
	else
		std::cout << "ERROR: Bad arguments!" << std::endl;
}



// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0