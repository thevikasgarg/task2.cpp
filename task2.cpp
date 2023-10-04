#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int 
int main (){ 
int a,b;
cout<<"ENTER YOUR TWO NUMBERS :";
cin>>a>>b;cout<<"WHAT YOU WANT TO DO :";
char ch;cin>>ch;
if(ch=='+')cout<<a+b;
if(ch=='-')cout<<abs(a-b);
if(ch=='*')cout<<a*b;
if(ch=='/')cout<<float(a/b); 
return 0;}
