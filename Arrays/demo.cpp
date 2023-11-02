#include<iostream>

using namespace std;

int main(){
    int k,a[10];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>a[i];
    for(int i=0;i<k;i++){
        cout<<"a["<<i<<"] is "<<a[i]<<endl;
    }
    
    return 0;
}