#include<iostream>
using namespace std ; 
#include<string>

int main(){
    int counter = 0 ;
    string c ;
    //{a , b, a, t, p}
    getline( cin , c );
    for(int i = 0 ; i < c.length() ; i++ ){
        if ( c[i] == '{' ) continue ; 
        if ( c[i] == ' ' ) continue ; 
        if ( c[i] == ',' ) continue ; 
        if ( c[i] == '}' ) break ; 
        char neww = c[i] ; 
        bool isNew ; 
        for(int b = 0 ; b < i ; b++ ){
            if ( neww == c[b] ){ isNew = false ; break ;} 
            else {isNew = true ; continue ; } ;
        };
        if (isNew)  counter += 1 ;
        else continue ;
   
    };
    cout << counter ; 

};
