#include<iostream>
using namespace std;

int main(){
    //Prime number is a number that is visible by only 1 and itself for eg. 7 is a prime number that is only divisible by 1 and itself 
       int num,count=0;;
       cout<<"Enter a number :";
       cin>>num;
       for (int i = 1; i <=num; i++)
       {
           /* code */
           if (num%i==0)
           {
               /* code */
               count++;
           }
           
       }
       if (count==2)
       {
           cout<<num<<" is prime";
           /* code */
       }
       else{
           cout<<num<<" not prime";
       }
       
       
  return 0;
}