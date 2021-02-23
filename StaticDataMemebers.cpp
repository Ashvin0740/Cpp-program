#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee Ashvin, ajay, rahul;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    Ashvin.getData();
    Ashvin.setData();
    Employee::getCount();

    rahul.setData();
    rahul.getData();
    Employee::getCount();

    ajay.setData();
    ajay.getData();
    Employee::getCount();

    return 0;
}
