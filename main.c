#include <stdio.h>
#include <math.h>


/*int main() {
    float x = 0.712, y = 3.161, res;
    res = sqrt(x * pow(y, 2) + y * sin(x) + 142 * pow(x, 2) * y) + tan(x * y) - ((142 * (y - x)) / 16.32);
    printf("X and Y is %.3f,%.3f\nResult is %.5f", x ,y , res);
    return 0;
}*/

/*int main() {
    float a = 0.3, b = 3.5, x = 0;
    double result;
    while(x <= b){
        x += a;
        if (x < 1) {
            result = atan(1 / x);
            printf("|atan(1/x)| = %lf\n", result);
        }
        else if (1 <= x && x < 3) {
            result = tan(x + log10(x) / log10(4));
            printf("|tan x + log3(x)| = %lf\n", result);
        }
        else if (x >= 3) {
            result = (1 / 1 + log(x));
            printf("|1 / 1 + log(x)| = %lf\n", result);
        }
    }
    return 0;
}*/

/*int main()
{
    float a = -0.5, b = 0, x, n, h = 0.05, d = 0.001;
    double res;
    for (x = a,n = 1; x < b + d;x += h,n++) {
        res = -(pow(x, n) / n);
        printf("%lf\n", res);
    }
    return 0;
}*/


void masive(int arr[]) {
    int  i;
    for (i = 0; i < 6; i++)
    {
        printf("mas[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
    printf("\n");
    for (int j = 0, b = 0; j < 6; j++, b++) {
        printf("mas[%d] = ", b);
        printf("%d ", arr[j]);
    }
    printf("\n\n");
}


void balance(int arr[]) {
    int bal;
    int x = arr[0] + arr[1] + arr[2];
    int y = arr[3] + arr[4] + arr[5];
    if (x < y) {
        bal = y - x;
        arr[0] += bal;
    }
    else if (x > y) {
        bal = x - y;
        arr[3] += bal;
    }
    printf("balanced number = %d\n\n", bal);
}

void print(int arr[]) {
    printf("balanced = ");
    for (int k = 0; k < 6; k++) {
        printf("%d ", arr[k]);
    }
}

int main() {
    int arr[6];
    masive(arr);
    balance(arr);
    print(arr);
}



