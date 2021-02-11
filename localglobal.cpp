# include<iostream>

using namespace std;
// global variable
int glo = 6;
void sum(){
    int a; 
    cout<< "global value is : "<<glo;
    }

int main(){
    // local variable 
    int glo=9;
    glo=78;
    sum();
    cout <<"\nlocal value is : "<< glo;
 
    return 0;
}
