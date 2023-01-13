#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    int size;
    cout<<" Enter the size of array :";
    cin>>size;

    vector<int> array;
    cout<<"Enter the number :";
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        array.push_back(ele);
    }
    cout<<"--------------------------------------------";
    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<endl<<"--------------------------------------------"<<endl;
    
    int target_element;
    cout<<" Enter Target Element : ";
    cin>>target_element;

    int occurance=0;
    for(int i=0;i<size;i++){
        if(array[i]==target_element){
            occurance++;
        }
    }
    cout<<" Occurance of Given Number : "<<occurance;
    return 0;
}