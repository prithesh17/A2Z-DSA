#include<iostream>

using namespace std;


void print(int *arr, int n){
   for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}



void rotate_by_one(int *arr, int n){
    int key = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=key;
}

int main(){

    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate_by_one(arr,n);
    print(arr,n);
    return 0;
}