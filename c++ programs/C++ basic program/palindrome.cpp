#include<iostream>
using namespace std;

int main(){
  // palindrome numbers
       int num;
       cout<<"enter a number :";
       cin>>num;//`121
       int i=num,rem=0,result=0;
      //  int rem=0;
       while(num>0){
           rem=num%10;//1,2,1
           result=result*10+rem;//1,12,121
           num=num/10;//12,1,0
       }
       if(result==i){
          cout<<i<<" is palindrome number";
       }
       else{
           cout<<i<<" is not  palindrome number";
       }

  return 0;
}