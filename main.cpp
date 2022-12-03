/* Given a string of characters. Replace all in it
spaces for tabs.*/

#include <iostream>
using namespace std;

void Movestr(char* str, int i = 0)
{
    do {
        if (str[i] == ' ')
        {
            str[i] = '\t';
            Movestr(str);
            break;
        }
        i++;
    } while (str[i] != '0');
}
int main()
{
	char str[] = "Hello world !";
	cout << str << endl;
	
    Movestr(str);
    cout << str << endl;
	return 0;
}