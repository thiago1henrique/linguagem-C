#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;

    while (i) {
        int j = 1;

        while (j <= 20) {
            if(j%2  == 0) {
                printf("%d\n", j);
            }

            j++;

            if(j >= 10) i = 0;
        }


    }

}