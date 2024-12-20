#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char T[MAX], P[6];
    int n, m, i = -1;
    printf("Enter pattern (max 5 characters): ");
    scanf("%s", P);
    FILE *f = fopen("input.txt", "r");
    if (!f) {
        printf("Error opening file!\n");
        return 1;
    }
    fgets(T, MAX, f);
    fclose(f);
    for (i = 0; i <= n - m; i++)  {
        n = strlen(T);
        m = strlen(P);
        for (int j = 0; j < m && P[j] == T[i + j]; j++)
            if (j == m - 1) {
                printf("Pattern found at index: %d\n", i);
                return 0;
            }   
    }
        printf("Pattern not found.\n");
        return 0;
}