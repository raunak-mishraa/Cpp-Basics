#include<iostream>
using namespace std;

int main(){
    //a positive integer that is equal to the sum of its proper divisors, for eg.6,which can be divide by 1,2,3 and the sum of it's divisors is 1+2+3=6
    int num,sum=0;
    cout<<"Enter a number";
    cin>>num;
    //using while loop,you can use while loop as well
    for (int i = 1; i < num; i++)
    {
        /* code */
        if(num%i==0){
        sum=sum+i;
        }
    }
    if (num==sum)
    {
        /* code */
        cout<<"this is perfect number";
    }
    else{
        cout<<"this is not perfect number";
    }
    

  return 0;
}