#include <stdio.h>
#include <math.h>

float fun(float x, float y) {
    return x * x + y * y;
}

int main() {
    float x0, y0, h, xn, x, y, m1, m2, m3, m4;
    printf("Enter the initial conditions (x0 and y0): ");
    scanf("%f%f", &x0, &y0);
    printf("Enter the interval (step size h): ");
    scanf("%f", &h);
    printf("Enter the calculation point (xn): ");
    scanf("%f", &xn);

    x = x0;
    y = y0;

    printf("\n\nX\t\tY\n");
    printf("%f\t%f\n", x, y);

    while (x < xn) {
        if (x + h > xn)  // Adjust for overshooting
            h = xn - x;

        m1 = fun(x, y);
        m2 = fun(x + h / 2, y + m1 * h / 2);
        m3 = fun(x + h / 2, y + m2 * h / 2);
        m4 = fun(x + h, y + h * m3);
        y = y + h * (m1 + 2 * m2 + 2 * m3 + m4) / 6;
        x = x + h;

        printf("%f\t%f\n", x, y);
    }
    return 0;
}
