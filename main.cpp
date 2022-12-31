#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <thread>

using namespace std;


int main(){
 vector<int> numbers;
    string input;

    while (true) {
        cout << "Enter a number or 'end' to stop: ";
        cin >> input;

        if (input == "end") {
            break;
        }
     try {
            int number = stoi(input);
            numbers.push_back(number);
        }
        catch (const invalid_argument& e) {
            cout << "Invalid input. Please try again." << endl;
        }
     cout << "Current vector: [";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
    }
}
