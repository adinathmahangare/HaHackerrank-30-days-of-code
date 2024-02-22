#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Book{
    protected:
    string title;
    string author;
    
    public:
    Book(string t, string a){
        title=t;
        author=a;
    }
    
    virtual void display()=0;
};

class MyBook : public Book{
    private:
    int price;
    
    public:
    MyBook(string title, string author, int price): Book(title, author), price(price){
        
    }
    
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    //variable declaration
    string title, author;
    int price;
    
    //inputs
    getline(cin, title);
    getline(cin, author);
    cin>>price;
    
    MyBook novel(title, author, price);
    novel.display();
    
    return 0;
}
