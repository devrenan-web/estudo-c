#include <stdio.h>

double cube(double num){
    return num * num * num;
}

double square(double num) {
    return num * num;
}

int main() {
    double s1 = square(2.1);
    double s2= square(3.2);
    double s3= square(4.3);

    printf("%lf\n", s1);
    printf("%lf\n", s2);
    printf("%lf\n", s3);

    double c1 = cube(2);
    double c2 = cube(3);
    double c3 = cube(4);

    printf("%lf\n", c1);
    printf("%lf\n", c2);
    printf("%lf\n", c3);
}