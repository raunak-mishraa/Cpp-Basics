#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    int rem=0;
    int store=0;//we are using this variable for storing the value
    while (num>0)
    {
        rem=num%10;
        store=store*10+rem;
        num=num/10;

    }
    cout<<"after reverse :"<<store;
    
  return 0;
} 