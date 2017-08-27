#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int buyMaximumProducts(int n, long int k, int* a) {
    // Complete this function
    long int sum = 0;
    long int counter = 0;
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j <= i && sum < k) {
            sum += a[i];
//            printf("%d:%ld::counter = %ld   ", i, sum, counter);
//            if (sum > k) {
//                return counter;
//            } else if (sum == k) {
//                return ++counter;
//            }
            j++;
            counter++;
        }
        i++;
    }
    return counter;
}

int main() {
    int n = 3;
//    int n = 1;
//    int arr[5] = {10, 10, 10, 10, 10};
//    int arr[2] = {100, 100};
    int arr[3] = {10, 7, 19};

//    long int arr[1] = {10};

//    long int k = 20;
//    long int k = 100;
    long int k = 45;

    
    
    
    long int result = buyMaximumProducts(n, k, arr);
    printf("%ld\n", result);
    return 0;
}

