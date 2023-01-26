#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int revNum=0;
    
    while (num>0)
    {
        int lastDigit=0;
        lastDigit = num%10;
        revNum = (revNum*10)+lastDigit;
        num = num/10;
    }
    cout<<revNum;
    
}