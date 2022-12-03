//Task 4. Given a string of characters. It is necessary to check
//is this string a palindrome

#include <iostream>
#include <cstring>

using namespace std;

bool polindrom(char str[])
{
	int len = strlen(str);
	for (int i = 0; i < len / 2; ++i)
	{
		if (str[i] != str[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char str[] = "ABCCBA";
	cout << str << endl;
	if (polindrom(str))
	{
		cout << "Word is polindrom.";
	}
	else
	{
		cout << "Word is not polindrom";
	}
	cout << endl;
	return 0;
}