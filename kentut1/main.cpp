#include <iostream>
using namespace std;

int main()
{
    cout<<"hello ken welcome to programing finally"<< endl;
    string(mystr1) = "first";
    string(mystr2) = "last";
    cout << "Enter first name: "<<endl;
    getline(cin, mystr1);
    cout << endl << endl << "Enter last name: "<<endl;
    getline(cin, mystr2);
    cout<< "so your full name is "<< mystr1  <<   mystr2 <<endl;

    return 0;
}
