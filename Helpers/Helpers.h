#pragma once

#include <vector>
#include <string>
#include <iostream>


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


std::vector<std::string> CombinedInputs()
{
	std::string Input;
	int DataAmount;
	std::cin >> DataAmount;
	std::vector<std::string> AllInputs;
	for (int i = 0; i < DataAmount; i++)
	{
		std::cin >> Input;
		AllInputs.push_back(Input);
	}
	return AllInputs;
}

std::vector<std::string> CombinedInputs(int Amount)
{
	std::string Input;
	std::vector<std::string> AllInputs;
	for (int i = 0; i < Amount; i++)
	{
		std::cin >> Input;
		AllInputs.push_back(Input);
	}
	return AllInputs;
}

std::string CondenseToString(std::vector<std::string> input)
{
	std::string Output;
	for (int i = 0; i < input.size(); i++)
	{
		for (int c = 0; c < input[i].size(); c++)
		{
			Output.push_back(input[i][c]);
		}
	}
	return Output;
}

std::vector<char> StringToChars(std::string input)
{
	std::vector<char> Output;

	for (int i = 0; i < input.size(); i++)
	{
		Output.push_back(input[i]);
	}
	return Output;
}