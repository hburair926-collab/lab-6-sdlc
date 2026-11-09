#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    cin >> text;

    if(text[0] == text[text.length() - 1]) {
        cout << "First and last characters are same";
    }
    else {
        cout << "First and last characters are different";
    }

    return 0;
}
