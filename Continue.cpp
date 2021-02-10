#include<iostream>
using namespace std;
int main() {
    for(int i=0; i<100; i++){
        if(i ==15){
            cout<<"continue the loop"<<endl;
            continue;
        }
        cout << i <<endl;
    }
     return 0;
}
