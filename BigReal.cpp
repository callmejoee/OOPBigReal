#include <iostream>
#include "BigDecimalIntClass.h"
using namespace std;
class BigReal {
public:
    BigReal(){

    };
    BigReal(double realNumber = 0.0);
    BigReal(string realNumber);
    BigReal(BigDecimalInt bigInteger);
};
int main() {
    BigReal a(123.456);
    return 0;
}
