PASSWORD COMPLEXITY CHECKER TOOL

# Password Strength Assessor

This C++ program assesses the strength of a given password based on several criteria, including length, the use of uppercase and lowercase letters, digits, and special characters. It is designed to help users create stronger passwords by understanding what elements contribute to password strength.

## Features

- Checks for the presence of lowercase letters.
- Checks for the presence of uppercase letters.
- Checks for the presence of digits.
- Checks for the presence of special characters.
- Rates the password strength as Very Weak, Weak, Moderate, Strong, or Very Strong based on the criteria met.

## Getting Started

### Prerequisites

To run this program, you'll need:

- A C++ compiler (e.g., GCC, Clang, MSVC)
- Basic knowledge of compiling C++ programs from the command line or using an IDE.

### Compiling the Program

1. Open your terminal or command prompt.
2. Navigate to the directory where `password_assessor.cpp` is located.
3. Compile the program. The exact command depends on your compiler. For example, if you're using GCC, the command would be:
   g++ password_assessor.cpp -o password_assessor
This compiles `password_assessor.cpp` into an executable named `password_assessor`.

### Running the Program

After compiling, you can run the program by simply typing:
./password_assessor

(if you're on Linux or macOS), or
password_assessor.exe

(if you're on Windows) in your terminal or command prompt, and then follow the on-screen instructions to input a password for strength assessment.

## Code Explanation

- **Main Function**: The entry point of the program. It takes the user's password input and calls `assessPasswordStrength` to evaluate its strength.
- **hasLowercase**: Checks if the password contains at least one lowercase letter.
- **hasUppercase**: Checks if the password contains at least one uppercase letter.
- **hasDigit**: Checks if the password contains at least one digit.
- **hasSpecialChar**: Checks if the password contains at least one special character from a predefined set.
- **assessPasswordStrength**: Assesses the overall strength of the password based on the criteria met and outputs the result.

## Contributing

Contributions to this project are welcome! Please fork the repository and submit a pull request with your enhancements.

## License

This project is open source and available under the [MIT License](LICENSE.md).

## Acknowledgments

- Thanks to all contributors who have helped to improve this tool.
- Inspired by the need for stronger password security measures.



