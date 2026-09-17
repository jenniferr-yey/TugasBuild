#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    long long a;
    long long jumlah = 0;
    long long operasi;
    
    scanf("%d", &n);
    
    for (int i = 1; i <=n; i++) {
    scanf("%lld", &a);
    jumlah = jumlah + a;}
    
    if (jumlah < 0) {
        operasi = -jumlah;
    } else {
        operasi = jumlah;
    } printf("%lld", operasi);
    
    return 0;
}

