#include "Myarry.h"
#include <cstring>

Myarry::Myarry()
:arr(new char*[1]), count(1) {
    arr[0] = new char[1];
    **arr = '\0';
}

Myarry::Myarry(const char *s)
:arr(new char*[1]), count(1) {
    arr[0] = new char[std::strlen(s) + 1];
    std::strcpy(arr[0], s);
}

Myarry::Myarry(const Myarry &src)
:arr(new char*[src.count]), count(src.count) {
    for (int i = 0; i < src.count; i++) {
        arr[i] = new char[std::strlen(src.arr[i]) + 1];
        std::strcpy(arr[i], src.arr[i]);
    }
}

Myarry &Myarry::operator+(const char *s) {
    char *buff[count];
    for (int i = 0; i < count; i++) {
        buff[i] = arr[i];
    }
    delete[] arr;
    arr = new char*[count + 1];
    for (int i = 0; i < count; i++) {
        arr[i] = buff[i];
    }
    arr[count] = new char[std::strlen(s) + 1];
    std::strcpy(arr[count], s);
    count ++;
    return *this;
}

const char* Myarry::at(int i) {
    if (is_in_bounds(i)) {
        return (arr[i]);
    }
    return ("Error! out of bounds");
}

bool Myarry::is_in_bounds(int i) {
    return (i >= 0 && i < count);
}

int Myarry::size() {
    return count;
}

Myarry::~Myarry() {
    for (int i = 0; i < count; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}