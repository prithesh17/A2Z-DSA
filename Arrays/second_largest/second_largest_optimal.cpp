#include<iostream>
#include<limits.h>

using namespace std;

int second_largest(int *arr, int n){
    int max=arr[0];
    int sec_max=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }
        else if(arr[i] > sec_max){
            sec_max=arr[i];
        }
    }
    return sec_max;
}

int main(){

     int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int second_large = second_largest(arr,n);
    cout<<second_large;

    return 0;
}