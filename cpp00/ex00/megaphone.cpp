#include <iostream>
#include <cctype>       // Pour std::toupper

void print_maj(char **argv)
{
	for (int i = 1; argv[i] != NULL; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			std::cout << (char)std::toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *";
	}
	else
	{
		print_maj(argv);
	}
	return (0);
}