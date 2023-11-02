#include<iostream>
using namespace std;

struct Book {
	time_t dueDate;
};
int main() {
	char again =' ';
	do
	{
		int book_1 =123, book_2=124, book_3=125;
		//menu
		cout << "MENU\n";
		cout << "1.Books Collections\n";
		cout << "2.Borrow\n";
		cout << "3.Return\n";
		cout << "4.QUIT\n";
		//MENU INPUT
		int option;
		cout << "Enter the option(1,2,3,4): ";
		cin >> option;
		// books collection
		if (option == 1)
		{ 

			cout << "book_1 with id: " << book_1<<endl;
			cout << "book_2 with id: " << book_2<<endl;
			cout << "book_3 with id: " << book_3<<endl;
		}
		//Borrow the book
		else if(option == 2)
		{
			double id_check = 0 ;
			cout<< "Enter the id of the Book, which you want to borrow.";
			cin >> id_check;
			if (id_check == book_1 || id_check == book_2 || id_check == book_3)
			{
				cout << "Book is available.\n ";
				cout << "Shall be return it with in 2 day otherwise a fine will be given 1$ per day\n";
			}
			else
				cout << "Invalid ID.\n";
		}
		else if (option == 3)
		{
			int id_check = 0;
			cout << "Enter the id of the Book, which you want to return. ";
			cin >> id_check;
			if (id_check = book_1 || id_check == book_2 || id_check == book_3)
			{
				int days, fine_perDAY = 1;
				cout << "How many days did you borrowed the book\n ";
				cin >> days;
				if (days > 2)
				{
					fine_perDAY = (days - 2) * fine_perDAY;
					cout << "you have to pay fine of " << fine_perDAY << "$. \n";
				}
				else
					cout << "Returned Successfully.\n";
			}
		}
		else if (option == 4)
		{
			cout << "EXIT\n";
			break;
		}
		else
		{
			cout << "Invalid Option\n";
		}




		cout << "Want to Open Library again.(Y/N)";
		cin >> again;
	} while (again == 'Y' || again == 'y');


	return 0;
}