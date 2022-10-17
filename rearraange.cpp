#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int aCount = 0, bCount = 0, cCount = 0;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
            case 'a':
                aCount++;
                break;
            case 'b':
                bCount++;
                break;
            case 'c':
                cCount++;
                break;
            default:
                break;
        }
    }


    //如果首尾也可以用a相连的话
    // aCount -= 1;
    int subStringCount = bCount;
    aCount = aCount/2;
    cCount = cCount/3;

    int min = 0;
    if (aCount <= cCount) {
        min = aCount;
    } else {
        min =cCount;
    }
    
    if (subStringCount > min) {
        subStringCount = min;
    }
    printf("%d", subStringCount);

    return 0;
}