#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    long long total_candies = 0;

    for (int i = 0; i < M; i++) {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);

        total_candies += (long long)(b - a + 1) * k;
    }

    printf("%lld\n", total_candies / N);

    return 0;
}
