#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    //number of entries
    int n;
    cin>>n;
    
    //creat a phone book map
    map<string, string> phone_book;
    
    //read phone book entries
    for (int i=0; i<n; ++i){
        string name, number;
        cin>>name>>number;
        phone_book[name]=number;
    }
    
    //process queries
    string query;
    while(cin>>query){
        if(phone_book.find(query) != phone_book.end()){
            cout << query << "=" << phone_book[query] <<endl;
        }else{
            cout<<"Not found"<<endl;
        }
    }
       
    return 0;
}
