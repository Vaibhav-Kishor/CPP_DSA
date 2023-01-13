/*
Rotate the given array 'a' by k steps, where k is non-negative. Note: k can be greater than n as well where n is the size of array 'a'.
*/
#include<iostream>
#include<vector>

using namespace std;

void rotate_array(vector<int> &array,int steps){
    steps=steps%(array.size());
    vector<int>ans_array;

    for(int i=array.size()-steps;i<array.size();i++){
        for(int j=0;j<=steps;j++){
            ans_array[j]=array[i];
        }
    }
}
int main(){
    cout<<"Enter the size of an array : ";
    int size;
    cin>>size;

    vector<int> array;
    cout<<"Enter the number into list : ";
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        array.push_back(ele);
    }
    cout<<endl<<"--------------------------------"<<endl;
    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<endl<<"---------------------------------"<<endl;
    cout<<"Enter the step : ";
    int steps;cin>>steps;



    rotate_array(array,steps);
    return 0;
}