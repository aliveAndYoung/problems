# include<iostream>
using namespace std ;
int main (){
    int n , k , counter=0 ;
    cin>> n >> k ;
    int score[n] ;
    for(int c=0 ; c<n ; c++ ){cin>> score[c] ;}
    for(int v = 0 ; v < n ; v ++){
    if(score[v] >= score[k-1] && score[v]> 0){ counter += 1 ;};} ;   
    cout << counter ; 
    return 0 ;
};