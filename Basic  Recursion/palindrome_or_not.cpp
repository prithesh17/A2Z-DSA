#include<iostream>
#include<strings.h>
using namespace std;
bool isPalindrome(unsigned int i, string text){
    if(i>=text.size()/2){
        return true;
    }
    if(text[i]!=text[text.size()-1-i]){
        return false;
    }
    return isPalindrome(i+1,text);
}
int main()
{
    string text="prithesh";
    cout<<boolalpha<<isPalindrome(0,text)<<endl;
    return 0;
}