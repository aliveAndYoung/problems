#include<iostream>
using namespace std ;
int main (){
    int cases ; 
    cin>> cases ;
    for(int i =0 ; i <cases ; i++){
        int a ,b ,c ;
        cin >> a >> b >> c ; 
        if( a%2 == 0  && c<(2*b)) {cout << c*(a/2) << endl ;}
        else if( a%2 != 0  && c<(2*b)) { cout << (c*((a-1)/2))+b << endl ; }
        else{cout<< a*b << endl;};
    };
    return 0 ;
};