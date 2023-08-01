#include <stdio.h>
#include <string.h>

void mahoa(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] != '0') {
            int cnt = 1;
            while (a[i] == a[i + 1]) {
                cnt++;
                i++;
            }
            printf("%c%d", a[i], cnt);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char a[101];
        scanf("%s", a);

        mahoa(a);
        printf("\n");
    }

    return 0;
}

