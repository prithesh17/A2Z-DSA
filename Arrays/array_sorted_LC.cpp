#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
   for (int element : v) {
        cout << element << " ";
    }
    cout<<endl;
}

void rotate(vector<int> &source){
    vector<int> destination;
    int x = 1;
    do{
        print(source);
        for(int i=0;i<source.size();i++){
            destination[i]=source[(i+x) % source.size()];
        }
        print(source);
        source=destination;
    }while(++x != source.size());
}

int main(){

    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }
    rotate(arr);
    return 0;
}