//Emily Gorman 

#ifndef LAB7MYSTACK_H_
#define LAB7MYSTACK_H_
#define MAX 100
using namespace std;
#include <string>
#include <vector>
class Stack {
public:
	
	void stringstringReversal1(string input);

	bool empty() const;

	void pop();

	void push(char& c);

private:
	int stack_string[MAX];
	int top = -1;
};

class Vector {
public:

	void stringstringReversal2(string input);

};

class List {
public:

	void stringstringReversal3(string input);

};

class myStack {
public:

	void stringstringReversal4(string input);

	bool isEmpty() const;

	void push(char& c);

	char pull();

private:
	vector<char> vs;
	int stack_string[MAX];
	int top = -1;
};

#endif