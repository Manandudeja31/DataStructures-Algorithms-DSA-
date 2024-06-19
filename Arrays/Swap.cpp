#include<iostream>
#include<stdio.h>
using namespace std;

void Swap(int arr[],int size) {
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
     for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {

     int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Swapped Array is: "<<endl;
    Swap(arr, size);
    cout<<endl;
    return 0;
}