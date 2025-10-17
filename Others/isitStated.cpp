#include<iostream> 
#include<string> 
using namespace std ; 
int main(){
    int n ; 
    cin >> n ;
    for(int b=0 ; b<n ; b++){
        string cs ; 
        cin>> cs ;
        bool isStated = false ;
        for(int j=0 ; j<cs.length() ; j++){
            if(cs[j]=='i' && cs[j+1]=='t'){isStated = true ;};
        }
        if(isStated)cout<< "YES" << endl  ;
        if(!isStated)cout<< "NO" << endl  ;
    };

    return 0 ; 
};