//find nth fibonacci number (recursive approach) (0-based indexing in case of nth number)  0 1 1 2 3 5 8 13 21 34 55 89 etc
//trying to save space by not creating an array of fibonacci number or anything else, only the space taken will be the space of stack which is built using recursion stack

#include<iostream>
using namespace std;

int fibon(int n) {
    if(n==0 || n==1) {
        return n;
    }
    return fibon(n-1) + fibon(n-2);
}
int main() {
    int n = 0;
    cout<<"Enter the value of n :";
    cin>>n;
    // cout<<n<<endl;
    
    // the following conditions are optional, you can just write one print statement to print the nth fibonacci number
    if(n==1) {
    cout<<"The "<<n<<"st fibonacci number is : "<<fibon(n)<<endl;
    }
    else if(n==2 || n==22)
    cout<<"The "<<n<<"nd fibonacci number is : "<<fibon(n)<<endl;
    else if(n==3 || n==33) 
    cout<<"The "<<n<<"rd fibonacci number is : "<<fibon(n)<<endl;
    else
    cout<<"The "<<n<<"th fibonacci number is : "<<fibon(n)<<endl;
    return 0;
}
