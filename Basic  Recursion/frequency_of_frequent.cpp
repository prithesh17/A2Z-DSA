/*
The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at most k operations.
*/

#include <iostream>
#include <vector>
#include<map>
using namespace std;

void print(vector<int> v)
{
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
}

int maxFrequency(vector<int> &nums, int k)
{
    map<int,int>mp;
}

int main()
{
    int n, k;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    cin >> k;
    int ans = maxFrequency(arr, k);
    cout << ans;
    return 0;
}