#include <iostream>
#include <cinttypes>

int main()
{
	auto mu = [](int a, int b) -> int64_t
	{
		int64_t c = 1;
		for (int i = a; i <= b; i++)
			c *= i;
		return c;
	};
	std::cout << "Multiplication of all integers between 8 and 15: " << mu(8, 15) << std::endl;
	int a, b;
	std::cout << "Enter A (1 < A < 20): ";
	std::cin >> a;
	while (a <= 1 || a >= 20)
	{
		std::cout << "Entered value of A is out of range. Try again: ";
		std::cin >> a;
	}
	std::cout << "Multiplication of all integers between A = " << a << " and 20: " << mu(a, 20) << std::endl;
	std::cout << "Enter B (1 < B < 20): ";
	std::cin >> a;
	while (a <= 1 || a >= 20)
	{
		std::cout << "Entered value of B is out of range. Try again: ";
		std::cin >> a;
	}
	std::cout << "Multiplication of all integers between 1 and B = " << a << ": " << mu(1, a) << std::endl;
	std::cout << "Enter A and B (B >= A): ";
	std::cin >> a >> b;
	while (a > b)
	{
		std::cout << "Entered value of A is bigger than value of B. Try again: ";
		std::cin >> a >> b;
	}
	std::cout << "Multiplication of all integers between A = " << a << " and B = " << b << ": " << mu(a, b)
			  << std::endl;
	return 0;
}