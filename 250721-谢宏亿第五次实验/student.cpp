#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>  
#include "student.h" 




void Student::display() {
    std::cout << "num£º" << num << std::endl;
    std::cout << "name£º" << name << std::endl;
    std::cout << "sex£º" << sex << std::endl;
}

void Student::set_value(int n, const char* na, char s) {
    num = n;
    std::strcpy(name, na);
    sex = s;
}