#include <stdio.h>
#include <stdarg.h>

int vielmax ( int anzahl, ...) {
    va_list args;
    va_start (args, anzahl);

    int max = va_arg(args, int);
    for (int i = 1; i < anzahl; i++) {
        int num = va_arg(args, int);
        if( num > max) {
            max = num;
        }
    }
    va_end (args);
    return max;
}
int main () {
    printf("Das Maximum der Zahlen 12,17,3,6,24,8 ist: %d\n", vielmax(6,12,17,3,6,24,8));
    printf("Das MAximum der Zahlen 105, 77,3,54 ist : %d\n", vielmax(4,105,77,3,54));

    return 0;
}