#include<iostream>
#include<stdio.h>
using namespace std;

int main() {

    int arr[8] = {0,1,1,0,1,0,1,0};
    for(int i=0; i<8; i++){
            cout<<arr[i]<<" ";
        }
    int i = 0, j = 7;
    while(i < j){
        if(arr[i] == 0 && i < j){
            i++;
        }
        if(arr[j] == 1 && i < j){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    cout<<endl;
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
}
