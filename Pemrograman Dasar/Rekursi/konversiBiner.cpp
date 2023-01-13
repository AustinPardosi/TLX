#include <cstdio>
#include <string>

using namespace std;

string convertToDecimal (int N) {
    if(N==0 || N==1) {
        if (N==0) {
            return "0";
        } else {
            return "1";
        }
    } else {
        if(N%2==0) {
            return convertToDecimal(N/2) += "0";
        } else {
            return convertToDecimal(N/2) += "1";
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    string hasil;
    hasil = convertToDecimal(N);

    printf("%s", hasil.c_str());

}