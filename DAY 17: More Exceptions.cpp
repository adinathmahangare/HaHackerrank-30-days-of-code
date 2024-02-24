#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>
using namespace std;

class Calculator{
     public:
    
     int Power(int n, int p){
         if (n<0 || p<0){
             throw invalid_argument("n and p should be non-negative");
         }
         
         return pow(n, p);
     }   
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    
    Calculator myCalculator;
    while(t--){
        int n, p;
        cin>>n>>p;
        
        try {
            int result = myCalculator.Power(n, p);
            cout<<result<<endl;
        }catch(const invalid_argument& e){
            cout<< e.what()<< endl;
        }
    }   
    return 0;
}
