#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void selectionsort(int a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        int min=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }

        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }

}
void printArray(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    srand(time(NULL));
    int n;
    printf("Enter the random numbers:");
    scanf("%d",&n);



    int a[n];
    for(int i=0; i<n; i++)
    {
        a[i]=rand()% 100;
    }
    clock_t start_t=clock();

    printf("Unsorted array:");
    printArray(a,n);

    selectionsort(a,n);

    printf("Sorted array:");
    printArray(a,n);

    clock_t end_t=clock();
    double elapsed_t=(double) (end_t-start_t)/CLOCKS_PER_SEC;
    printf("Execution time :%f seconds",elapsed_t);
    return 0;
}

