#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = NULL;
	}
};

class Linkedlist
{
public:
	Node* head;
	Linkedlist()
	{
		head = NULL;
	}

	/*bool isempty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}*/

	bool isempty()
	{
		return (head == NULL);
	}

	void InsertFirst(int newvalue)
	{
		Node* newnode= new Node();
		newnode->data = newvalue;
		if (isempty())
		{
			newnode->next = NULL;
			head = newnode;
		}
		else
		{
			newnode->next = head;
			head = newnode;
		}

	}

	void display()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	int count()
	{
		int counter=0;
		Node* temp = head;
		while (temp != NULL)
		{
			counter++;
			temp = temp->next;
		}
		return counter;
	}

	bool isfound(int key)
	{
		bool found = false;
		Node* temp = head;
		while (temp != NULL)
		{
			if (temp->data == key)
				found = true;
			temp = temp->next;
		}
		return found;

	}
	void insertbefore(int item, int newvalue)
	{
		if (isempty())
			InsertFirst(newvalue);

		if (isfound(item))
		{
			Node* newnode = new Node();
			newnode->data = newvalue;
			Node* temp = head;
			while (temp != NULL && temp->next->data != item)
			{
				temp = temp->next;
			}
			newnode->next = temp->next;
			temp->next = newnode;
		}
		else
		{
			cout << "Sorry , Item Not Found \n";
		}
	}
	void append(int newvalue)
	{
		if (isempty())
			{InsertFirst(newvalue);}
		else
		{
		Node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		Node* newnode = new Node();
		newnode->data = newvalue;
		temp->next = newnode;
		newnode->next = NULL;
		}
	}

	void Delete(int item)
	{
		
		if (isempty())
			cout << "List is empty , no items to delete \n";
		Node* delptr = head;
		if (head->data == item)
		{
			
			head = head->next;
			delete delptr;
		}
		else
		{
			Node* prev = NULL;
			delptr = head;
			while (delptr->data != item)
			{
				prev = delptr;
				delptr = delptr->next;
			}
			prev->next = delptr->next;
			delete delptr;

		}

		
		
		

	}
	
};


int main()
{
	Linkedlist lst;
	// lst.InsertFirst(20) ; 
	// lst.InsertFirst(10) ;
	// lst.display()  ;


	   Linkedlist myls ; 
    myls.InsertFirst( 60 );
    myls.InsertFirst( 50 );
    myls.InsertFirst( 30 );
    myls.InsertFirst( 20 );
    myls.InsertFirst( 10 );
    myls.insertbefore(50 , 40 );
    myls.display();


	// if (lst.isempty())
	// 	cout << "The List is Empty \n";
	// else
	// 	cout << "The List contains " << lst.count() <<endl;
	// int item;
	// cout << "Enter Item to insert in the list \n";
	// cin >> item;
	// lst.InsertFirst(item);
	// lst.display();
	// cout << "Enter Item to insert in the list \n";
	// cin >> item;
	// lst.InsertFirst(item);
	// lst.display();
	// cout << "Enter Item to insert in the list \n";
	// cin >> item;
	// lst.InsertFirst(item);
	// lst.display();
	// cout << "The List contains " << lst.count() << endl;

	/*cout << "Enter Item to search for \n";
	cin >> item;
	if (lst.isfound(item))
		cout << "Item Found \n";
	else
		cout << "Item not Found \n";*/

// 	int newvalue;
// 	cout << "Enter  item to delete \n";
//    cin >> item;
	//cin >> newvalue;
	/*lst.insertbefore(item, newvalue);*/
	/*lst.append(newvalue);*/
    // lst.Delete(item);
	// lst.display();
}