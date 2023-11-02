#include<iostream>
using namespace std;
int main() {
	char option;
	cout << "Do you want to print the prime number(R) or Want to check the prime number(C): ";
	cin >> option;
	if (option == 'R' || option == 'r')
	{
		int start, end;
		cout << "Enter the Starting Number: ";
		cin >> start;
		cout << "Enter the ending Number: ";
		cin >> end;
		for (int i = start; i <= end; i++)
		{
			if (i == 1)
				continue;
			if(i==3 ||i==2)
				cout << i << " ";

			if ( i % 2 == 0 || i % 3 == 0)
				continue;
			else
				cout << i << " ";

		}
	 }
	else if (option == 'C' || option == 'c')
	{
		int num , prime = 1;
		cout << "Enter the number: ";
		cin >> num;
		for (int c = 2; c*c <= num ; c++)
		{
			 if(num % c == 0 ) 
			{
				prime = 0;
				break;
			}
		}
		if (prime == 1)
			cout << "It's Prime Number.";
		else
			cout << "It's not Prime Number.";

	}
	cout << endl;
	system("pause");
	return 0;
}