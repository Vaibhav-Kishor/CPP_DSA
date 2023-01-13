/*
 Fint the unique number in a given Array where all the elements are being repeated twice with one value being unique.
*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int array_size;
    cout<<"How much number you want to enter :";
    cin>>array_size;

    // Putting data into list
    vector<int> array(array_size);
    cout<<"Enter Number : ";
    for(int &ele:array){
        cin>>ele;
    }

    // Printing array
    cout<<"Number : ";
    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<endl<<"---------------------------------"<<endl;

    // Logic
    // This logic replace the dublicates value with -1
    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }

    // checking unique
    int flag=0;
    cout<<"Output : ";
    for(int i=0;i<array.size();i++){
        if(array[i]>0){
            cout<<array[i]<<" ";
            flag++;
        }
    }
    if(flag==0){
        cout<<"There is no unique element";
    }
    return 0;
}