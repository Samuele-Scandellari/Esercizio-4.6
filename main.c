#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    int raggio;
    double circonferenza, area;
    printf("Raggio\tCirconferenza\tArea\n");
    for (raggio = 1; raggio <= 20; raggio++) {
        circonferenza = 2 * PI * raggio;
        area = PI * raggio * raggio;
        printf("%d\t%.2f\t\t%.2f\n", raggio, circonferenza, area);
    }
}