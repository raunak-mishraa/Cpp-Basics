//find prime number from 1 to N or low to high

#include<iostream>
using namespace std;

int main(){
int num;
cout<<"Enter a number";
cin>>num;
for(int i=1;i<num;i++)
{
    int count=0;
    for (int j = 2; j*j <= i; j++)
    {
        if(i%j==0){
            count++;
            break;
        }
    }
   if (count==0)
{
    cout<<i;
}   
}
  return 0;
}