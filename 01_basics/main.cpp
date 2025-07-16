//Datas are stored in RAM first in form of variables
//Then, they are processed using operations like addition and multiplication
//Datas are then processed
//Finally, datas are displayed
#include <iostream>
using namespace std;

int main() {
    // Step 1: Data storage
    int a = 5; // Initialize variable a, stored in RAM
    int b = 10; // Initialize variable b, stored in RAM
    const int uid = 12345; // Constant variable uid, cannot be changed
    int sum = a + b; // Add a and b, store result in sum
   // uid = 67890; // This line will cause a compilation error because uid is a constant

    // Step 2: Data processing
    int product = a * b; // Multiply a and b, store result in product

    // Step 3: Data display
    cout << "Sum: " << sum << endl; // Display the sum
    cout << "Product: " << product << endl;

    return 0;
}
//here sum, product, a, b, and uid are all identifiers
//Identifiers are names given to variables, constants, functions, etc.