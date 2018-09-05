#include <stdio.h>
#include <iostream> 
using namespace std;

int main()
{
	double a, b, c;
	char d;
	int p = 1;
	while (p != 2)
	{
		cout << "1 - start" << endl;
		cout << "2 - exit" << endl;
		cin >> p;
		if (p != 1)
		{
			cout << "Wrong action" << endl;
			continue;
		}

		cout << "Write first number:" << endl;
		cin >> a;

		cout << "What to do:" << endl;
		cin >> d;

		cout << "Write second number:" << endl;
		cin >> b;

		while (getchar() != '\n');
		switch (d)
		{
			case '+': c = a + b; break;
			case '-': c = a - b; break;
			case '*': c = a * b; break;
			case '/': c = a / b; break;
			default:
				cout << "Wrong action";
				continue;
		}
		cout << "Result = " << c << endl;
	}
}