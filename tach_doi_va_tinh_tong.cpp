#include <stdio.h>
#include <string.h>

// Hàm tính t?ng c?a hai chu?i s? nguyên
void tong(char a[], char b[], char ans[]) {
    int i = strlen(a) - 1, j = strlen(b) - 1;
    int index = 0;
    int s[10000] = {0};

    // Tính t?ng t?ng c?p ch? s? t? ph?i qua trái
    while (i >= 0 && j >= 0)
        s[index++] = a[i--] - '0' + b[j--] - '0';

    // N?u m?t trong hai chu?i còn du, ti?p t?c tính t?ng v?i ph?n còn l?i
    while (i >= 0)
        s[index++] = a[i--] - '0';
    while (j >= 0)
        s[index++] = b[j--] - '0';

    int du = 0;

    // Tính t?ng và x? lý bit nh?
    for (int i = 0; i < index; i++) {
        int tmp = s[i] + du;
        s[i] = tmp % 10;
        du = tmp / 10;
    }

    // N?u còn bit nh?, thêm vào chu?i k?t qu?
    if (du)
        s[index++] = du;

    ans[0] = '\0';

    // Ð?o ngu?c chu?i k?t qu? d? có k?t qu? dúng
    for (int i = index - 1; i >= 0; i--) {
        char tmp = s[i] + '0';
        strncat(ans, &tmp, 1); // n?i 1 kí t? tmp vào cu?i c?a chu?i ans
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
