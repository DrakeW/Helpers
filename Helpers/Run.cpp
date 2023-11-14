#include "Helpers.h"

using namespace std;

int main()
{
	vector<string> AllInputs = CombinedInputs();
	for (int i = 0; i < AllInputs.size(); i++)
	{
		string Output;
		for (int c = 0; c < AllInputs[i].size(); c++)
		{
			switch (AllInputs[i][c])
			{
			case 'A':
				Output.push_back('T');
				break;
			case 'T':
				Output.push_back('A');
				break;
			case 'G':
				Output.push_back('C');
				break;
			case 'C':
				Output.push_back('G');
				break;
			default:
				break;
			}
		}
		cout << Output << endl;
	}

	return 0;
}