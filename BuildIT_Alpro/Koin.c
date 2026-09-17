#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int banding(const void *x, const void *y) {
    int a = *(const int *)x;
    int b = *(const int *)y;

    if (a < b)
        return -1;
    if (a > b)
        return 1;
    return 0;
}

int main() {
    int n;
    const long long MOD = 1000000007;
    long long jumlah;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), banding);

    // Semua kemungkinan pasangan
    jumlah = ((long long)n * (n - 1) / 2) % MOD;

    // Mengurangi pasangan dengan nilai yang sama
    for (int i = 0; i < n; ) {
        int j = i + 1;

        while (j < n && a[i] == a[j]) {
            j++;
        }

        long long banyak = j - i;

        jumlah = (jumlah - (banyak * (banyak - 1) / 2)) % MOD;

        i = j;
    }

    if (jumlah < 0)
        jumlah += MOD;

    printf("%lld\n", jumlah);

    return 0;
}