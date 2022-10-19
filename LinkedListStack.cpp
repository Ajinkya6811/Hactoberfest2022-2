#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};
class Stack
{
	Node* head; // store the head of ll created by objects of ll;
	int size; // for the get size of stack in O(1) time;
	
	public:
		Stack()
		{
			head=NULL;
			size=0;
		}
		
		int getSize()
		{
			return size;
		}
		
		bool isEmpty()
		{
			return size==0;
		}
		
		void push(int element)
		{
			 // creating the node and always insert in begining of node for O(1) time complexity of all operations;
			Node* newNode=new Node(element);
			if(head==NULL)
			{
				head=newNode;
				size++;
			}
			else
			{
				newNode->next=head;
				head=newNode;
				size++;
			}
		}
		
		int pop()
		{
			if(head==NULL)
			{
				cout<<"Stack Empty"<<endl;
				return INT_MIN;
			}
			int data=head->data;
			head=head->next;
			size--;
			return data;
		}
		
		int top()
		{
			if(isEmpty())
			{
				cout<<"Stack Empty"<<endl;
				return INT_MIN;
			}
			return head->data;
		}
};
int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.getSize()<<endl;
	cout<<s.pop()<<endl;
	cout<<!s.isEmpty()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
}
