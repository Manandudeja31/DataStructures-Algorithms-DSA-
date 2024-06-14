#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for(int i=0; i<=(sizeof(arr)); i+=2){
        if(i+1 < sizeof(arr)){
            int val[6] = {arr[i], arr[i+1]};
            cout<<val<<" ";
        }
    }
    cout<<endl;
    return 0;
}