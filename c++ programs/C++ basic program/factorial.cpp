#include<iostream>
using namespace std;

int main(){
    //for eg we have to find factorial of 4, 4*3*2*1=24
    int num,fact=1;
    cout<<"Enter a number :";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact*=i;
        /* code */
    }
    cout<<"factorial of "<<num<<" is "<<fact;
    
  return 0;
}