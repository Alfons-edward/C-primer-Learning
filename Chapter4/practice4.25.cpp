#include <iostream>

using namespace std;

int main() {
    int result;
    char c = 'q';
    printf("%d\n", ~c<<6);

    unsigned long ul1 = 3;
    unsigned long ul2 = 7;
    printf("%lu\n", ul1 & ul2);
    printf("%lu\n", ul1 | ul2);
    printf("%d\n", ul1 && ul2);
    printf("%d\n", ul1 || ul2);
    return 0;
}