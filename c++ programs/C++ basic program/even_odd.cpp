#include<iostream>
using namespace std;

int main(){
    //even number is the number which is divided by 2,reminders comes 0 and odd number is a number which cannot divide by 2
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n%2==0){
        cout<<n<<" is even number";
    }
    else{
        cout<<n<<" is not odd number";
    }
  return 0;
}