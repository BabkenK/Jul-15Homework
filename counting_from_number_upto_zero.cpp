#include <iostream>

void fromnumtozero (int num);

void fromnumtozero (int num){
    if ( num == 0){
        std::cout << num << " ";
        return;
    }

    std::cout << num << " ";
    fromnumtozero(num - 1);
}

int main () {
    int num = 0;
    
    std::cout << "Please enter number to count down to zero: ";
    std::cin >> num;
    
    std::cout << "From count down " << num << " up to zero " << std::endl;
    fromnumtozero (num);
    
    return 0;
} 