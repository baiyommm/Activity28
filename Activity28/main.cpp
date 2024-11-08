#include <iostream>
#include "header.h"

using namespace std;
using namespace DoubleToStringConverter;

int main() {
    
    double number = 12345.6789;
    string str = doubleToString(number, 1); // Set precision = 1 digit
    cout << str << endl; // Outputs: 12345.7 (rounded up)
    return 0;
}
