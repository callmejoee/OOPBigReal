#include <iostream>
#include "BigDecimalIntClass.h"
using namespace std;

int main() {
    BigDecimalInt a("123456789012345678901234567890");
    BigDecimalInt b("9876543210987654321098765432109");
    BigDecimalInt c = a + b;
    cout << c << endl;
    return 0;
}
