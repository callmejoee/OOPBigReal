#include <iostream>
#include <string>
#include "BigDecimalIntClass.h"
using namespace std;
class BigReal {
private:
    BigDecimalInt whole;
    BigDecimalInt fraction;
    string whole_string;
    string fraction_string;
    string number;
    char sign = '+';
public:
    BigReal(double realNumber = 0.0){

        // convert number to string
        number = to_string(realNumber);

        // check if number is negative and remove sign
        if (number[0] == '-') {
            sign = '-';
            number.erase(0, 1);
        }
        else if (number[0] == '+') {
            number.erase(0, 1);
        }

        // split number into whole and fraction
        int j = 0;
        for(int i = 0; i < number.length(); i++){
            if( j == 0 && number[i] != '.'){
                whole_string += number[i];
            }
            else if(number[i] == '.'){
                j = 1;
            }
            else if(j == 1){
                fraction_string += number[i];
            }

        }
        // convert string to BigDecimalInt
        whole = BigDecimalInt(whole_string);
        fraction = BigDecimalInt(fraction_string);

    };
    BigReal(string realNumber);
    BigReal(BigDecimalInt bigInteger);
};
int main() {
    BigReal a(-123.456);
    return 0;
}
