#include <iostream>
#include <cstdint>

typedef struct Data_s {
	int num1;
	int num2;
	float weight1;
	float weight2;
	std::string fruit1;
	std::string fruit2;
} Data;

uintptr_t serialize(Data* ptr) {
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return(reinterpret_cast<Data *>(raw));
}

int main(void) {
	Data *data = new Data;
	data->fruit1 = "Banana";
	data->num1 = 2;
	data->weight1 = 1.3;

	data->fruit2 = "Mango";
	data->num2 = 5;
	data->weight2 = 3.17;

	uintptr_t ui = serialize(data);
	Data *strct = new Data;
	strct = deserialize(ui);

	std::cout << "Before: " << data->num1 << " " << data->fruit1 << "s weighing " << data->weight1 << "kg" << std::endl;

	// std::cout << "UI:  " << ui << std::endl;

	std::cout << "After:  " << strct->num1 << " " << strct->fruit1 << "s weighing " << strct->weight1 << "kg" << std::endl << std::endl;

	std::cout << "Before: " << data->num2 << " " << data->fruit2 << "s weighing " << data->weight2 << "kg" << std::endl;
	std::cout << "After:  " << strct->num2 << " " << strct->fruit2 << "s weighing " << strct->weight2 << "kg" << std::endl << std::endl;

	std::cout << "******addresses******" << std::endl;
	std::cout << data << std::endl << strct << std::endl;

	delete strct;
}

//для преобразования одного типа в другой без изменения битов.