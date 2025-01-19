#include <iostream>
#include <string>
using namespace std ; 
int main (){

    int n = 0 ;
    int counter = 0 ;
    cin >> n ; 
    int cases [n][3] ;
    for(int i = 0 ; i < n ; i ++ ){
        for(int j  = 0 ; j < 3 ;  j++){
        cin >> cases [i][j] ;
        }
    };
    for(int m = 0 ; m < n ; m++){
        if(cases[m][0]+cases[m][1]+cases[m][2] > 1){
            counter += 1 ;

// cout << "one step" ;     
   }
    };
    cout<< counter ; 
    return 0 ; 
};