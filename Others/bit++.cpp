#include <iostream>
#include <string>
using namespace std ;
int main (){
    int x =0  ;
    int y ;
    string statments ;
    cin >> y ; 
   for(int m = 0 ;m < y ; m ++){ cin >> statments ; 
    // cout<< "========="<< endl  << statments << endl << "========="<< endl << x; 
    int addCount = 0 ;
    int  minusCount = 0 ;
    for(int i =0 ; i < statments.length() ; i ++){
        if(statments[i] == '+') {addCount += 1 ;} 
        else if (statments[i] == '-') {minusCount += 1 ; }
    };
    addCount = addCount / 2 ;
    minusCount = minusCount / 2 ;
    for(int z = 0 ; z < addCount ; z++){x += 1 ;};
    for(int z = 0 ; z < minusCount ; z++){x -= 1 ;};}
    cout <<endl << x ;

    return 0 ; 
};