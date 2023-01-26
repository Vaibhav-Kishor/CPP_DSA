#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int digit_count=0;
    
    while(num>0){
        num=num/10;
        digit_count=digit_count+1;
    }
    cout<<digit_count;
    return 0;
}