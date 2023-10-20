// stack and queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Stack
{
	int top = -1;
	int arr[10] = {0};

public:
	void push(int val)
	{
		if (top >= 10)
		{
			cout << "Out of bound ,\n";
			return;
		}
		arr[top + 1] = val;
		top++;
	}

	void pop()
	{
		if (top == -1)
		{
			cout << "Stack is empty,\n";
		}
		arr[top] = 0;
		top--;
	}

	void is_empty()
	{
		if (top == -1)
		{
			cout << "Stack is empty,\n";
		}
	}
	void Top()
	{
		if (top == -1)
		{
			cout << "Stack is empty,\n";
		}
		else {
			cout << arr[top] << endl;
		}
	}
};

class queue

{

};

int main()
{
	Stack s;
	s.is_empty();
	s.push(6);
	s.Top();
	s.pop();
	s.pop();
}

