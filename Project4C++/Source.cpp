#include<iostream>

using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node()
	{
		next = NULL;

	}
};
	class list
	{
	public:
		Node* head = NULL;

		void puchfront(int val) {
			Node* newnode = new Node(;


			if (head == NULL) {
				head = newnode;
			}
		
			else
			{
				newnode->next = head;
			}
		}
};

int main()
{
	list ll;
	ll.puchfront(5);
	return 0;
}