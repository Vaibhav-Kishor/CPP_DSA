// This Program is for Basic Operation on Array, like inseting element, deleting element, insertion and deletion at specific postion, deletion of entire list
// Implementation of vector class using their function
/*
1. push_back()  2.pop_back      3.inser(object.begin()+pos,data)        4.erase(position)       5.clear()->> clear entire list
6. size()       7.capacity()      8.begin()       9.end()                 10. resize()->> resize thier capacity

*/

#include<iostream>
#include<vector>
using namespace std;

int capacity;
vector<int> array(capacity);
// Function Decleration
void addData(void);
void deleteData(void);
void printList(void);
void insertAtPos(void);
void deleteFromPos(void);
void deleteArray(void);

int main(){
    cout<<"Enter the Capacity of List : ";
    cin>>capacity;

    cout<<("------------------Choose Your Operation--------------------\n ");
    cout<<("1.Add Your Data in Last\n 2.Delete Data from last \n 3.Print List \n 4.Inset Data at given Position \n 5.Delete Data from Given Position \n 6.Delete List \n 7.Exit");
    
    cout<<"\n-----------------------------------\n";
    // Taking Choice from user 
    int choice;
    while(1){
    
    cout<<"\nEnter Choice : ";
    cin>>choice;

    switch(choice){
        case 1: addData(); 
                break;
        case 2: deleteData();
                break;
        case 3: printList();
                break;
        case 4: insertAtPos();
                break;
        case 5: deleteFromPos();
                break;
        case 6: deleteArray();
                break;
        case 7: cout<<"Exit Successfully...";
                exit(0);
        default:
             cout<<"Choice is Invalid";
             cout<<"\n----------------------\n";
    }   

    }// Loop Ending...

    return 0;
} // main() ending...

 

// Function Definition
void addData(){
    cout<<"Enter Number :";
    int num;
    cin>>num;
    array.push_back(num);
    cout<<"Insetion Done...";
    cout<<"\n----------------------\n";
    
}
void deleteData(){
    if(array.size()==0){
        cout<<"List is empty, deletion can't be performed";
        cout<<"----------------------------";
    }
    else{
    array.pop_back();
    cout<<"Deletion Done...";
    cout<<"\n-----------------------\n";
    }
}
void printList(){
    if(array.size()==0){
        cout<<"List is Empty...";
        cout<<"------------------------";
    }
    else{
    for(int ele:array){
        cout<<ele<<" ";
    }
    cout<<"\nDone...";
    cout<<"\n-----------------------\n";
    }
}
void insertAtPos(){
    if(array.capacity()==0){
        cout<<"List is Empty...";
        cout<<"---------------------------";
    }
    else{
    cout<<"Enter Number and Position :\n";
    
    cout<<"Number : ";
    int number;
    cin>>number;

    cout<<"Position: ";
    int position;
    cin>>position;
    
    array.insert(array.begin()+position,number);
    cout<<"Insertion Done...";
    cout<<"\n---------------------------\n";
    }
} 

void deleteFromPos(){
    if(array.size()==0){
        cout<<"List is Empty, Deletion can't be happen";
    }
    else{
    cout<<"Enter Position : ";
    int position;
    cin>>position;

    array.erase(array.begin()+position);
    cout<<"Deletion Done...";
    cout<<"\n---------------------------\n";
    }
}

void deleteArray(){
    if(array.size()==0){
        cout<<"Can't be deleted...";
        cout<<"----------------------------";
    }
    else{
    array.clear();
    cout<<("List Deleted...");
    cout<<"\n-----------------------------\n";
    }
}





