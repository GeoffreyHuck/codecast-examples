/* {"title":"tableau 1D","platform":"unix","tags":["unix"]} */
#include <stdio.h>
int main() {
    //! showArray(a, cursors=[i,n], n=8, cw=32)
    int i, n = 12;
    int a[n];
    a[0] = 1;
    for (i = 1; i < n; i++) {
        a[i] = a[i - 1] * 2;
    }
    for (i = 0; i < n; i++) {
        printf("a[%i] = %i\n", i, a[i]);
    }
}
