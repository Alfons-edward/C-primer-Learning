#include <iostream>

using namespace std;

int
main(int argc, char const *argv[])
{
    printf("%s,%s\n", argv[0], argv[1]);
    int value = 12 /3 * 4 + 5 * 15 + 24 % 4 / 2;
    printf("value=%d\n", value);

    int a = -30 * 3 + 21 / 5;
    int b = -30 + 3 * 21 / 5;
    int c = 30 / 3 * 21 % 5;
    int d = -30 / 3 * 21 % 4;
    printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
    return 0;
}
