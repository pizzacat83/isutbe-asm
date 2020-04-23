#include <stdio.h>
extern int maxof2(int x, int y);

void check(int actual, int expected) {
    if (expected == actual) {
        printf("[x] expected: %4d == actual: %4d\n", expected, actual);
    } else {
        printf("[!] expected: %4d != actual: %4d\n", expected, actual);
    }
}


// int maxof2(int x, int y) {
//     // dummy implementation to validate check
//     return x>y?x:y;
// }

int main() {
    check(maxof2(2, 1), 2);
    check(maxof2(3, 100), 100);
    check(maxof2(5, 5), 5);
    return 0;
}

