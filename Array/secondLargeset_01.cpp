/*
Find the second largest number in given array
*/
#include<iostream>
#include<vector>
#include<climits>

using namespace std;

// function Definition
    int largestElement(vector<int> &array,int array_size){
        int max=INT_MAX;   
        int index=-1;
        for(int i=0;i<array_size;i++){
            if(array[i]>max){
                max=array[i];
                index=i;
            }
        }
        return index;
    }

int main(){
    int array_size;
    cout<<"How much number you want to enter : ";
    cin>>array_size;

    // Putting number into array
    vector<int> array(array_size);
    cout<<"Enter Number : ";
    for(int &ele:array){
        cin>>ele;
    }
    cout<<endl<<"--------------------------------"<<endl;

    // Print Given Array
    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<endl<<"----------------------------------"<<endl;

    // Calling function
    int first_largest_number_index = largestElement(array,array_size);
    array[first_largest_number_index]=INT_MIN;

    int second_largest_number_index = largestElement(array,array_size);
    int second_largest_number = array[second_largest_number_index];

    cout<<"Output : "<<second_largest_number;
    return 0;
}