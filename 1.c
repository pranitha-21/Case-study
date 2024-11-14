#include <stdio.h>
#include <string.h>

void next_permutation(char *str) {
    int n = strlen(str);
    int i = n - 2;

    while (i >= 0 && str[i] >= str[i + 1]) {
        i--;
    }
    if (i < 0) {
        return;
    }
    int j = n - 1;
    while (str[j] <= str[i]) {
        j--;
    }

    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;

    int k = i + 1;
    int l = n - 1;
    while (k < l) {
        temp = str[k];
        str[k] = str[l];
        str[l] = temp;
        k++;
        l--;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[101];
        scanf("%s", str);

        next_permutation(str);

        if (strcmp(str, "no answer") == 0) {
            printf("no answer\n");
        } else {
            printf("%s\n", str);
        }
    }

    return 0;
}

