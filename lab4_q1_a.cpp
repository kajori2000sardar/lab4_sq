//include library
#include<iostream>

using namespace std;

//create class for stack using node
class stackLL
{
	public:

	  //declaring variable 
	  int data;
	  //pointer to the next node
	  Node * next;

	  stackLL()
	  {
		next=NULL;
	  }

	  //pushes on the top
	  void Insert(int value, int pos)
	  {
		//reach the place before the position
		Node * current = head;
		int i=1;
		while(i<pos)
		{
			i++;
			current = current ->next;
		}

		//create a node
		Node * temp = new Node;
		temp - > data = value;

		//moving pointer
		temp ->next = current ->next;
		current -> next = temp;

	  }

	  //pop from the top
	  void Delete(int pos)
	  {
		//reach the place before the position
		Node * current = head;
		int i=1;
		while(i<pos)
		{
			i++;
			current = current ->next;
		}
        	//store the tail in temp
        	Node * temp = tail;
        	//before tail has to point to null
        	Node * current = head;
        	while(current->next != tail)
		{
        		    current = current->next;
        	}
        	current->next = NULL; 

        	//update tail
        	tail = current;
        	//delete temp
        	delete temp;
	  }

	  //size of the stack
	  int CountItems()
	  {
		Node * current = head;
		//condition to check the no. of elements in linked list
		int i=1;
		while(current -> next!=NULL)
		{
			i++;
		}
		//returns the no. of elements in linked list
		return i-1;
	  }

	  //whether stack is empty or not
	  bool isEmpty()
	  {
		if(top == NULL) 
			return true;
		return false;
	  }

};

//creating main
int main()
{
	  stackLL L1; 
	  for(int i= 1; i < 11; i++)
	  {
		L1.Insert(i);
	  }
	  //l1.insert(1);

	  int c=L1.CountItems();
	  cout<<"the no. is items is "<<c;

	  int b=L1.isEmpty();
	  if(b==0)
		cout<<"Stack is empty ";
	  else
		cout<<"Stack is not empty ";

	  //terminating the program
	  return 0;
}
