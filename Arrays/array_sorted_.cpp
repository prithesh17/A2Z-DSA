#include<iostream>

using namespace std;

bool sorted_or_not(int *arr, int n){
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){

    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool ans = sorted_or_not(arr,n);

    if(ans){
        cout<<"True";
    }else{
        cout<<"False";
    }

    return 0;
}