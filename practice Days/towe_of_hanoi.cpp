#include <iostream>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        std::cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << std::endl;
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    std::cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << std::endl;
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main() {
    int num = 3;
    std::cout << "The steps to solve the Tower of Hanoi puzzle with " << num << " discs:" << std::endl;
    towerOfHanoi(num, 'A', 'C', 'B');
    return 0;
}

