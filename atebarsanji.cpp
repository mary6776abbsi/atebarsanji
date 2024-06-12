#include <iostream>
#include <string>
using namespace std;

// Structure to hold the phone number
struct MobileNumber {
    string number;
};

// Function to validate if the number is a mobile phone number
bool isValidMobileNumber(const MobileNumber& mobile) {
    // Check if the length is exactly 11 characters
    if (mobile.number.length() != 11) {
        return false;
    }
    // Check if the number starts with the valid mobile prefix
    if (mobile.number.substr(0, 2) != "09") {
        return false;
    }
    // Check if all characters are digits
    for (char c : mobile.number) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    MobileNumber mobile;

    cout << "Enter your mobile phone number: ";
    cin >> mobile.number;

    if (isValidMobileNumber(mobile)) {
        cout << "The mobile phone number " << mobile.number << " is valid." << endl;
    }
    else {
        cout << "The mobile phone number " << mobile.number << " is invalid." << endl;
    }

    return 0;
}
