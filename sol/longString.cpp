#include <iostream>
#include <string>
using namespace std ; 
int main (){
 
    int n ; 
    cin >> n ; 
    string answer [ n  ] ;
    for (int i = 0 ; i < n  ; i++ ){
        string inputCase ;
        cin >> inputCase;
        answer[i] = inputCase ;
    };
    for(int i = 0 ; i < n ; i ++ ){
        string testCase ;
        testCase = answer[ i ] ;
     if (testCase.length() < 11 ){
 
            cout <<  testCase << endl ;
        }else{
            cout<< testCase[0]
            << (testCase.length())-2 
            << testCase[(testCase.length())-1] 
            << endl;
        };};
 
    return 0 ;
};