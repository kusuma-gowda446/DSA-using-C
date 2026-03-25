#include <stdio.h>
#include <stdbool.h>

bool divisorGame(int n) {
    if (n % 2 == 0)
        return true;
    else
        return false;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (divisorGame(n))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
