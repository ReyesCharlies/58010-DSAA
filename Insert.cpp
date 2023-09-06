#include <iostream>

int main() {
    int originalArray[] = {1, 2, 3, 4, 5};
    int newItem = 6; 

   
    for (int i = 4; i >= 1; i--) {
        originalArray[i + 1] = originalArray[i];
    }

    
    originalArray[1] = newItem;


    std::cout << "Updated array: [";
    for (int i = 0; i < 6; i++) {
        std::cout << originalArray[i];
        if (i < 5) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
