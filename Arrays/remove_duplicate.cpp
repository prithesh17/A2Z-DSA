//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/


#include <iostream>

using namespace std;

int removeDuplicate(int *arr, int n){
  int i=0;
  int j=0;
  while(i<n){
    if(arr[i]!=arr[j]){
      arr[++j]=arr[i];
    }
    i++;
  }
  return j+1;
}
int main()
{
  int n, j = 1;
  int arr[100];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout<<removeDuplicate(arr,n);
  return 0;
}