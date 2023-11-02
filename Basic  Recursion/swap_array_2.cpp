#include<iostream>
using namespace std;
int array[]={1,3,5,3,6,8,4,2,6,4};
int size=sizeof(array)/sizeof(array[0]);

void swapArray(int i){
    if(i>=size/2){
        return;
    }
    swap(array[i],array[size-1-i]);
    swapArray(i+1);
}
int main()
{
    swapArray(0);
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}