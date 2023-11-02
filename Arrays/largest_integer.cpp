#include<iostream>

using namespace std;

int largest(int *arr, int n){
    int max= arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]> max){
            max=arr[i];
        }
    }
    return max;
}

int main(){

    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = largest(arr,n);
    cout<<max;
    return 0;
}