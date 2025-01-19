#include <iostream>
using namespace std ; 
int main (){
    long long n ; 
    long long output = 0 ;
    cin >> n ; 
    
        // for(int i = 0 ; i <= n ; i += 2 ){ output += i ; } ; 
    
        // for(int i = 1 ; i <= n ; i += 2 ){ output -= i ; } ; 
    // cout << output ;
    
    if(n % 2 == 0 ){cout << (n/2) ;}
    if(n % 2 != 0 ){cout << -((n+1)/2) ;}

    return 0 ;
};

// #include <iostream>

// long long f(long long n) {
//     if (n % 2 == 0) {
//         return n / 2;
//     } else {
//         return -(n + 1) / 2;
//     }
// }

// int main() {
//     long long n;
//     std::cin >> n;
//     std::cout << f(n) << std::endl;
//     return 0;
// }
