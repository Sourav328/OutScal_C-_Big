
#include <iostream>
using namespace std;

int main()
{
	int Enemy_Health;
	cout << "Enter The Enemy Health:- ";
	cin >> Enemy_Health;
	int* P, * Q;
	P = &Enemy_Health;
	Q = &Enemy_Health;

	cout << "The Address OF the Pointer P is :- "<< P << endl;
	cout << "The Address OF the Pointer Q is :- "<< Q << endl;

	cout << "The Value OF The Pointed in P is (*P) :- "<< *P << endl;
	cout << "The Value OF The Pointed in Q is (*Q) :- " << *P << endl;
	cout << "The Value OF Enemy_Health :- " << Enemy_Health << endl;

	cout << "Enter The New Value For Enemy health:- ";
	cin >> Enemy_Health;

	cout << "The Value OF The Pointed in P is (*P) :- " << *P << endl;
	cout << "The Value OF The Pointed in Q is (*Q) :- " << *P << endl;
	cout << "The Value OF Enemy_Health :- " << Enemy_Health << endl;

   
}
