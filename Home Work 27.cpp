#include<iostream>
#include <cstring>

using namespace std;

bool ch_pol(string word);

int main()
{
	string str;
	cout << "Enter the word: " << endl;
	cin >> str;
	if (ch_pol(str))
	{
		cout << "Word is polindrom! " << endl;
	}
	else
	{
		cout << "Word is not polindrom( " << endl;
	}
	system("pause");
	return 0;
}

bool ch_pol(string word)
{
	int leng = word.length();
	for (int i = 0; i < leng / 2; ++i)
	{
		if (word[i] != word[leng - i - 1])
		{
			return false;
		}
	}
	return true;
}
