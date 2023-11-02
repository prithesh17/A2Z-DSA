#include<iostream>
using namespace std;
void swapArray(int *array,int left, int right){
    if(left > right){
        return;
    }
    swap(array[left],array[right]);
    swapArray(array,left+1,right-1);
}
int main()
{
    int array[]={1,3,5,3,6,8,4,2,6,4};
    int left = 0;
    int right=sizeof(array)/sizeof(array[0]) - 1;
    swapArray(array,left,right);
    for(int i=0;i<=right;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}