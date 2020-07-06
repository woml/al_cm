#include <stdio.h>

int main(void) {
    printf("%.1f\n", 8.0/5.0);
    printf("%.2f\n", 8.0/5.0);      //exp5
    printf("%.1f\n", 8/5);          //exp6
    printf("%d\n", 8.0/5.0);        //exp7  !!!

    return 0;
}