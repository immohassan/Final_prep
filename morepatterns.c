/**/
#include <stdio.h>
void hollowreversepyramid(int size)
{
    int row, col;
    for ( row = size; row >= 1; row--)
    {
        for ( col = 1; col <= 2*size-1; col++)
        {
            if (row == size || row+col == size+1 || col == size+row-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}

void hollowpyramid(int size)
{
    int row, col;
    for ( row = 1; row <= size; row++)
    {
        for ( col = 1; col <= 2*size-1; col++)
        {
            if (row == size || row+col == size+1 || col == size+row-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}

void hollowdiamond(int size)
{
    int row, col;
    for ( row = 1; row <= size; row++)
    {
        for ( col = 1; col <= 2*size-1; col++)
        {
            if ( row+col == size+1 || col == size+row-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    //downwards
    for ( row = size; row >= 1; row--)
    {
        for ( col = 1; col <= 2*size-1; col++)
        {
            if ( row+col == size+1 || col == size+row-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}

void display(int r)
{
    int x, y;
    int xsq, ysq;
    int rsq = r * r;
    // x and y representing coordinates on an imaginary cartisian plane
    for (x = -r; x <= r; x++)
    {
        xsq = x * x;
        printf("\t\t\t"); // some tabs to make it kinda "centered"
        for (y = -r; y <= r; y++)
        {
            /*if the coordinate:(x,y) is a point of the equation x^2+y^2=r^2 prints the char:*, if
            not leaves that space empty*/
            int ysq = y * y;
            int dsq = xsq + ysq;
            if (dsq > rsq - r && dsq < rsq + r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    hollowpyramid(size);
    hollowreversepyramid(size);
    hollowdiamond(size);
    return 0;
}