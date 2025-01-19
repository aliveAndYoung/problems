#include<iostream> 
using namespace std ;
const int maxSize = 8 ;
template<class type>
class stack{
    int top ;
    type items [maxSize] ;
    public: 
    stack():top(-1) {};
    bool isEmpty (){
        return ( top < 0 ) ;
    };
    void push (type item){
        if( top >= maxSize-1 ){
            cout<< "sorry the stack is currently full \n" ;
        }else{
            top++ ;
            items[top] = item ;
        }
    };
    void pop( ){
        if(isEmpty()){
            cout<<"the stack is already empty \n" ;
        }else{
            top-- ;
        }
    };
    void pop( type & element  ){
        if(isEmpty()){
        }else{
            top-- ;
        }
    };
    void getTop(type & element){
        if(isEmpty()){
            cout<<"the stack is empty \n" ;
        }else{
            element= items[top] ;
            cout<<element << endl ;
        }
    };
    void print(){
        if(isEmpty()){
            cout<<"the stack is empty \n" ;
        }else{
            cout<< " [ " ;
            for(int i = top ; i>=0 ; i-- ){
                cout<< " " << items[i]<<" " ;
            }
            cout<< " ]  \n " ;
        }

    }
};
int main() {
	stack<int>s;
	s.push(5);
	s.push(15);
	s.push(20);
	s.push(30);
	s.push(40);
	s.print();
	s.pop();
	s.print();
    return 0 ;
}