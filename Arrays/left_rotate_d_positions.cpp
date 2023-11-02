#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void print(vector<int> v){
   for (int element : v) {
        cout << element << " ";
    }
    cout<<endl;
}


//bruteforce 1
// vector<int> rotate_by_d(vector<int> arr){ 

//     int key = arr[0];
//     for(int i=1;i<arr.size();i++){
//         arr[i-1]=arr[i];
//     }
//     arr[arr.size()-1]=key;
//     return arr;
// }


//bruteforce 2
// vector<int> rotate_by_d(vector<int> arr, int d){
//     d=d%arr.size();
//     vector<int>temp;
//     for(int i=0;i<d;i++){
//         temp.push_back(arr[i]);
//     }
//     for(int i=d;i<arr.size();i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=0;i<d;i++){
//       arr[arr.size() -d + i]  = temp[i];
//     }
//     return arr;
// }


//optimal
vector<int> rotate_by_d(vector<int> arr, int d){
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

int main(){

    int n,d;
    vector<int> arr;
    cin>>n;
    cin>>d;
    for(int i=0;i<n;i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }
    arr = rotate_by_d(arr,d);
    print(arr);
    return 0;
}