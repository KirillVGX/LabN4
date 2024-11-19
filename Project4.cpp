#include <iostream>
using namespace std;

void copyValue(int* source, int* destination) {
    *destination = *source;
}

void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    if (*a % 2 == 0) {
        (*evenCount)++;
    }
    else {
        (*oddCount)++;
    }

    if (*b % 2 == 0) {
        (*evenCount)++;
    }
    else {
        (*oddCount)++;
    }

    if (*c % 2 == 0) {
        (*evenCount)++;
    }
    else {
        (*oddCount)++;
    }
}

void multiply(int* a, int* b, int* result) {
    *result = (*a) * (*b);
}

void swapWithoutTemp(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void findMinMax(int* a, int* b, int* c, int* min, int* max) {
    // Ініціалізація min і max значеннями першого числа
    *min = *a;
    *max = *a;

    // Перевірка другого числа
    if (*b < *min) {
        *min = *b;
    }
    if (*b > *max) {
        *max = *b;
    }

    // Перевірка третього числа
    if (*c < *min) {
        *min = *c;
    }
    if (*c > *max) {
        *max = *c;
    }
}

int main() {
    int a = 7;
    int b = 8;
    int c = 110;
    int evenCount = 0;
    int oddCount = 0;
    int result = 0;
    int x = 5;
    int y = 10;
    int min, max;

    copyValue(&a, &b);
    countEvenOdd(&a, &b, &c, &evenCount, &oddCount);
    multiply(&a, &b, &result);
    swapWithoutTemp(&x, &y);
    findMinMax(&a, &b, &c, &min, &max);

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "Кількість парних чисел: " << evenCount << endl;
    cout << "Кількість непарних чисел: " << oddCount << endl;
    cout << "multiply: " << result << endl;
    cout << "swapWithoutTemp: x = " << x << ", y = " << y << endl;
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    return 0;
}