//Emily Gorman

#include "Lab7MyStack.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
using namespace std;

void Stack::stringstringReversal1(string input) {
	int len = strlen(input.c_str());
	int i;
	for (i = 0; i < len; i++)
		push(input[i]);

	for (i = 0; i < len; i++)
		pop();

}

void Vector::stringstringReversal2(string input) {
	int len = input.length();
	char arr[1024];
	strcpy_s(arr, input.c_str());
	vector<char> V;
	V.assign(arr, arr + len);
	for (int i = 0; i < len; i++)
		V.push_back(input[i]);
	for (int i = 0; i < len; i++)
		V.pop_back();
	reverse(begin(V), end(V));
	for (std::vector<char>::const_iterator i = V.begin(); i != V.end(); ++i)
		std::cout << *i;
}

void List::stringstringReversal3(string input) {
	int len = input.length();
	char arr[1024];
	list<char> l;
	strcpy_s(arr, input.c_str());
	for (int i = 0; i < len; i++)
	{
		l.push_back(arr[i]);
	}
	reverse(begin(l), end(l));
	for (list<char>::iterator iter = l.begin(); iter != l.end(); iter++) {
		cout << *iter;
	}
}

void myStack::stringstringReversal4(string input) {
	int len = strlen(input.c_str());
	int i;
	for (i = 0; i < len; i++)
		push(input[i]);

	for (i = 0; i < len; i++)
		cout << pull();
}

bool Stack::empty() const {
	if (top == -1)
		return 1;
	else
		return 0;
}

bool myStack::isEmpty() const {
	return vs.empty();
}

void Stack::pop() {
	printf("%c", stack_string[top--]);
}


void myStack::push(char& c) {
	if (top == MAX - 1) {
		printf("stack overflow");
	}
	else {
		stack_string[++top] = c;
	}
}

void Stack::push(char& c) {
	if (top == MAX - 1) {
		printf("stack overflow");
	}
	else {
		stack_string[++top] = c;
	}
}

char myStack::pull() {
	return stack_string[top--];
}



