#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int length, breadth;
    int row, col;

    // 弄よ计籔糴︽计
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    // 糷癹伴北计 (1  length)
    row = 1;
    while (row <= length) {
        // ず糷癹伴北–じ竚 (1  breadth)
        col = 1;
        while (col <= breadth) {
            // 璝材程材︽┪程︽ '+'
            if (row == 1 || row == length || col == 1 || col == breadth) {
                printf("+");
            }
            else {
                // ㄤ緇ず场竚フ
                printf(" ");
            }
            col++;
        }
        // –Ч传︽
        printf("\n");
        row++;
    }

    return 0;
}