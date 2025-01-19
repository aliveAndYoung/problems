#include <iostream>
#include <string>
using namespace std ;
int main (){
    string first , second ; 
    cin >> first >> second ;
    int i = first.length() - 1 ; 
    int j = second.length() - 1 ;
    int moves = first.length() + second.length() ;
    int count = 0 ; 
    while( i >= 0 && j >=0 && first[i] == second[j]  )
    {  count +=1 ; i -=1 ; j-=1 ;  }; 
    moves = moves - (count * 2) ;
    cout << moves ;
    
    
    
    return 0 ;}