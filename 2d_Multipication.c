/**/
#include <stdio.h>
// for first row,first column
void Multiplier(int size, int arr[size][size], int arr2[size][size], int arr3[size][size])
{
    int i, j, k, sum;
    for (i = 0; i < size; i++)  // first loop for rows
    {
        for (j = 0; j < size; j++)  // second loop for columns
        {
            sum = 0;
            for (k = 0; k < size; k++)  // third loop, honestly can't be explained in comments
            { 
                // first row, first column
                sum = sum + (arr[i][k] * arr2[k][j]);   // this is the main thing, this conditon is taking the dot matrix mul, will explain in vm.
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
// for first column, first row
void mul2(int size, int arr[size][size], int arr2[size][size], int arr3[size][size]){
        int i, j, k, sum;
    for (i = 0; i < size; i++)  // first loop for rows
    {
        for (j = 0; j < size; j++)  // second loop for columns
        {
            sum = 0;
            for (k = 0; k < size; k++)  // third loop, honestly can't be explained in comments
            { 
                // first column, first row
                sum = sum + (arr[k][j] * arr2[i][k]);   // this is the main thing, this conditon is taking the dot matrix mul, will explain in vm.
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
// for first row, last column
void Mul3(int size, int arr[size][size], int arr2[size][size], int arr3[size][size])
{
    int i, j, k, sum;
    for (i = 0; i < size; i++)  // first loop for rows
    {
        for (j = 0; j < size; j++)  // second loop for columns
        {
            sum = 0;
            for (k = 0; k < size; k++)  // third loop, honestly can't be explained in comments
            { 
                // first row, last column
                sum = sum + (arr[i][k] * arr2[k][(size-1)-j]);   // this is the main thing, this conditon is taking the dot matrix mul, will explain in vm.
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
// for last column, first row
void Mul4(int size, int arr[size][size], int arr2[size][size], int arr3[size][size])
{
    int i, j, k, sum;
    for (i = 0; i < size; i++)  // first loop for rows
    {
        for (j = 0; j < size; j++)  // second loop for columns
        {
            sum = 0;
            for (k = 0; k < size; k++)  // third loop, honestly can't be explained in comments
            { 
                // last column, first row
                sum = sum + (arr[k][(size-1)-j] * arr2[i][k]);   // this is the main thing, this conditon is taking the dot matrix mul, will explain in vm.
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
// for last row, last column
void Mul5(int size, int arr[size][size], int arr2[size][size], int arr3[size][size])
{
    int i, j, k, sum;
    for (i = 0; i < size; i++)  // first loop for rows
    {
        for (j = 0; j < size; j++)  // second loop for columns
        {
            sum = 0;
            for (k = 0; k < size; k++)  // third loop, honestly can't be explained in comments
            { 
                // last row, last column
                sum = sum + (arr[(size-1)-i][k] * arr2[k][size-1-j]);   // this is the main thing, this conditon is taking the dot matrix mul, will explain in vm.
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
// last row, first column
void Mul6(int size, int arr[size][size], int arr2[size][size], int arr3[size][size])
{
    int i, j, k, sum;
    for (i = 0; i < size; i++)  // first loop for rows
    {
        for (j = 0; j < size; j++)  // second loop for columns
        {
            sum = 0;
            for (k = 0; k < size; k++)  // third loop, honestly can't be explained in comments
            { 
                // last row, first column
                sum = sum + (arr[(size-1)-i][k] * arr2[k][j]);   // this is the main thing, this conditon is taking the dot matrix mul, will explain in vm.
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
int main()
{
    int size,arr3[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    printf("Enter size of matrix(assuming square matrix): \n");
    scanf("%d", &size);
    //initializing Array
    int arr[3][3] =  {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] =  {{9,8,7},{6,5,4},{3,2,1}};
    Multiplier(size,arr,arr2,arr3);
    mul2(size,arr,arr2,arr3);
    Mul3(size,arr,arr2,arr3);
    Mul4(size,arr,arr2,arr3);
    Mul5(size,arr,arr2,arr3);
    Mul6(size,arr,arr2,arr3);

    return 0;
}