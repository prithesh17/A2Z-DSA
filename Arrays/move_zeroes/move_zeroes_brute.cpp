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

vector<int> move_zeroes(vector<int> arr)
{
    vector<int>temp;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=temp.size();i<arr.size();i++){
        arr[i]=0;
    }
    for(int i=0,j=0;i<temp.size();i++,j++){
        arr[i]=temp[j];
    }
    return arr;
}


int main()
{
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    arr = move_zeroes(arr);
    print(arr);
    return 0;
}