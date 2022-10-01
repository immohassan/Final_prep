/**/
#include <stdio.h>
void printer(int size, char array[size][size])
{
    for (int i = 0; i < size; i++)
    {
        array[size - 1 - i][size - 1 - i] = '*';
        array[size - 1 - i][i] = '*';
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c", array[i][j]);
        }
        printf("\n");
    }
}

void achawalaprinter(int size){   // uses no array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i==j || ((size-1)-i) == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    char arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
        arr[i][j] = ' ';
        }
    }
    // printer(size,arr);
    achawalaprinter(size);

    return 0;
}