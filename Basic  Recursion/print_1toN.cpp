#include<iostream>
using namespace std;
void print(int i,int n){
    if(i==n){
        return;
    }
    cout<<i+1<<endl;
    print(i+1,n);
}
int main()
{
    int n,i=0;
    cin>>n;
    print(i,n);
    return 0;
}