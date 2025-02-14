// You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

// Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

// Your task is to apply these changes and return the final passcode that will successfully open the vault.

// Note: After the number 9, the dial wraps around back to 0.

// Input Format

// Space separated 10-digit vault configuration with 3 wrong digits.
// Three pairs in new line provided, each pair on a new line. Each pair contains:
// The index of the incorrect digit (0-indexed).
// The number by which the dial must be rotated to correct it.
// Constraints

// All inputs are digits from 0 to 9

// Output Format

// Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.


#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, h, i, j;

    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    
    int index1, rotation1;
    scanf("%d %d", &index1, &rotation1);
    if (index1 == 0) {
        a = (a + rotation1) % 10;
    } else if (index1 == 1) {
        b = (b + rotation1) % 10;
    } else if (index1 == 2) {
        c = (c + rotation1) % 10;
    } else if (index1 == 3) {
        d = (d + rotation1) % 10;
    } else if (index1 == 4) {
        e = (e + rotation1) % 10;
    } else if (index1 == 5) {
        f = (f + rotation1) % 10;
    } else if (index1 == 6) {
        g = (g + rotation1) % 10;
    } else if (index1 == 7) {
        h = (h + rotation1) % 10;
    } else if (index1 == 8) {
        i = (i + rotation1) % 10;
    } else if (index1 == 9) {
        j = (j + rotation1) % 10;
    }
    
    int index2, rotation2;
    scanf("%d %d", &index2, &rotation2);
    if (index2 == 0) {
        a = (a + rotation2) % 10;
    } else if (index2 == 1) {
        b = (b + rotation2) % 10;
    } else if (index2 == 2) {
        c = (c + rotation2) % 10;
    } else if (index2 == 3) {
        d = (d + rotation2) % 10;
    } else if (index2 == 4) {
        e = (e + rotation2) % 10;
    } else if (index2 == 5) {
        f = (f + rotation2) % 10;
    } else if (index2 == 6) {
        g = (g + rotation2) % 10;
    } else if (index2 == 7) {
        h = (h + rotation2) % 10;
    } else if (index2 == 8) {
        i = (i + rotation2) % 10;
    } else if (index2 == 9) {
        j = (j + rotation2) % 10;
    }

    int index3, rotation3;
    scanf("%d %d", &index3, &rotation3);
    if (index3 == 0) {
        a = (a + rotation3) % 10;
    } else if (index3 == 1) {
        b = (b + rotation3) % 10;
    } else if (index3 == 2) {
        c = (c + rotation3) % 10;
    } else if (index3 == 3) {
        d = (d + rotation3) % 10;
    } else if (index3 == 4) {
        e = (e + rotation3) % 10;
    } else if (index3 == 5) {
        f = (f + rotation3) % 10;
    } else if (index3 == 6) {
        g = (g + rotation3) % 10;
    } else if (index3 == 7) {
        h = (h + rotation3) % 10;
    } else if (index3 == 8) {
        i = (i + rotation3) % 10;
    } else if (index3 == 9) {
        j = (j + rotation3) % 10;
    }
    printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);

return 0;
}
