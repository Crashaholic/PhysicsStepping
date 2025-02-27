#include <iostream>

#include <string>
#include "Physics.hpp"

using PhysStep::Vector3;
using PhysStep::MyObject;

// there's no dt here since we are going frame by frame

double framerate = 144.0;

double calcDt()
{
	return 1.0 / framerate;
}

void update()
{
    double currentDt = calcDt();

}

int main(int argc, char** args)
{
    MyObject obj;
	obj.position = Vector3::zero();
	double miu = 0.0;

	while (1)
	{
		update();

		std::cout << '>';
		std::string input = "";
		std::getline(std::cin, input);

		if (input == "exit")
		{
			break;
		}
		else if (input == "help" || input == "h")
		{
			std::cout << "scream and shout and let it all out\n";
		}
		else if (input == "nextframe" || input == "nf")
		{
			
		}
	}

	return 0;
}
