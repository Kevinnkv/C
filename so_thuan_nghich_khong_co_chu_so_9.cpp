#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int num) {
    int reverse = 0;
    int original = num;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return original == reverse;
}

bool has_no_nine(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit == 9) {
            return false;
        }
        num /= 10;
    }

    return true;
}

int main() {
    int N;
    scanf("%d", &N);


    int count = 0;
    for (int num = 2; num < N; num++) {
        if (is_palindrome(num) && has_no_nine(num)) {
            printf("%d ", num);
            count++;
        }
    }

    printf("\nSo luong cac so thuan nghich khong chua chu so 9: %d\n", count);

    return 0;
}

