/*
 Count the number of triplet whose sum is equal to the given value x.
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int array_size;
    cout<<"How much you want to enter the number : ";
    cin>>array_size;

    vector<int> array(array_size);
    // Putting number into array
    cout<<"Enter the number into list :";
    for(int &ele:array){
        cin>>ele;
    }

    // Reading target_sum from user
    int target_sum;
    cout<<"Enter the target sum : ";
    cin>>target_sum;

    // Checking triplet
    int triplet=0;
    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
            for(int k=j+1;k<array.size();k++){
                if(array[i]+array[j]+array[k]==target_sum){
                    triplet++;
                }
            }
        }
    }
    cout<<"Triplet : "<<triplet;


}
