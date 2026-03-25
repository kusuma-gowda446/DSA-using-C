#include <stdio.h>
#include <stdbool.h>

bool canWinNim(int n) {
    if (n % 4 == 0)
        return false;
    else
        return true;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (canWinNim(n))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
