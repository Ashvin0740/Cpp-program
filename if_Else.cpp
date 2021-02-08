#include<iostream>

using  namespace std;

int main(){
    int age;
    cout << "Enter your age:"<< endl;
    cin>> age;
    if(age <18){
        cout<< "you are a child, you are not eligible  to give vote";
    }
     else 
     {
         cout<<"are you eligible  to give vote";

     }
     return 0;
}