#include <stdio.h>
#include <string.h>

// H�m t�nh t?ng c?a hai chu?i s? nguy�n
void tong(char a[], char b[], char ans[]) {
    int i = strlen(a) - 1, j = strlen(b) - 1;
    int index = 0;
    int s[10000] = {0};

    // T�nh t?ng t?ng c?p ch? s? t? ph?i qua tr�i
    while (i >= 0 && j >= 0)
        s[index++] = a[i--] - '0' + b[j--] - '0';

    // N?u m?t trong hai chu?i c�n du, ti?p t?c t�nh t?ng v?i ph?n c�n l?i
    while (i >= 0)
        s[index++] = a[i--] - '0';
    while (j >= 0)
        s[index++] = b[j--] - '0';

    int du = 0;

    // T�nh t?ng v� x? l� bit nh?
    for (int i = 0; i < index; i++) {
        int tmp = s[i] + du;
        s[i] = tmp % 10;
        du = tmp / 10;
    }

    // N?u c�n bit nh?, th�m v�o chu?i k?t qu?
    if (du)
        s[index++] = du;

    ans[0] = '\0';

    // �?o ngu?c chu?i k?t qu? d? c� k?t qu? d�ng
    for (int i = index - 1; i >= 0; i--) {
        char tmp = s[i] + '0';
        strncat(ans, &tmp, 1); // n?i 1 k� t? tmp v�o cu?i c?a chu?i ans
    }
}

int main() {
    char a[201], b[201], c[201], d[201];
    scanf("%s", a);

    while (strlen(a) > 1) {
        int n1 = strlen(a) / 2;
        int n2 = strlen(a);
        strncpy(b, a, n1);
        b[n1] = '\0';
        strncpy(c, a + n1, n2);
        tong(c, b, d);
        printf("%s\n", d);
        strcpy(a, d);
    }

    return 0;
}
