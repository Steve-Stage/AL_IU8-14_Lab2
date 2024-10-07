#include <iostream>
#include <string>

#define min(a, b) (((a) <= (b)) ? (a) : (b))
#define max(a, b) (((a) >= (b)) ? (a) : (b))

bool condition(int x, int y, int z)
{
	if ((x % 2 != 0) && (y % 2 != 0))
		return true;
	else if (min(x, y) < 20 && max(x, y) >= 20)
		return true;
	else if (x * y == 0)
		return true;
	else if (x <= 0 && y <= 0 && z <= 0)
		return true;
	else if (((x % 5 == 0) + (y % 5 == 0) + (z % 5 == 0)) == 1)
		return true;
	else if (((x > 100) + (y > 100) + (z > 100)) >= 1)
		return true;
	else
		return false;
}

int main()
{
	int x, y, z;
	std::cout << "Enter X Y Z: ";
	std::cin >> x >> y >> z;
	std::string ans = (condition(x, y, z) ? ("condition is true") : ("condition is false"));
	std::cout << ans << std::endl;
	return 0;
}