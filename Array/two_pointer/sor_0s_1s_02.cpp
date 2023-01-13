// sort 0s and 1s
#include<iostream>
#include<vector>
using namespace std;

void sort_0s_1s(vector<int> &array){
    
    int left_ptr = 0;
    int right_ptr = array.size()-1;
    while(left_ptr<right_ptr){
    if(array[left_ptr]==0){
        left_ptr++;
    }
    if(array[right_ptr]==1){
        right_ptr--;
    }
    if(array[left_ptr]==1 && array[right_ptr]==0){
        array[left_ptr++]=0;
        array[right_ptr--]=1;
    }
    }
    // Printing sorted array
    cout<<"Output : ";
    cout<<endl<<"--------------------------"<<endl;
    for(int ele:array){
        cout<<ele<<" ";
    }
}
int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;

    // Input number
    vector<int> array;
    cout<<"Enter the number : ";
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        array.push_back(ele);
    }
    cout<<endl<<"----------------------------"<<endl;
    // Printing entered array
    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<endl<<"---------------------------------"<<endl;

    sort_0s_1s(array);

    return 0;
}