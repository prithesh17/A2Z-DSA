#include<iostream>
#include<vector>

using namespace std;

vector<long long> ans;
int i=1;

void print(vector <long long> arr){
    for(int element : arr){
        cout<<element<<"\t";
    }
    cout<<endl;
}

long long fact(int i){
    long long ans = 1;
    while(i!=0){
        ans= ans * i;
        i--;
    }
    return ans;
}

vector<long long> factorialNumbers(long long n) {
    long long value;
    value=fact(i++);
    if(value>n){
        return ans;
    }
    ans.push_back(value);
    return factorialNumbers(n);
}

int main(){
    long long n;
    vector<long long> arr;
    cin>>n;
    arr = factorialNumbers(n);
    print(arr);
    return 0;
}

