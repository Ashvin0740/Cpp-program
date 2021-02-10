#include<iostream>

using namespace std;

int main(){
    int day;
    cout<< "inter day"<<endl;
    cin>>day;
    //  Selection control structure: Switch Case statements
    switch (day)
    {
    case 1: 
        cout<<"today is sunday"<<endl;
        break;
    case 2: 
        cout<<"today is monday"<<endl;
        break;
    case 3: 
        cout<<"today is tuesday"<<endl;
        break;
    case 4: 
        cout<<"today is wednesday"<<endl;
        break;
    case 5: 
        cout<<"today is thursday"<<endl;
        break;
    case 6: 
        cout<<"today is friday"<<endl;
        break;
    case 7: 
        cout<<"today is saturday"<<endl;
        break;

    default:
    cout<<"no day found"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
}
