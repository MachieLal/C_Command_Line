#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* feeOrUpfront(int n, int k, int x, int d, int* p) {
    // Complete this function
    int i;
    double sumOfTransactionFees = 0;
    double d_size = d;
    double y;
    for(i=0; i < n; i++) {

//        y = (double)p[i] / 100 * x;

        sumOfTransactionFees += fmax(k, (double)p[i] / 100 * x);
        printf("%f", sumOfTransactionFees);
    }
    
    if (sumOfTransactionFees <= d_size) {
        return "fee";
    } else {
        return "upfront";
    }
}

int main() {
    int q = 1;
//    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        int n = 3;
        int k = 20;
        int x = 10;
        int d = 60;
        int p[3] = {100, 200, 300};
//        scanf("%i %i %i %i", &n, &k, &x, &d);
//        int *p = malloc(sizeof(int) * n);
//        for (int p_i = 0; p_i < n; p_i++) {
//            scanf("%i",&p[p_i]);
//        }
//        int result_size;
        char* result = feeOrUpfront(n, k, x, d, p);
        printf("%s\n", result);
    }
    return 0;
}

