// WAP to Even Sum subtracted from Odd sum
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int capacity;
    cout<<"Enter the size of list : ";
    cin>>capacity;


    vector<int> array(capacity);
    cout<<"Enter data in list : ";
    for(int &ele:array){
        cin>>ele;
    }

    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<"\n----------------------\n";
     
    int sum=0;
    for(int idx=0;idx<array.size();idx++){
        if(array[idx]%2==0){
            sum+=array[idx];
        }
        else{
            sum-=array[idx];
        }
    }
    cout<<"\nEven Sum Subtracted Odd Sum : "<<sum;


}