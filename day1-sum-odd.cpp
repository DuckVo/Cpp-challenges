#include <iostream>

int main() {
    // Initialize variables
    int sum = 0;
    int number = 1;

    // Do-while loop
    do {
        sum += number;                
        
        std::cout << "Sum is: " << sum << std::endl;     
        std::cout << "Num is: " << number << std::endl;  
        
        number += 2;                 
    } while (number <= 50);

    // Print the final sum
    std::cout << "Final Sum: " << sum << std::endl;
    return 0;
}
