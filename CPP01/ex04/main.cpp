#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
	if (argc == 4) {
		std::string file = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string s3;
		size_t found;

		file += ".replace";
		std:: ifstream readfile(argv[1]);
		if (!readfile) {
			std::cerr << "File could not be opened!" << std::endl;
			exit(1);}
		std::ofstream createnewfile(file);
		if (!createnewfile) {
			std::cerr << "File could not be created!" << std::endl;
			exit(1);
		}
		while (getline (readfile, s3)) {
			found = s3.find(s1);
			while (found!= std::string::npos) {
				s3.erase (found, s1.size());
				s3.insert(found, s2);
				found = s3.find(s1, found + s2.size());}
			createnewfile << s3 << std::endl;;
		}
		createnewfile.close();
	}
	else {
		std::cerr << "Wrong number of arguments!" << std::endl;
		exit(1);
	}
}
