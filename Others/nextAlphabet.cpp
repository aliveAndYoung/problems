#include<iostream>
using namespace std ;
int main(){
    char c , nextChar ;
    cin>> c ;
    (c == 'z')? nextChar = 'a' : nextChar = c+1 ;
    cout<< nextChar ;
}