#include<iostream>

using namespace std;



int main(){
    int n,j=1;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
    }
    cout<<i+1;

    return 0;
}