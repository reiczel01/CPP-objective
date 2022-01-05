#include <iostream>
#include <chrono>
using namespace std::chrono;
  

#include "class.h"

int main()
{
    Son son;

    auto start_vm = high_resolution_clock::now();
    son.VMread("test.txt");
    auto stop_vm = high_resolution_clock::now();
    auto duration_vm = duration_cast<microseconds>(stop_vm - start_vm);
    std::cout << "czas funkcji wirtualnej: " << duration_vm.count() << std::endl;

    auto start = high_resolution_clock::now();
    son.read("test.txt");
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "czas funkcji zwykłej: " << duration.count() << std::endl;

    
}