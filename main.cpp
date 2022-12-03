/*Task 2. Given a string of characters. Determine the amount
letters, numbers and other symbols present in the line*/

#include <iostream>
using namespace std;

int main()
{
	char str[] = "Hello world 2022!";
	
	int alpha = 0;
	int digit = 0;
	int other = 0;
	
	for (int i = 0; i < strlen(str); i++)
	{
		if (isalpha(str[i]))
			alpha++;
	
		else if (isdigit(str[i]))
			digit++;
	
		else
			other++;
	
	}	
	cout << "alpha- " << alpha << endl;
	cout << "digit- " << digit << endl;
	cout << "other- " << other << endl;
	return 0;
}