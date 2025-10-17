#include <iostream>
#include <string>
using namespace std ;
int main (){
    string s ; 
    string t ; 
    getline( cin , s );
    getline( cin , t );

    string tt = s  ; 
    
    for(int i = 0 ; i < s.length() ; i++ ){
        tt[i] = s[s.length()-1-i] ;
    }
    if(t == tt)
    {cout << "YES";}
    else{cout<< "NO";}
    
    return 0 ;}
