/*Task 1. Create the Calculator application. Necessary
support operations +, -, *, /.
Implement a menu without using the if and
switch using an array of function pointers*/


double sum(double x, double y)
{
	return x + y;
}
double minus_(double x, double y)
{
	return x - y;
}
double multiplication(double x, double y)
{
	return x * y;
}
double division(double x, double y)
{
	return x / y;
}
int main()
{ 
	double x, y;
    int z ;
	cout << "Enter number1 : ";
	cin >> x;
	cout << "Enter number2 : ";
	cin >> y;
	cout << "Make a choice: 1 (+), 2 (-), 3 (*), 4 (/)" << endl;
    cin >> x;
    double (*test_ptr[4])(double, double) = { sum, minus_, multiplication, division };
    cout << "Result --> " << test_ptr[z - 1](10, 5) << endl;
   	return 0;
}