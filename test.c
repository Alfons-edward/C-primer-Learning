#include <stdio.h>
#include <string.h>
#include "define.h"
int
main(int argc, char *argv[]){
    char a[] = "hellokwold";
    char b[] = "fuck anyway";
    char c;
    for (size_t i = 0; i < strlen(a); i++){
        for (size_t j = 0; j < strlen(b); j++){
            if (a[i] == b[j]){
                c = a[i];
                // goto found;
            }   
        }
    }
    int *ptr = NULL;
    if (!ptr){
        out("ptr is null");
    }

    int i = 1, j =1, k = 2;
    if (i != j < 2) {
        out("ppp");
    }


    return 0;
    found:
        printf("%c\n", c);
}