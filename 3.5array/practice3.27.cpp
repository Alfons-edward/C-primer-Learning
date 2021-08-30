#include <stdio.h>

int txt_size(){
    return -1;
}

int main(int argc, char const *argv[])
{
    unsigned buf_size = 1024;
    int aia[buf_size];
    int bia[4 * 7 - 14];
    int cia[txt_size()];//compile sucess when return -1,but the size of this array is minus
    // char dst[11] = "fundamental";//error '\0'  size=12
    char dst[12] = "fundamental";
    printf("%d",sizeof(cia));
    return 0;
}
