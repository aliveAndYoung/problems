#include<iostream>
#include<vector>
#include <iomanip>
using namespace std ;
int main(){
    int a , b ;
    cin>> a >> b ;
    float o = float((100*b))/(100-a) ;
    cout << fixed << setprecision(2)<< o ;


}