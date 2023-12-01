#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
}

void reverseArray(vector<int> &arr)
{
    int start, end;
    start = 0;
    end = arr.size() - 1;
    while (start < end)
    {
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        end--;
        start++;
    }
}

int main()
{
    int n;
    vector <int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    reverseArray(arr);
    print(arr);
    return 0;
}