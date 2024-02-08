#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(){

        double num1, num2;
        char operation;

    
    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Choose an operation:"<<endl;
    cout<<"Press A to add"<<endl;
    cout<<"Press B to subtract"<<endl;
    cout<<"Press C to multiply"<<endl;
    cout<<"Press D to divide"<<endl;

    cin>>operation;

    

    switch(operation) {
        case 'A':
            cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
            break;
        case 'B':
            cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
            break;
        case 'C':
            cout<<num1<< " * " <<num2<< " = "<< num1 * num2<<endl;
            break;
        case 'D':
            if(num2 != 0) {
                cout<<num1<< " / "<<num2<< " = "<<num1 / num2<<endl;
            } else {
                cout<<" Cannot divide by zero."<<endl;
            }
            break;
        default:
            cout << "Invalid operation. Please choose A,B,C,D" << endl;
    }


return 0;
}