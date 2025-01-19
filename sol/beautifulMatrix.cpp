#include<iostream>
using namespace std ;
#include<math.h>
int main (){
    int mat[5][5];
    for(int i=0 ; i<5 ; i++){
       cin >> mat[i][0] >>mat[i][1] >>mat[i][2] >>mat[i][3] >>mat[i][4]  ; 
    };
    int  rows = 0 ;
    int columns = 0 ; 
    int steps = 0 ;
    for(int r = 0 ; r < 5 ; r++){

        for(int c = 0 ; c < 5 ; c++){
            if( mat[c][r] == 1 ){
                columns = c ;
                rows = r ; 
            }; 
        };
        
    };
           steps +=  abs(columns - 2);
           steps +=  abs(rows - 2);
           cout <<steps ; 
    return 0 ; 
};