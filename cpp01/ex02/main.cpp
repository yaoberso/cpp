#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string stringVAR = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << &stringVAR << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << stringVAR << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	stringREF = "NEW VALUE REF";

	std::cout << &stringVAR << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << stringVAR << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	*stringPTR = "NEW VALUE PTR";

	std::cout << &stringVAR << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << stringVAR << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}