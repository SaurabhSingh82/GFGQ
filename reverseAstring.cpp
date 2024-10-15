#include<iostream>
#include<string>
using namespace std;
int main(){
  string st;
  cout<<"enter string";
  getline(cin,st);
  stack<char> s;
  for(int i=0;i<st.length();i++){
    s.push(st[i]);
  }
  string str="";
  while(!s.empty()){
    char ch=s.top();
    str.push_back(ch);
  }
  cout<<str;
  
  
  
}
