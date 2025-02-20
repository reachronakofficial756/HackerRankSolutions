#include <stdio.h>
#include <stdbool.h>

bool areAllBitsSet(int n) {

    if (n == -1) {
        return true;
    }

    if (n == 0) {
        return false;
    }

    return (n & (n + 1)) == 0;
}

int main() {
    int n;

    scanf("%d", &n);
    
    printf("%s\n", areAllBitsSet(n) ? "Yes" : "No");
    
    return 0;
}

