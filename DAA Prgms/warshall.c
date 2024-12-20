#include <stdio.h>

#define MAX_SIZE 100

void warshall(int A[MAX_SIZE][MAX_SIZE], int n) 
{
    int R[MAX_SIZE][MAX_SIZE]; 

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            R[i][j] = A[i][j];
        }
    }

    
    for (int k = 0; k < n; k++) 
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                R[i][j] = R[i][j] || (R[i][k] && R[k][j]);
            }
        }
    }

    
    printf("Transitive Closure Matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter the vertices:");
    scanf("%d",&n);
    int A[MAX_SIZE][MAX_SIZE];
    printf("enter the adjecency matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    warshall(A,n);
    return 0;
}