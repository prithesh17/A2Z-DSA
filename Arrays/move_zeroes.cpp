#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
   for (int element : v) {
        cout << element << " ";
    }
    cout<<endl;
}


//Bruteforce
// vector<int> move_zeroes(vector<int> arr){
//     vector<int> temp;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
//     for(int i=temp.size();i<arr.size();i++){
//         arr[i]=0;
//     }
//     return arr;
// }


vector<int> move_zeroes(vector<int> arr){
    int j=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j!=-1){
        for(int i=j+1;i<arr.size();i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
    return arr;
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
    arr = move_zeroes(arr);
    print(arr);
    return 0;
}