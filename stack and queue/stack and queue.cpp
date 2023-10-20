// stack and queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

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

class Stack
{
public:
	Node* top = NULL;
	Stack()
	{

	}
	void Push(int data)
	{
		Node* newnode = new Node(data);
		if (!top)
		{
			top = newnode;//updating top
			return;
		}
		newnode->nextaddress = top;
		top = newnode;
	}

	void Pop()
	{
		Node* temp = top;
		if (top->nextaddress != NULL)
		{
			top = top->nextaddress;
		}

		temp = NULL;
		delete temp;
	}

	void Peek()
	{
		if (top)
		{
			cout << top->data << endl;
		}
		else
		{
			cout << "Stack is empty" << endl;
		}
	}
	void Isempty()
	{
		if (!top)
		{
			cout << "Stack is empty" << endl;
		}
		else
		{
			cout << "Stack is not empty" << endl;
		}
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

}

