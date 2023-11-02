#include <iostream>
#include <vector>

using namespace std;

int sum_method(vector<int> arr, int n)
{
    int s1 = n * (n + 1) / 2;

    int s2 = 0;

    for(int i=0;i<arr.size();i++){
        s2+=arr[i];
    }
    return s1-s2;
}

int xor_method(vector<int> arr, int n){
    int ans=0;

    for(int i=0;i<arr.size();i++){
        ans^=arr[i]^(i+1);
    }
    return ans^arr.size()+1;
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n - 1; i++)
    {

        int value;
        cin >> value;
        arr.push_back(value);
    }
    cout<<sum_method(arr,n)<<endl;
    cout<<xor_method(arr,n);
    return 0;
}