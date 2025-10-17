#include<iostream>
using namespace std ; 
int main (){
    int n , f ;
    cin >> n >> f ; 
    int count=0 ;
    for(int b=0 ; b<n ; b++){ int j ; cin>>j ; if(j>f){count+=2;} ; if(j<=f){count+=1;} };
    cout<< count ; 
    return 0 ;
}