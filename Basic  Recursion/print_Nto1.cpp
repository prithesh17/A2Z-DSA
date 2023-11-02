#include<iostream>
using namespace std;
void print(int i,int n){
    if(i==n){
        return;
    }
    print(i+1,n);
    cout<<i+1<<endl;
}
int main()
{
    int n,i=0;
    cin>>n;
    print(i,n);
    return 0;
}