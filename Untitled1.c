#include <stdio.h>

int main(void) {
    char input[1000] = {0};
    float M[10][10];
    int col = 0, row = 0, len = 0;
    int offset;

    scanf("%999s%n", input, &len);

    for (int i = 0, t_row = 0; i < len; i++) {
        sscanf(input + i, "%f%n", &M[col][t_row], &offset);
        i += offset;
        t_row++;

        if (input[i] == ';') {
            col++;
            row = t_row;
            t_row = 0;
        }
    }

    for (int i = 0; i < col; i++) {
        printf("%.1f", M[i][0]);
        for (int j = 1; j < row; j++) {
            printf("\t%.1f", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
