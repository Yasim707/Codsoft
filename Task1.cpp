#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int numGenerator();

int main() {
    int input, num;
    cout << "Welcome to a number guessing game" << endl;
    
    num = numGenerator();

    while (true) {
        cout << "Enter a number between 1 and 50 and I'll tell you if you guessed it right: ";
        cin >> input;

        if (input != num) {
            if (input - 10 == num) {
                cout << "NO, you gave a huge number, make it less" << endl;
            }
            else if (input - 5 == num) {
                cout << "A little less" << endl;
            }
            else if (input + 10 == num) {
                cout << "NO, you gave a very small number, make it more" << endl;
            }
            else if (input + 5 == num) {
                cout << "A little more" << endl;
            }
            else {
                cout << "The number you entered is not right, TRY AGAIN!!" << endl;
            }
        }
        else {
            cout << "The number you entered is correct." << endl;
            cout << "CONGRATULATIONS!!!!!" << endl;
            break; 
        }
    }

    return 0;
}

int numGenerator() {
    int num = 0;
    srand(time(0));
    num = rand() % 25 + 1;
    return num;
}
