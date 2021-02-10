#include<iostream>
using namespace std;
int main() {
    for(int i=0; i<40; i++){
        if(i ==15){
            cout<<"break the loop";
            break;
        }
        cout << i <<endl;
    }
     return 0;
}
