#pragma once

#pragma once
#include <vector>
#include <string>


std::vector<float> StringNumberConversion(std::string input, char div)
{
	std::vector<float> Outputs = { 0 };
	int CurrentNumber = 0;
	int Divider = 0;
	bool BeforeDec = true;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != div)
		{
			if (input[i] == '.')
			{
				BeforeDec = false;
			}
			else if (BeforeDec)
			{
				Outputs[CurrentNumber] *= 10;
				Outputs[CurrentNumber] += (int)input[i] - 48;
			}
			else
			{
				Divider += 1;
				Outputs[CurrentNumber] += ((int)input[i] - 48) / pow(10, Divider);
			}
		}
		else {
			CurrentNumber += 1;
			Outputs.push_back(0);
			Divider = 0;
			BeforeDec = true;
		}
	}
	return Outputs;
}

std::vector<std::string> StringSeperate(std::string input, char Seperator)
{
	std::vector<std::string> Outputs = { "" };

	int Seperation = 0;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != Seperator)
		{
			Outputs[Seperation].push_back(input[i]);
		}
		else
		{
			Seperation += 1;
			Outputs.push_back("");
		}
	}
	return Outputs;
}