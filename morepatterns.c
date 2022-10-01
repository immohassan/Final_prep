/**/
#include <stdio.h>
void hollowreversepyramid(int size)
{
    int i,j;
     /* Iterate through rows */
    for(i=1; i<=size; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(size*2 - (2*i-1)); j++)
        {
            /*
             * Print star for first row(i==1),
             * ith column (j==1) and for
             * last column (size*2-(2*i-1))
             */ 
            if(i==1 || j==1 || j==(size*2 - (2*i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

}

void hollowpyramid(int size)
{
    int i,j;
    for(i=1; i<=size; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<size; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(2*i-1); j++)
        {
            /*
             * Print star for last row (i==size),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */ 
            if(i==size || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }
}

void hollowdiamond(int size)
{
    int i,j;
    for(i=1; i<=size; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<size; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(2*i-1); j++)
        {
            /*
             * Print star for last row (i==size),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */ 
            if( j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

    for(i=1; i<=size; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(size*2 - (2*i-1)); j++)
        {
            /*
             * Print star for first row(i==1),
             * ith column (j==1) and for
             * last column (size*2-(2*i-1))
             */ 
            if(j==1 || j==(size*2 - (2*i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }
}

void display(int r){
    int x,y;
    int xsq, ysq;
    int rsq = r*r;
    // x and y representing coordinates on an imaginary cartisian plane 
    for(x=-r;x<=r;x++)
    {  
        xsq = x*x;
        printf("\t\t\t");//some tabs to make it kinda "centered"
        for(y=-r;y<=r;y++)
        {
            /*if the coordinate:(x,y) is a point of the equation x^2+y^2=r^2 prints the char:*, if 
            not leaves that space empty*/
            int ysq = y*y;
            int dsq = xsq + ysq;
            if( dsq > rsq - r && dsq < rsq + r)
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
    // hollowpyramid(size);
    // hollowreversepyramid(size);
    hollowdiamond(size);
    // display(size);
    return 0;
}