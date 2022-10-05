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
void transpose(int size, int arr[size][size]){
    int arr2[size][size];
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr2[i][j] = arr[j][i];
        }
        
    }
    printf("Transposed matrix : \n");
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
}
void transpose2(int size, int arr[size][size]){
    int arr2[size][size];
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr2[i][j] = arr[(size-1)-j][i]; //last column, first row
        }
        
    }
    printf("Transposed matrix : \n");
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
}
void transpose3(int size, int arr[size][size]){
    int arr2[size][size];
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr2[i][j] = arr[j][(size-1)-i]; // first column, last row
        }
        
    }
    printf("Transposed matrix : \n");
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
}
void transpose4(int size, int arr[size][size]){
    int arr2[size][size];
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr2[i][j] = arr[size-1-j][size-1-i];  //last col, last row
        }
        
    }
    printf("Transposed matrix : \n");
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",arr2[i][j]);
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
    transpose2(size,arr);
    transpose3(size,arr);
    transpose4(size,arr);
    return 0;
}