#include<iostream>
#include<stdio.h>
using namespace std;

bool Search(int arr[], int size, int target) {
    for(int i=0; i<size; i++){
        if(target == arr[i]){
           cout<<"Element found at position:"<<i+1<<endl;
        }
    }
    return 0;
}

int main() {
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the number to search for: "<<endl;
    cin>>target;

    Search(arr, size, target) ;

    cout<<endl;
    return 0;
}