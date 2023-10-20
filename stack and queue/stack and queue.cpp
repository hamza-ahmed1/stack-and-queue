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

class Node
{

public:
	int data;
	Node* nextaddress;

	Node(int data)
	{
		this->data = data;
		nextaddress = NULL;
	}
};
class Queue
{
public:
	Node* front = NULL;
	Node* rear = NULL;

	Queue() {}

	void Enqueue(int data)
	{
		Node* newnode = new  Node(data);
		if (!rear)
		{
			rear = newnode;
			front = newnode;
		}
		rear->nextaddress = newnode;
		rear = newnode;
	}

	void dequeue()
	{
		Node* temp = front;
		if (rear)
		{
			front = front->nextaddress;
		}
		temp = NULL;
		delete temp;
	}

	void Peek()
	{
		if (rear)
		{
			cout << front->data << endl;
		}
	}
	void Is_empty()
	{
		if (!front)
		{
			cout << "Queue is Empty" << endl;
		}
		else
		{
			cout << "Queue is not empty" << endl;
		}
	}
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

