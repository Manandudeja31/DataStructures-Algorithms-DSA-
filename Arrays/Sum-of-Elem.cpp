#include<iostream>
#include<stdio.h>
using namespace std;

void sum(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    sum(arr, size);
    
    cout<<endl;
    return 0;
}