// LinkedListConcepts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

//Create a Node pointer
//struct Node
//{	// pointing to the next node;
//	Node* next;
//	int data;
//
//};
class Node
	{
	public:

	int data;
	Node* next;

	};
class LinkedList
	{
	private:
		Node * head;
		int length;
	public:
		//LinkedList();
	    //~LinkedList();
		Node* createNewNode(int data);
		Node*  insertNodeBeg(Node * head,int data);
		Node* insertNodeEnd(Node* head, int data);
		Node* inserNodeAtPos(Node* head, int pos,int data);
		Node* reverseLinkedList(Node*head);
		Node* reverseLinkedListRecursion(Node* head);
		int  findLength(Node* head);
		Node* deleteNode(Node* head,int data);
		Node* deleteNodeAtPos(Node* head,int pos);
		Node* removeKthElement(Node* head,int data);
		Node* AddTwoLinkedList(Node * head1, Node*head2);
		bool searchElement(Node* head, int data);
		bool searchElementRecursive(Node* head, int data);
		void  nthNodeFromEnd(Node*head,int pos);
		bool detectCycle(Node* head);
		int  printMiddle(Node* head);
		int IntersectionPoint(Node* head1, Node*head2);
		void printData(Node* head);
		Node * reverseutil(Node* current, Node* prev, Node* head);
		Node* removeDuplicates(Node* head);






	};



// Helper functions


int main()
{
	Node * head = NULL;
    LinkedList L1;
	char choice;
	int data;
	int pos;
	Node* head1 = NULL;
	Node* head2 = NULL;

	Node* res = NULL;

	while (1)
	{
		int option;
		// Initializing the head pointer to NULL

		cout << "Linked List Concepts" << endl;
		cout << "Choose the option which you would like to perform the linked list" << endl;
		cout << "The following are the different operations which can be performed with linked list" << endl;
		cout << "                                1.Linked List: Insertion " << endl;
		cout << "                                2.Linked List: Deletion " << endl;
		cout << "                                3.Linked List: Length " << endl;
		cout << "                                4.Linked List: Insertion " << endl;
		cout << "                                5.Linked List: Search " << endl;
		cout << "                                6.Linked List: Print the middle node " << endl;
		cout << "                                7.Linked List: Nth Node from the end " << endl;
		cout << "                                8.Linked List: Reversal " << endl;
		cout << "                                9.Linked List: Detecting Cycle " << endl;
		cout << "                                10.Linked List:Addition of number " << endl;
		cout << "                                11.Linked List: Merge Sort " << endl;
		cout << "                                12.Linked List: Intersection " << endl;
		cout << "                                13.Linked List: Flattening " << endl;
		cout << "                                14.Linked List: Remove Duplicates from sorted array " << endl;
		cout << "                                15.Linked List: Printing Elements " << endl;
		cout << "                                16. Quit and leave                                  " << endl;

		cin >> option;
		//cout << option << endl;
		switch (option)
		{

		case 1:

					cout << "Choose the way you would like to insert a element " << endl;
					cout << "                   a Inserting at beginning      " << endl;
					cout << "                   b Inserting at end      " << endl;
					cout << "                   c Inserting at particular position     " << endl;
					cin >> choice;
					switch (choice)
					{
						case 'a':
							cout << "Enter the data you would like to insert" << endl;
							cin >> data;
							head=L1.insertNodeBeg(head,data);
							break;
						case 'b':
							cout << "Enter the data you would like to insert" << endl;
							cin >> data;
							head=L1.insertNodeEnd(head, data);
							break;

						case 'c':

							cout << "Enter the data you would like to insert" << endl;
							cin >> data;
							cout << "Enter the position you would to insert" << endl;
							cin >> pos;
							head=L1.inserNodeAtPos(head, pos, data);
							break;
					default:
						cout << "Invalid choice" << endl;
						exit(1);
						break;
					}
					break;
		case 2:
				cout << "Choose the way you would to create a node" << endl;
				cout << "                   a Deleting node based upon the key      " << endl;
				cout << "                   b Deleting node based upon the position      " << endl;
				cout << "                   c Remove Kth Element from the linked list      " << endl;


				cin >> choice;
				switch(choice)
				{
					case 'a':
						//int data;
						cout << "Enter the data you would like to delete" << endl;
						cin >> data;
						head = L1.deleteNode(head, data);
						break;
					case 'b':
						//int data;
						int pos;
						cout << "Enter the position where you would like to delete" << endl;
						cin >> pos;
						head = L1.deleteNodeAtPos(head, pos);
						break;
					case 'c':
						//int element;
						cout << "Enter the element whose occurence you would to take it off from the linked list" << endl;
						cin >> data;
						head = L1.removeKthElement(head, data);
						break;

					default:
						cout << "Invalid choice" << endl;
						exit(1);
						break;


				}
				break;
		case 3:
					cout << "The length of the linked list is" << L1.findLength(head) << endl;
					break;

		case 5:
					cout << "Choose the option you would to search for an element in linked list" << endl;

					cout << "                                        a Search an element by key" << endl;
					cout << "                                        b Search an element by key(Recursive solution)" << endl;

					cin >> choice;
					switch (choice)
					{
					case 'a':
						cout << "Enter the data you would like to search" << endl;
						cin >> data;
						(L1.searchElement(head, data))?cout<<"Found":cout<<"Not found" ;

						break;
					case 'b':
						cout << "Enter the data you would like to search" << endl;
						cin >> data;
						(L1.searchElementRecursive(head, data))?cout<<"Found"<<endl:cout<<"Not found"<<endl;
						break;
					default:
						cout << "Invalid choice" << endl;
						exit(1);
						break;


					}
					break;
		case 6:
					cout << "Printing the middle node"<<L1.printMiddle(head)<<endl;
		case 7:
					cout << "Input the nth position from the end" << endl;
					cin >> pos;
					L1.nthNodeFromEnd(head, pos);
					break;
		case 8:
					cout << "Choose the option you would like to reverse linked list";
					cout << "          a Reverse Linked List(Iterative method)" << endl;
					cout << "          b Reverse Linked List(Recursive method)" << endl;

					cin >> choice;
					switch (choice)
						{
							case 'a':
								cout << "Reversed Linked List" << endl;
								head = L1.reverseLinkedList(head);
								L1.printData(head);
								break;
							case 'b':
								cout << "Reversed Linked List Recursion" << endl;
								head = L1.reverseLinkedListRecursion(head);
								L1.printData(head);
								break;

							default:
								cout << "Invalid choice" << endl;
								exit(1);

								break;

						}

					break;
		case 9:
					cout << "Detecting loop" << endl;
					if (L1.detectCycle(head))
						cout << "Found" << endl;
					else
						cout <<"Not found"<< endl;
		case 10:

					cout << "adding two numbers using linked list" << endl;

					cout << "enter the first number in the reverse order " << endl;
					int length1;
					cout << "enter the size of the number" << endl;
					cin >> length1;
					for (int i = 0; i < length1; i++)
						{
							cin >> data;
							head1=L1.insertNodeBeg(head1,data);
						}
					cout << "first number in reverse order is " << endl;
					L1.printData(head1);

					cout << "enter the second number in reverse order" << endl;
					int length2;
					cout << "enter the size of the number" << endl;
					cin >> length2;
					for (int i = 0; i < length1; i++)
					{
						cin >> data;
						head2 = L1.insertNodeBeg(head2, data);
					}
					cout << "first number in reverse order is " << endl;
					L1.printData(head2);

					res=L1.AddTwoLinkedList(head1, head2);
					cout << "addition of two numbers gives us a result :" << endl;
					L1.printData(res);
					break;
		case 12:	cout << "Interesection point of two linked lists" << endl;
					cout << "Enter the first linked list"<<endl;
					cout << "Size of the first list" <<endl ;
					int size1;
					cin >> size1;
					for (int i = 0; i < size1; i++)
					{
						cin >> data;
						L1.insertNodeBeg(head1,data);
					}
					cout << "Enter the second linked list" << endl;
					cout << "Size of the second list" <<endl ;
					int size2;
					cin >> size2;
					for (int i = 0; i < size2; i++)
					{
						cin >> data;
						L1.insertNodeBeg(head2, data);
					}
					cout<<"Intersection point is :"<<L1.IntersectionPoint(head1, head2)<<endl;


					break;
		case 14:
					cout << "Removing duplicates from sorted linked list" << endl;
					head = L1.removeDuplicates(head);
					L1.printData(head);

		case 15:
					cout << "Printing the elements of a linked list" << endl;
					L1.printData(head);
					break;
		case 16:
					cout << "Abort operation!!Bye!!" << endl;
					exit(1);
					break;
		default:
					cout << "Wrong Choice !! Can't perform that operation" << endl;
					exit(1);
					break;




		}


	}

    return 0;
}

Node* LinkedList::createNewNode(int data)
{
	Node * temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}
Node* LinkedList::insertNodeBeg(Node *head, int data)
{
	Node* newNode = createNewNode(data);
	if (head == NULL)
	{
		head = newNode;
		cout << "Insrted" << endl;
		return head;

	}
	newNode->next = head;
	head = newNode;
	cout << "Inserted" << endl;
	return head;


}

void LinkedList::printData(Node* head)
{
	Node * temp = head;
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;

	}

	cout << "\n";
}

Node* LinkedList::insertNodeEnd(Node* head,int data)
{

	Node * newNode = createNewNode(data);
	if (head == NULL)
	{

		head = newNode;
		return head;
	}
	Node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		cout << temp->data;
	}
	temp->next = newNode;
	newNode->next = NULL;
	return head;
}
int LinkedList::findLength(Node * head)
{
	int length = 0;
	Node* temp = head;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;

	}
	return length;
}

Node *LinkedList::inserNodeAtPos(Node* head, int pos,int data)
{
	Node* newNode = createNewNode(data);
	Node* current = head;
	Node* prev = NULL;
	if (pos == 0)
	{
		return insertNodeBeg(head, data);
	}
	if (pos > findLength(head))
	{
		cout << "Invalid position" << endl;
		return head;

	}

	for (int i = 0; i < pos ; i++)
	{
		prev= current;
		current = current->next;

	}
	prev->next = newNode;
	newNode->next = current;
	return head;

}
Node* LinkedList::deleteNode(Node* head, int data)
{
	//Delete first occurence of a given node
	Node* current = head;
	Node* prev = NULL;
	if (head->data == data)
	{
		head = current->next;
		free(current);
		return head;

	}
	while (current && current->data != data)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
	{
		cout << "Element not found Cannot delete the particular element" << endl;
		return head;
	}
	prev->next = current->next;
	free(current);

	return head;

}
Node* LinkedList::deleteNodeAtPos(Node* head, int pos)
{
	Node* current = head;
	Node* prev = NULL;
	if (pos == 0)
	{
		head = current->next;
		free(current);
		return head;
	}
	if (pos > findLength(head))
	{
		cout << "Out of bounds or invalid entry Cannot delete" << endl;
		return head;
	}
	for(int i=0;i<pos-1;i++)
	{
		prev = current;
		current = current->next;
	}
	prev->next = current ->next ;
	free(current);
	return head;

}
Node * LinkedList::removeKthElement(Node* head, int data)
{
	Node* prev = NULL;
	Node* current = head;
	while (current  && current->data==data)
	{
		//prev = current;
		head = current->next;
		free(current);
		current = head;

	}

	while (current != NULL)
	{
		while (current && current->data != data)
		{
			prev = current;
			current = current->next;

		}
		if (current == NULL)return head;
		prev->next = current->next;
		free(current);

		current = prev->next;



	}

	return head;

}
bool LinkedList::searchElement(Node* head, int data)
	{
		Node* current = head;
		while (current != NULL)
			{
			if (current->data = data)
				{
				return true;
				}
   			}


		return false;

	}
bool LinkedList::searchElementRecursive(Node* head, int data)
{
	Node* current = head;
	if (current == NULL)return false;
	if (current->data == data)return true;
	return searchElementRecursive(current->next, data);

}

int LinkedList::printMiddle(Node* head)
	{
		Node* current = head;
		int length = findLength(head);
		int middle = length / 2;
		for (int i = 0; i < middle; i++)
			{
				current = current->next;

 			}
		return current->data;



	}
bool LinkedList::detectCycle(Node* head)
{
	//Use Flyod Cycle finding algoirthm
	Node* current = head;
	Node* slow=head;
	Node* fast=head;

	while (slow && fast && fast->next )

	{
		slow = current->next;
		fast = current->next->next;

		if (slow == fast)
			return true;


	}

	return false;

}
void LinkedList::nthNodeFromEnd(Node* head, int pos)
	{
	Node* current = head;

	int length = findLength(head);

	if (pos == 0)
	{
		cout << head->data;
		return;
	}
	if (pos > length)
	{
		cout << "Out of bounds Cannot get the Nth Node" << endl;
		return;
	}

	while (length-pos > 0)
	{
		current = current->next;
		length--;
	}
	cout << current->data;
	return;
	}

Node* LinkedList::reverseLinkedList(Node* head)
	{
	Node * current = head;
	Node * prev = NULL;
	Node * next;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;

	}
	head = prev;

	return head;


	}

Node* LinkedList::reverseLinkedListRecursion(Node* head)
	{

	if (head == NULL)
		{
		cout << "Empy list cannot reverse" << endl;
		return head;
	  }
	Node* current = head;
	Node* prev = NULL;

		return reverseutil(current, prev, head);
	}
Node* LinkedList::reverseutil(Node * current, Node* prev, Node* head)
	{
	if (current->next == NULL)
	{
		head = current;
		current->next = prev;
		return head;
	}
	Node*next = current->next;
	current->next = prev;
	return reverseutil(next, current, head);

	}

Node* LinkedList::AddTwoLinkedList(Node* head1, Node* head2)
	{
	int carry = 0;
	int sum = 0;
	Node* firstNumber = head1;
	Node* secondNumber = head2;
	Node* result = NULL;
	Node* temp = NULL;
	Node *prev = NULL;
	while (firstNumber != NULL || secondNumber != NULL)
	{
		int x = (firstNumber) ? firstNumber->data : 0;
		int y = (secondNumber) ? secondNumber->data:0;
		cout << x << y << endl;
		int carry = sum % 10;
		int sum = carry + x + y;
		cout << sum << endl;
		temp = createNewNode(sum %10);
		if (result == NULL) result = temp;
		//connect the rest to the new node
		else prev->next = temp;
		// set it for the next iteration
		prev = temp;

		if (firstNumber!=NULL)firstNumber = firstNumber->next;
		if (secondNumber!= NULL)secondNumber = secondNumber->next;

	}
	if (carry > 0)
	{
		temp->next = createNewNode(carry);
	}

	return result;
	}
int LinkedList::IntersectionPoint(Node* head1, Node* head2)
	{
	Node* link1 = head1;
	Node* link2 = head2;
	int length1 = findLength(head1);
	int length2 = findLength(head2);
	if (length1 > length2)
	{
		while (length1 != length2)
		{
			link1 = link1->next;
			length1--;

		}
	}
	else if (length2 > length1)
	{
		while (length != length2)
		{
			link2 = link2->next;
			length2--;
		}
	}

	while (link1 && link2)
	{

		if (link1 == link2)
		{
			return link1->data;
		}

		link1 = link1->next;
		link2 = link2->next;

	}

	return 0;
	}

Node* LinkedList::removeDuplicates(Node* head)
{
	Node* next;
	Node* current = head;
	if (current == NULL) return head;
	while (current->next != NULL)
		{
		if (current->data == current->next->data)
			{
				next = current->next->next;
				free(current->next);
				current->next = next;


			}
		else {
			current = current->next;
			}
		}
	return head;

}
