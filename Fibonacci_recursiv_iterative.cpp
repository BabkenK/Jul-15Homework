// Fibonacci recursive
#include <iostream>

 int fib_recurs(int n);

 int fib_recurs(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib_recurs(n - 1) + fib_recurs(n - 2);
    }
}

int main() {
    int n = 0;
    
    std::cout << "Enter the value to find Fibonacci number: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "You entered an invalid value. Please enter a valid one." << std::endl;
        return 1;  
    }
    
    int fib_result_recurs = fib_recurs(n);
    std::cout << "The " << n << "th Fibonacci number is equal to " << fib_result_recurs << std::endl;
    
    return 0;
}

//Fibonacci iterative
#include <iostream>

 int fibonacci_iterative(int n);

 int fibonacci_iterative(int n) {
    if (n <= 1) {
        return n;
    }

    int fib_prev2 = 0;  
    int fib_prev1 = 1;  
    int fib_current = 0;

     for (int i = 2; i <= n; ++i) {
        fib_current = fib_prev1 + fib_prev2;
        fib_prev2 = fib_prev1;
        fib_prev1 = fib_current;
    }

    return fib_current;
}

 int main() {
    int n;

     std::cout << "Enter the value of n to find the nth Fibonacci number: ";
    std::cin >> n;

     if (n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return 1;
    }

     int fibonacci_result_iterative = fibonacci_iterative(n);

     std::cout << "The " << n << "th Fibonacci number (iterative) is: " << fibonacci_result_iterative << std::endl;

    return 0;
}
