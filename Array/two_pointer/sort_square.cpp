/*
Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

*/
#include<iostream>
#include<vector>

using namespace std;

void increasing_square(vector<int> &array){
    int left_ptr=0;
    int right_ptr=array.size()-1;
    vector<int> ans;

    while(left_ptr<=right_ptr){
        if(abs(array[left_ptr])<abs(array[right_ptr])){
            ans.push_back(array[right_ptr]*array[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(array[left_ptr]*array[left_ptr]);
            left_ptr++;
        }
    }
    cout<<endl<<"---------------------------------------"<<endl;
    cout<<"Output :";
    for(int ele:ans)
        cout<<ele<<" ";
}
int main(){
    cout<<"Enter the size of array ;";
    int size;
    cin>>size;

    cout<<"Enter the number into list : ";
    vector<int> array;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        array.push_back(ele);
    }
    // printing list
    cout<<endl<<"----------------------------------"<<endl;
    for(int ele:array){
        cout<<ele<<" ";
    }

    increasing_square(array);
    return 0;
}