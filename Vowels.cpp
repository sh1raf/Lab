#include <iostream>
using namespace std;

string Vowels = "aeuoi";

int GetVowelsAmount(string str)
{
	int amount = 0;
	for(int i = 0; i < static_cast<int>(str.size()); i++)
	{
		for(int j = 0; j < static_cast<int>(Vowels.size()); j++)
		{
			if(str[i] == Vowels[j])
			{
				amount++;
				break;
			}
		}
	}

	return amount;
}

int main()
{
	string str = "";
	cin >> str;

	cout << GetVowelsAmount(str);
}
