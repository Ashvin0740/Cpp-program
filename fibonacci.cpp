#include<iostream>
using namespace std;


int fibonacci(int n){
    if(n==0)
    {
    return 0;
    }
    else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int num;
    cout<<"Enter a Number :" << endl;
    cin>>num;
    cout<<"The term in fibonacci sequence at position " << num << " is "<< fibonacci(num) <<endl;

     return 0;
}
