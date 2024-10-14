#include <iostream>
using namespace std;



int main ()
{
	int Player_Health;
	cout << "Enter The Player's Health:- ";
	cin >> Player_Health;

	int* P;
	P = &Player_Health;
	cout << "Adresss Of Player Health Storage In Pointer is : " << P << endl;
	cout << "The Value Player Health In Pointer is : " << *P << endl;
	cout << "The value of PlayerHealth directly is: " << Player_Health << endl;
	cout << "Enter the new value for player's health: ";
	cin >> *P;
	cout << "The Value Of The Player Health After Changing Value : " << *P << endl;
	cout << "The value of PlayerHealth directly After Changing Value is: " << Player_Health << endl;


}

