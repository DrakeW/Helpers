#include "Helpers.h"


int main()
{
	std::vector<std::string> AllInputs = CombinedInputs();

	for (int i = 0; i < AllInputs.size(); i++)
	{
		std::vector<float> TrueInput = StringNumberConversion(AllInputs[i], ':');

		float Time = TrueInput[1] / TrueInput[0];

		if (Time <= 1)
		{
			std::cout << "Swerve" << std::endl;
		}
		else if (Time <= 5)
		{
			std::cout << "Break" << std::endl;
		}
		else
		{
			std::cout << "Safe" << std::endl;
		}
	}
}