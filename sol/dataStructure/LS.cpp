#include <iostream> 
using namespace std ;


class  Node {
    public: 
    int data ;
    Node *  next  ;
    Node(){
        data = 0 ; 
        next = NULL ;
    } ;
}; 
class linkedList {
    public: 
    Node * head ;
    int length ; 

    linkedList(){
        length = 0 ;
        head = NULL ; 
    };

    bool isEmpty(){
        return ( head == NULL ) ;
    }

    void insertFirst ( int newItem ){

        Node* temp = new Node ;
        temp->data = newItem ; 
        if(isEmpty()){
            temp->next = NULL ; 
        }else{
            temp->next = head ;
        }
        head = temp ;
        length += 1 ;
        // delete temp ;
        // ???
    };

    void display (){
        if (isEmpty())
        {
            cout << "the list is empty \n" ;
        }
        else{
        Node * curn = head;
        while( curn != NULL ){
            cout<< "the data  : " << curn -> data << endl ;
            curn = curn->next ;
        }
    }
    };
    
    int count(){
        return length ;
    };
    bool isFound( int key ){
        bool found = false  ; 
        Node * curr = head ;
        while(curr  != NULL ){
            if(curr->data == key){
                found = true ;
            }
            curr = curr->next;
        }
        return found ; 
    };

    void insertBefore( int item , int b4 ){
        if (  isFound( b4 ) ){
            Node* newNode = new Node() ;
            newNode->data = item ;
            Node* prev = head ;
            while( prev->next->data != b4 && prev!= NULL   ){
                prev = prev->next ;
            }
            newNode->next = prev->next ;
            prev->next = newNode ;
        }else{
            cout<< "item not found \n" ;
        }
    };

    // 	void insertbefore(int item, int newvalue)
	// {
		
	// 	if (isFound(item))
	// 	{
	// 		Node* newnode = new Node();
	// 		newnode->data = newvalue;
	// 		Node* temp = head;
	// 		while (temp != NULL && temp->next->data != item)
	// 		{
	// 			temp = temp->next;
	// 		}
	// 		newnode->next = temp->next;
	// 		temp->next = newnode;
	// 	}
	// 	else
	// 	{
	// 		cout << "Sorry , Item Not Found \n";
	// 	}
	// }

    void append ( int newValue ) {
        Node* newNode = new Node ;
        newNode->data = newValue ;
        Node* temp = head ;
        while(temp->next != NULL){
            temp = temp->next ;
        } 
        temp->next = newNode ;

    }
    void Delete(int item){
        if( isFound(item) ){
            
        Node* delptr = head ;
        if(head->data == item ){
            head = head->next ;
            delete delptr ;
        }else{
            Node* prev = nullptr ;
            while( delptr != NULL && delptr->data != item  ){
                prev = delptr ;
                delptr = delptr ->next ;
            }
            prev->next = delptr->next ;
            delete delptr ;

        }

        }else{
            cout<< "item not found \n" ;
        }
    };

};
int main (){
    linkedList myls ; 
    myls.insertFirst( 60 );
    myls.insertFirst( 50 );
    myls.insertFirst( 40 );
    myls.insertFirst( 30 );
    myls.insertFirst( 20 );
    myls.insertFirst( 10 );
    myls.insertBefore( 35 , 40 );
    myls.append(70) ;
    myls.append(75) ;
    myls.display();
    myls.Delete(75) ;
    myls.Delete(35) ;
    myls.display();
    return 0 ; 
};