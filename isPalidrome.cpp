#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    
    int dublicateNum = num;
    int revNum=0;
    while (dublicateNum>0)
    {
            int lastDigit=0;
            lastDigit = dublicateNum%10;
            revNum = (revNum*10)+lastDigit;
            dublicateNum = dublicateNum/10;
    }
    if(num==revNum) cout<<"True";
    else cout<<"False";
    
   return 0; 
}