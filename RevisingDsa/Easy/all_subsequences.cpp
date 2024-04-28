//print all the subsequences in same order
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printF(int arr[], int n, vector<int> &ans, int ind) {
    // cout<<endl;
    // cout<<"Function called, values of parameters are as follows :"<<endl;
    // cout<<"Value of arr : ";
    // for(int i =0; i<n; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    // cout<<"Value of Index : "<<ind<<endl;
    
    // cout<<"Value of ans vector : ";
    // for(auto it:ans) {
    //     cout<<ans[it]<<" ";
    // }
    // cout<<endl;
    
    
    //base case of recursion
    if(ind==n) {
        // cout<<"Final Output Screen will display this :";
        if(ans.size() == 0) {
            cout<<"{}";
        }   
        for(auto it:ans) {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]);
    printF(arr, n, ans, ind+1);
    ans.pop_back();
    printF(arr, n, ans, ind+1);
    
}


int main() {
vector<int> ans;
int arr[] = {3, 1, 2, 4};
int index = 0;
printF(arr, 4, ans, index);
return 0;
}
