#include<iostream>
#include<vector>

using namespace std;

 void sort_0s_1s(vector<int> &array){
    int zero_count=0;
    for(int i=0;i<array.size();i++){
        if(array[i]==0){
            zero_count++;
        }
    }
    for(int i=0;i<array.size();i++){
        if(i<=zero_count){
            array[i]=0;
        }
        else{
            array[i]=1;
        }
    }
    cout<<"Output : ";
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }

 }
 int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;

    vector<int> array;
    cout<<"Enter the number in list :";
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        array.push_back(ele);
    }
    cout<<endl<<"------------------------------------"<<endl;
    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<endl<<"-------------------------------------"<<endl;
    sort_0s_1s(array);

    return 0;
 }