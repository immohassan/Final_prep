#include <stdio.h>
int stat_calc(int array[], int size)
{
    //--------for mean--------//
    int i, j;
    float mean = 0;
    float sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + array[i]; // calculating the total sum of elements of array//
    }
    mean = sum / size;
    printf("Mean of the array is : %.2f\n", mean);
    //--------------------------------------------//
    //----------for median----------//
    for (i = 0; i < size; i++) // sorting//
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp; // swapping//
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    // calculations for median//
    float median;
    if (size % 2 == 0) // if array is even//
    {
        median = (array[size / 2] + array[(size / 2) - 1]); // the middle two values in the array will be added
        median = median / 2;                                // and divided by two to make a single value
    }
    else if (size % 2 != 0) // if array is odd//
    {
        median = array[size / 2];
    }
    printf("Median of the array is: %.2f\n", median);
    //-----------------------------------------------//
    //----------for mode---------//
    int array2[20] = {0}, count = 1, max = 0, temp, mode;
    for (i = 0; i < size - 1; i++)
    {
        mode = 0;
        for (j = i + 1; j < size; j++) // for comparing, we use two loops//
        {
            if (array[i] == array[j])
            { // if we match same elements in first array, mode will increase//
                mode++;
            }
        } // 2nd loop ends//
        if ((mode > max) && (mode != 0))
        { // condition1: if mode is increased, this condition will execute//
            temp = 0;
            max = mode;              // value of mode will be give to max//
            array2[temp] = array[i]; // the repeated value will be sent to second array//
            temp++;
        }
        else if (mode == max)
        { /*condition2: if mode is not increased, this condition will execute, or if
program founds any other value that repeats same as the number of first repeatd value*/
            array2[temp] = array[i];
            temp++;
        }
    }
    for (i = 0; i < size; i++)
    {
        if (array[i] == array2[i]) // this will check both elements inside both arrays//
            count++;
    }
    if (count == size) /*if count reaches the value of size, it means that there is no mode,
        see condition2 for better understanding*/
        printf("There is no mode");
    else
    {
        printf("Mode= ");
        for (i = 0; i < temp; i++) // number of mode elements are stored in second array, and will be printed//
            printf("%d ", array2[i]);
    }
    //---------------------------------------//
}
int main()
{
    int size;
    printf("Enter the number of elements in array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
    stat_calc(array, size); // calling function/
}
