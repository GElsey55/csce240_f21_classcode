// Copyright 2021 Casey A Cole
#include <iostream>
#include "./ArrayList.h"

int main(int argc, char **argv) {
    ArrayList a1;
    ArrayList a2(5);
    a2.print();
    ArrayList a3(5, 1);
    a3.print();
    std::cout << ArrayList::getNumAL() << "\n";
    // ArrayList a3 = 5;
    // ArrayList a4 = 'c';
    ArrayList a4(a3);
    a4.print();
    // a1.size;
    
    return 0;
}
