/**/ 
#include <stdio.h>
void pattern1(int size)
{ // hollow rectangle with X in it
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1 || i == j || ((size - 1) - i) == j)
            { // i==0 || i == size-1 || j == 0 || j == size-1  condition for hollow rectangle rest for x
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern2(int size) // hollow tera rectangle
{
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= size; k++)
        {
            if (i == 1 || i == size || k == 1 || k == size) // condition fot hollow
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern3(int size) // hollow mirrored tera rectangle
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= size; k++)
        {
            if (i == 1 || i == size || k == 1 || k == size) // condition fot hollow
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern4(int size) // hollow mirrored tera rectangle
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= size; k++)
        {
            if (i == 1 || i == size || k == 1 || k == size || i == k || size - i == k) // condition fot hollow
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern5(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == j || i == size)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern6(int size)
{
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern7(int size){
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if(i==j || (size-i) == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
void pattern8(int size){
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2*i)-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }// upper
    for (int i = size-1; i >=1; i--)
    {
        for(int j = 1; j <= size-i;j++){
            printf(" ");
        }
        for (int k = 1; k <= (2*i)-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    pattern1(size);
    pattern2(size);
    pattern3(size);
    pattern4(size);
    pattern5(size);
    pattern6(size);
    pattern7(size);
    pattern8(size);
    return 0;
}