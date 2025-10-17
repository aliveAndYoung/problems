#include<iostream> 
#include<string> 
using namespace std ; 
int main (){
    int n ;
    cin >>n ; 
    for(int h=0 ; h<n; h++ ){
        int m , s=0 ;
        string p ;
        cin >> m >> p ; 
        for(int a=0 ; a<m ;a++){if( p[a] == '1' ){ s+=1; };};
        if(s%2==1){cout<<"NO"<<endl ;}
        else if(s==2){for(int y=0 ;y<m ;y++ ){if(p[y]=='1'){if(p[y]==p[y+1]){cout<<"NO"<<endl ;}else{cout<<"YES"<<endl ;}}}}
        else{cout<<"YES"<<endl ;} ;
    };

    return 0;
};