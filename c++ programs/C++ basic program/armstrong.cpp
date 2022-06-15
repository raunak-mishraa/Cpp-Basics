#include<iostream>
using namespace std;

int main(){
    // Armstrong number

       int num,i;
       cout<<"enter a number ";
       cin>>num;
       i=num;
       int rem;
       int sum=0;
       while(num>0){
           rem=num%10;
           num=num/10;
           sum=sum+(rem*rem*rem);
       }
       if (sum==i){
        cout<<i<<" is an armstrong number";
       }
       else{
         cout<<i<<" is not an armstrong number";
       }

  return 0;
}