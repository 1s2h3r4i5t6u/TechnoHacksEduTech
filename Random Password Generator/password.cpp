#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand() functions
#include <ctime>   // for time() function

using namespace std;

// Function to generate a random password
string generatePassword(int length) {
    const string uppercaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string lowercaseLetters = "abcdefghijklmnopqrstuvwxyz";
    const string digits = "0123456789";
    const string specialChars = "!@#$%^&*";

    string allChars = uppercaseLetters + lowercaseLetters + digits + specialChars;
    int totalChars = allChars.length();

    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    string password;
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % totalChars;
        password += allChars[randomIndex];
    }

    return password;
}

int main() {
    cout << "Welcome to the Random Password Generator!" << endl;

    int passwordLength;
    cout << "Enter the length of the password: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Password length should be greater than 0." << endl;
        return 1; // Exit with an error code
    }

    string password = generatePassword(passwordLength);

    cout << "Generated password: " << password << endl;

    return 0;
}
