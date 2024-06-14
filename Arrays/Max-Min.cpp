#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    
    int size;
    int Max = 0;
    int Min;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter the elements of Array: ";

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    

    for(int i=0; i<size; i++){
        // Maximun
        if(arr[i] > Max){
            Max = arr[i];
        }
        // Minimum
        if(arr[i] < Min){
            Min = arr[i];
        }
    }
    cout<<"Max: "<<Max<<endl;
    cout<<"Min: "<<Min<<endl;

    cout<<endl;
    return 0;
}