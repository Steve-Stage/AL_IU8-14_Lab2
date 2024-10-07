#include <iostream>
#include <string>
#include <utility>

#define abs(a) (((a) >= 0) ? (a) : -(a))

void logic(std::pair<byte, byte> p1, std::pair<byte, byte> p2, std::string tp)
{
	if (tp == "rook")
	{
		std::cout << "Rook on Position A can" << ((p1.first == p2.first || p1.second == p1.second) ? ("") : ("'t"))
				  << " attack piece on Position B";
	}
	else if (tp == "bishop")
	{
		std::cout << "Bishop on Position A can"
				  << ((abs(p1.first - p2.first) == abs(p1.second - p1.second)) ? ("") : ("'t"))
				  << " attack piece on Position B";
	}
	else if (tp == "king")
	{
		std::cout << "King on Position A can"
				  << ((abs(p1.first - p2.first) <= 1 && abs(p1.second - p1.second) <= 1) ? ("") : ("'t"))
				  << " reach Position B within one move";
	}
	else if (tp == "queen")
	{
		std::cout << "Queen on Position A can"
				  << ((p1.first == p2.first || p1.second == p1.second) ||
							  (abs(p1.first - p2.first) == abs(p1.second - p1.second))
						  ? ("")
						  : ("'t"))
				  << " attack piece on Position B";
	}
	else if (tp == "pawn")
	{
		std::cout << "Pawn on Position A can";
		if (p1.first == p2.first && (p1.second - p2.second) == 1)
			std::cout << " reach Position B during normal move";
		else if (abs(p1.first - p2.first) == 1 && (p1.second - p2.second) == 1)
			std::cout << " reach Position B during attacking move";
		else
			std::cout << "'t reach Position B within one move";
	}
	else
		std::cout << "Wrong chess piece name (acceptable names: rook, bishop, king, queen, pawn)";
	std::cout << std::endl;
}

int main()
{
	using byte = unsigned char;
	std::pair<byte, byte> posa, posb;
	std::string type;
	std::cout << "Enter Position A, Position B, chess piece: ";
	std::cin >> posa.first >> posa.second >> posb.first >> posb.second >> type;
	logic(posa, posb, type);
	return 0;
}