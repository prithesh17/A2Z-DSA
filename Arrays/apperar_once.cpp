#include <iostream>
#include <vector>

using namespace std;
int apperar_once(vector<int> arr)
{
    int ans=0;
	for(int i=0;i<arr.size();i++){
		ans^=arr[i];
	}
	return ans;	
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

    cout << apperar_once(arr);
    return 0;
}