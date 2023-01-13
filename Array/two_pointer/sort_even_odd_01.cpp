/*
Given an array of integers 'a', move all the even integers at the beginning of the array followed by all the odd integers. The relative order of odd or even integers. The relative order of odd or even integers does not matter. Return any array that satisfied the condition.

*/
#include<iostream>
#include<vector>

using namespace std;

void sort_even_odd(vector<int> &array){
    int left_ptr=0;
    int right_ptr=array.size()-1;

    while(left_ptr<right_ptr){
        if(array[left_ptr]%2==0){
            left_ptr++;
        }
        if(array[right_ptr]%2!=0){
            right_ptr--;
        }
        if(array[left_ptr]%2!=0 && array[right_ptr]%2==0){
            int temp = array[left_ptr];
            array[left_ptr++]=array[right_ptr];
            array[right_ptr--]=temp;
        }
    }
    cout<<endl<<"-------------------------"<<endl;
    cout<<"Output :"<<endl;
    for(int ele:array){
        cout<<ele<<" ";
    }

}
int main(){
    cout<<"Enter the size of array ; ";
    int size;
    cin>>size;

    cout<<"Enter the number into the list : ";
    vector<int> array;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        array.push_back(ele);
    }
    cout<<endl<<"---------------------------------"<<endl;
    for(int ele:array){
        cout<<ele<<" ";
    }

    sort_even_odd(array);
    return 0;
}