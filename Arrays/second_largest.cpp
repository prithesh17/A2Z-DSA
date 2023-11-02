//better than bruteforce

#include<bits/stdc++.h>

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

int second_largest(int *arr,int n, int max){
    int large=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}
int main(){

    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = largest(arr,n);
    cout<<max<<endl;
    int second_large = second_largest(arr,n,max);
    cout<<second_large;

    return 0;
}

