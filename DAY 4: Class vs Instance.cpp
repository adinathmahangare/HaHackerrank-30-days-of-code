#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    private:
    int age;
    
    public:
    Person(int initialAge){
        if (initialAge<0){
            cout<<"Age is not valid, setting age to 0."<<endl;
            age = 0;
        }
        else{
        age = initialAge;
        }
    }
    
    void amIOld(){
        if (age<13){
            cout<<"You are young."<<endl;
        }else if(age>=13 && age <18){
            cout<<"You are a teenager."<<endl;
        }else{
            cout<<"You are old."<<endl;
        }
    }
    
    void yearPasses(){
        age+=1;
    }
};


int main() {
    int t;
    cin>>t;
    
    for(int i=0; i<t; ++i){
        int age;
        cin>>age;
        
        Person p(age);
        
        p.amIOld();
        
        for(int j=1; j<= 3; ++j){
            p.yearPasses();
        }
        
        p.amIOld();
        cout<<endl;
    }  
    
    return 0;
}
