#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	vector<string> inputs;
	vector<string>::iterator iter;
	string input;
	string output;
	int words;

	cin >> words;

	for (int i = 0; i < words; i++)
	{
		cin >> input;
		inputs.push_back(input);
	}

	string str;
	int strlen;
	for (iter = inputs.begin(); iter != inputs.end(); iter++)
	{
		str = *iter;
		strlen = str.length();
		for (int i = 0; i < strlen; i++)
		{
			//cout << str[i];
			if (iter == inputs.begin())
			{
				output.push_back(str[i]);
			}
			else
			{
				if (output[i] != str[i])
				{
					output[i] = '?';
				}
			}
		}
	}

	cout << output << endl;
}