#include <iostream>

 void printArrayRecursive(int arr[], int size, int i);

 void printArrayRecursive(int arr[], int size, int i) {
     if (i >= size) {
        return;
    }

     std::cout << arr[i] << " ";

     printArrayRecursive(arr, size, i + 1);
}

int main() {
    int size = 0;

     std::cout << "Enter the size of the array: ";
    std::cin >> size;

     if (size <= 0) {
        std::cout << "Invalid array size. Please enter a positive integer." << std::endl;
        return 1;  
    }

     int arr[size];

     std::cout << "Enter " << size << " elements for the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

     std::cout << "Array elements printed recursively: ";
    printArrayRecursive(arr, size, 0);  

    std::cout << std::endl;

    return 0;
}
