#include <iostream>
using namespace std;

int main()
{
 
	float num1, num2;
	char operation;
	cout << "**Shwam's Super Subperb Calculator**" << endl;
	cin >> num1 >> operation >> num2;
	
	if (num1 == 69 || num2 == 69)
	{
		cout << "Nice";
	}
	else
	{ 
		switch (operation)
		{
		case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
		case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
		case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
		case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
		case '%':
			bool isNum1Int, isNum2Int;
			isNum1Int = ((int)num1 == num1);
			isNum2Int = ((int)num2 == num2);

			if (isNum1Int && isNum2Int)
				cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
			else
				cout << "Not Valid!";
			break;
		default:cout << "Not Valid!";
		}
	}
	
	system("pause>0");
}
