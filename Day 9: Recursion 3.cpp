#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long factorial(int num){
    if (num==0){
        return 1;
    }else{
        return num*factorial(num-1);
    }
}

int main() {
    int num;
    cin>>num;
    
    unsigned long long result = factorial(num);
    cout<<result;
       
    return 0;
}
