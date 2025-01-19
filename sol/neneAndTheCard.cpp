#include<iostream> 
#include<algorithm>
using namespace std ;
int main (){
    int a ;
    cin>> a ;
    for(int b=0; b<a ; b++){
        int c=0;
        cin>> c;
        int d[c-1] , e=0 ;
        for(int f=0 ;f<c; f++ ){cin>>d[f] ;} 
        sort(d ,d+c);     
        for(int g=0 ; g<(c-1) ;g++){if(d[g]==d[g+1]){e+=1;};};
        cout<<e<<endl;    
    };
    return 0;
};