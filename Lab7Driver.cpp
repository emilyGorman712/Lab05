//Emily Gorman

#include <iostream>
#include <limits>
#include <string>
using namespace std;

#include "Lab7MyStack.h"

int main() {
	string input;
	Vector v;
	List l;
	Stack s;
	myStack ms;
	cout << "Enter in a string to be reversed using a stack: ";
	getline(cin, input);
	s.stringstringReversal1(input);
	cout << endl;
	cout << "Enter in a string to be reversed using a vector: ";
	getline(cin, input);
	v.stringstringReversal2(input);
	cout << endl;
	cout << "Enter in a string to be reversed using a list: ";
	getline(cin, input);
	l.stringstringReversal3(input);
	cout << endl;
	cout << "Enter in a string to be reversed using myStack: ";
	getline(cin, input);
	ms.stringstringReversal4(input);
	cout << endl;
	system("PAUSE");
	return(0);
}