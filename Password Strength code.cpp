#include <iostream>
#include <string>
#include <cctype>

// Function prototypes
bool hasLowercase(const std::string& password);
bool hasUppercase(const std::string& password);
bool hasDigit(const std::string& password);
bool hasSpecialChar(const std::string& password);
void assessPasswordStrength(const std::string& password);

int main() {
    std::string password;

    std::cout << "Enter your password to assess its strength: ";
    std::getline(std::cin, password); // Get the entire line including spaces

    assessPasswordStrength(password);

    return 0;
}

bool hasLowercase(const std::string& password) {
    for (char ch : password) {
        if (std::islower(ch)) {
            return true;
        }
    }
    return false;
}

bool hasUppercase(const std::string& password) {
    for (char ch : password) {
        if (std::isupper(ch)) {
            return true;
        }
    }
    return false;
}

bool hasDigit(const std::string& password) {
    for (char ch : password) {
        if (std::isdigit(ch)) {
            return true;
        }
    }
    return false;
}

bool hasSpecialChar(const std::string& password) {
    const std::string specialChars = "!@#$%^&*()-_=+[]{};:'\",<.>/?\\|`~";
    for (char ch : password) {
        if (specialChars.find(ch) != std::string::npos) {
            return true;
        }
    }
    return false;
}

void assessPasswordStrength(const std::string& password) {
    // Assessing password strength
    int strength = 0;

    if (password.length() >= 8) strength += 1; // Length criteria
    if (hasLowercase(password)) strength += 1; // Lowercase letter
    if (hasUppercase(password)) strength += 1; // Uppercase letter
    if (hasDigit(password)) strength += 1;     // Digit
    if (hasSpecialChar(password)) strength += 1; // Special character

    // Providing feedback based on the assessed strength
    std::cout << "Password Strength: ";
    switch (strength) {
        case 5: std::cout << "Very Strong"; break;
        case 4: std::cout << "Strong"; break;
        case 3: std::cout << "Moderate"; break;
        case 2: std::cout << "Weak"; break;
        default: std::cout << "Very Weak"; break;
    }
    std::cout << std::endl;
}
