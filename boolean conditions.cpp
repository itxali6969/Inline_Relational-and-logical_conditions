#include <iostream>

int main() {
    int weight = 55; // Example weight
    int height = 62; // Example height
    bool result = (weight > 50 || height > 60) && !(weight > 50 && height > 60);
    if (result) {
        std::cout << "Either weight is greater than 50 pounds or height is greater than 60 inches, but not both." << std::endl;
    } else {
        std::cout << "Weight is not greater than 50 pounds and height is not greater than 60 inches." << std::endl;
    }
    return 0;
}

