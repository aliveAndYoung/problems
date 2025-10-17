#include<iostream>
using namespace std; 
class complex {
    private:
    int real ;
    int img  ;
    public:
    complex( int a , int b ){
        real = a;
        img = b ;
    };
    void print(){
        cout << "("<<real << "," << img << ")" << endl ;
    };
    void operator ++ (){real +=1 ; img+=1 ;};
    complex operator + (complex operand2){
          complex myNew(0,0);
          myNew.real= real + operand2.real ;
           myNew.img = img + operand2.img  ; 
           return myNew ; 
           };
};
int main (){
    complex c(2 ,2) ;
    complex cc(6 ,6) ;
    complex ccc(0 ,0) ;
    ccc = c+cc ;
    ccc.print() ;
    ++cc;
    cc.print();
    return 0 ;
};