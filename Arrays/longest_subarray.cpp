#include <iostream>
#include <vector>

using namespace std;
int longest_subarray_sol_1(vector<int> arr, int x)
{
    int len = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            if (sum == x)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;

    // int n = arr.size(); // size of the array.

    // int len = 0;
    // for (int i = 0; i < n; i++) { // starting index
    //     for (int j = i; j < n; j++) { // ending index
    //         // add all the elements of
    //         // subarray = a[i...j]:
    //         long long s = 0;
    //         for (int K = i; K <= j; K++) {
    //             s += arr[K];
    //         }

    //         if (s == x)
    //             len = max(len, j - i + 1);
    //     }
    // }
    // return len;
}

int main()
{

    int n, k;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    cin >> k;
    cout << longest_subarray_sol_1(arr, k) << endl;
    return 0;
}