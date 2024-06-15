#include<iostream>
#include<stdio.h>
using namespace std;

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

    cout<<"Reversed Array is: "<<endl;
    // Reverse of Array

    for(int i=size - 1; i>=0; i-- ){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}