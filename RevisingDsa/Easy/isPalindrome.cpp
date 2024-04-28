// string is palindrome or not (recursive approach)

// check whether string is palindrome or not using recursion
#include<iostream>
#include<string>
using namespace std;
    
bool isPalindrome(string s, int left, int right) {
    // cout<<"Entering function for L = "<<s[left]<<" and R = "<<s[right]<<endl;
    
    int n = s.size();
    if(left>=right) {
        // cout<<"Entering base case"<<endl;
        return true;
    }
    if(s[left] != s[right]) {
        return false;
    }
    // cout<<"The value of L is "<<s[left]<<" and the value of R is "<<s[right]<<endl;
    return isPalindrome(s, ++left, --right);
}

int main() {
    // string s = "kadak";
    string s = "rajkar";
    int left = 0;
    int right = s.size()-1;
    // s.toLower();
    if(isPalindrome(s, left, right)) {
        cout<<"String is palindrome"<<endl;
    }
    else {
        cout<<"String is not palindrome"<<endl;
    }
    return 0;
}