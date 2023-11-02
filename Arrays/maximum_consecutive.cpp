#include <iostream>
#include <vector>

using namespace std;
int max_consecutive(vector<int> arr)
{
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
            max_count = max(count, max_count);
        }
        else
        {
            count = 0;
        }
    }
    return max_count;
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    cout << max_consecutive(arr);
    return 0;
}