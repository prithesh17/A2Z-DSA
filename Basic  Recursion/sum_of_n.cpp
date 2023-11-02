#include<iostream>
using namespace std;
void sumOfN(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sumOfN(i-1,sum+i);
}
int main()
{
    int n,sum=0;
    cin>>n;
    sumOfN(n,sum);
    return 0;
}