/**/
#include <stdio.h>
void array_input(int size, int arr[size][size]){
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter [%d] [%d] value: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        
    }
}
void sum2d(int size, int arr[size][size],int arr2[size][size]){
    int arr3[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    
}
void sum2d1(int size, int arr[size][size],int arr2[size][size]){
    int arr3[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[size-1-i][j]; // last row, first col
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    
}
void sum2d2(int size, int arr[size][size],int arr2[size][size]){
    int arr3[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][size-1-j]; //first row, last col
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    
}
void sum2d3(int size, int arr[size][size],int arr2[size][size]){
    int arr3[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[size-1-i][size-1-j]; //last row, last column
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    
}
int main(){
    int size;
    printf("Enter size of Matric (n x n) : ");
    scanf("%d",&size);
    int arr[size][size];
    array_input(size,arr);
    printf("\n Now for second Matrix: \n");
    int arr2[size][size];
    array_input(size,arr2);
    sum2d1(size,arr,arr2);
    sum2d2(size,arr,arr2);
    sum2d3(size,arr,arr2);
    return 0;
}