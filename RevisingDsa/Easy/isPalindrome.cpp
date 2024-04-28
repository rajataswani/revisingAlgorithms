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

// approach 2, by reversing the string recursively and then comparing both the strings, has O(n) space complexity and >O(n) time complexity

bool isPalindrome2(string s, int left, int right) {
    string cpy;
    // s.copy(cpy, s.size());
    for(int i = 0; i<s.size(); i++) {
        cpy[s.size()-i-1] = s[i];
    }
    // for(int i = 0; i<s.size(); i++) {
    //     cout<<cpy[i]<<" ";
    // }
    // cout<<endl;
    
 for(int i =0 ; i<s.size();i++)
 {
     if(s[i]!=cpy[i]) {
         return false;
     }
     
 }    

return true;
    
}


int main() {
    string s = "kalak";
    // string s = "rajat";
    int left = 0;
    int right = s.size()-1;
    // s.toLower();
    if(isPalindrome2(s, left, right)) {
        cout<<"String is palindrome"<<endl;
    }
    else {
        cout<<"String is not palindrome"<<endl;
    }
    return 0;
}
