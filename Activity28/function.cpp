#include "header.h"
#include <sstream>
#include <iomanip>

using namespace std;

namespace DoubleToStringConverter {
    string doubleToString(double number, int precision) {
        stringstream stream;
        stream << fixed << setprecision(precision) << number;
        return stream.str();
    }
}
