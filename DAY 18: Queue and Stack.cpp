#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class Solution{
  private:
  stack<char> s;
  queue<char> q;
  
  public:
  
  bool isStackEmpty(){
    return s.empty();
  }
  
  void pushCharacter(char ch){
      s.push(ch);
  }
  
  void enqueueCharacter(char ch){
      q.push(ch);
  }
  
  char popCharacter(){
      char top = s.top();
      s.pop();
      return top;
  }
  
  char dequeueCharacter(){
      char front = q.front();
      q.pop();
      return front;
  }
    
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    
    Solution obj;
    
    for (char c: s){
        obj.pushCharacter(c);
        obj.enqueueCharacter(c);
    }
    
    bool isPalindrome = true;
    
    while(!obj.isStackEmpty()){
        if (obj.popCharacter() != obj.dequeueCharacter()){
            isPalindrome = false;
            break;
        }
    }
         
    if (isPalindrome){
        cout<<"The word, "<<s<<", is a palindrome."<<endl;
    }else{
        cout<<"The word, "<<s<<", is not a palindrome."<<endl;
    }
    
    return 0;
}
