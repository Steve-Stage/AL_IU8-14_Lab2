#include <iostream>


int main()
{
	auto mt = [](int n) -> void
	{
		for (int i = 1; i <= 9; i++)
		{
			std::cout << i << " x " << n << " = " << i * n << std::endl;
		}
	};
	mt(7);
	std::cout << std::endl << "Enter N: ";
	int n;
	std::cin >> n;
	std::cout << std::endl;
	mt(n);
	return 0;
}