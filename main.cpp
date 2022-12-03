//Task 3. Count the number of words in the entered sentence.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[250];
	cout << "Enter a sentence --> " << endl;
	gets_s(str);
	int suma = 0;
	char* pch = strtok(str, " ,.!?;"); 
	do                   
	{
		suma++;
		pch = strtok(NULL, " ,.!?;");
	} while (pch != NULL);
	cout << suma;
	return 0;
}