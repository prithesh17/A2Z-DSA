#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
   for (int element : v) {
        cout << element << " ";
    }
    cout<<endl;
}

int linear_search(vector<int> arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,key;
    vector<int> arr;
    cin>>n;
    cin>>key;
    for(int i=0;i<n;i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }
    int index=linear_search(arr,key);
    cout<<index;
    return 0;
}