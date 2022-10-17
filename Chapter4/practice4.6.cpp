#include <stdio.h>
#include "../define.h"
int main(int argc, char const *argv[])
{
    printf("%s\n", argv[0]);
    printf("please input an integer\n");
    int input;
    scanf("%d", &input);

    //鉴定奇偶
    if (int result = input % 2) {
        printf("这是一个奇数\n");
    } else {
        printf("这是一个偶数\n");
    }
    out("a%d", 2);
    return 0;
}
