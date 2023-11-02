#include<iostream>
using namespace std;
int sumOfN(int n){
    if(n<1){
        return 0;
    }
    return n + sumOfN(n-1);
}
int main()
{
    int n,sum;
    cin>>n;
    sum = sumOfN(n);
    cout<<sum<<endl;
    return 0;
}