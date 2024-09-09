//write include statements
#include "iostream"
#include "data_types.h"

//write namespace using statement for cout


int main()
{
	int num;
	std::cin >> num;

	int result = multiply_numbers(num);

	std::cout << result;

	int num1 = 4;

	result = multiply_numbers(num1);
	std::cout << result;

	return 0;
}
