#include <iostream>

int main() {
    int myArray[] = {1, 2, 3, 4, 5}; 

    
    int length = sizeof(myArray) / sizeof(myArray[0]);

    
    std::cout << "The length of the array is: " << length << std::endl;

    return 0;
}
