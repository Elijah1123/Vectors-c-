#include <iostream>
#include <vector>

int main() {
    // 1. Intialization Vector is created with 0 size


    std::vector<int> numbers;

    // 2. Growth: Adding elements 
    for(int i = 0; i < 5; ++i){
        numbers.push_back(1 * 10);
        // Observe how capacity grows faster than size 
         std::cout << "Size: " << numbers.size()
              << " | capacity: " << numbers.capacity() << std::endl;
              

    }

    // 3. Direct Memory Access (The "Data Strucure" part)

    int* rawArray = numbers.data();
    std::cout << "First element via pointer: " << *rawArray << std::endl;

    return 0;
          
}


