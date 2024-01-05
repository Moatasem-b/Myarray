#include <iostream>
#include "Myarry.h"
using namespace std;

int main() {
    Myarry arr("Larry");
    arr+"Moe";
    arr+"Curly";
    
    cout << arr.at(2) << '\t' << arr.size() << endl;
    
    Myarry arr1(arr);
    cout << arr1.at(2);

    return 0;
}