/*
 Find the total number of pairs in the Array whose sum is equal to the given value x.
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size;
    cout<<"How much number you want to enter : ";
    cin>>size;

    vector<int> array(size); // Creating Vector
    cout<<"Enter the Number :"<<endl; // Giving message to the user
    // Entering data into the array
    for(int &ele:array){
        cin>>ele;
    }

    int target_sum;
    cout<<"Enter the number for finding target sum :";
    cin>>target_sum;

    // finding pairs
    int pairs=0;
    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
            if(array[i]+array[j]==target_sum){
                pairs++;
            }
        }
    }
    cout<<"Pairs : "<<pairs <<endl;
}