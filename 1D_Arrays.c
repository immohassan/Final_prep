/**/
#include <stdio.h>
void number_finder(char arr[])
{ // finds integers in an array
    int count = 0;
    for (int i = 0; i < arr[i] != '\0'; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            count++;
            printf("Integer : %c\n", arr[i]);
        }
    }
    printf("Total number of integers present in array: %d\n", count);
}

void Character_finder(char arr[])
{ // finds characters in an array
    int count = 0;
    for (int i = 0; i < arr[i] != '\0'; i++)
    {
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
        {
            count++;
            printf("Characters : %c\n", arr[i]);
        }
    }
    printf("Total number of Characters present in array: %d\n", count);
}

void specialcharacters_finder(char arr[])
{
    int count = 0, gcount = 0;
    for (int i = 0; i < arr[i] != '\0'; i++)
    {
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= '0' && arr[i] <= '9'))
        {
            gcount++;
        }
        else
        {
            count++;
            printf("Special Characters : %c\n", arr[i]);
        }
    }
    printf("Total number of Special Characters present in array: %d\n", count);
}

void evennumber_finder(int arr[14])
{
    int count = 0;
    for (int i = 0; i < 14; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
            printf("Even Number : %d\n", arr[i]);
        }
    }
    printf("Total Numbers of Even numbers : %d\n", count);
}

void oddnumber_finder(int arr[14])
{
    int count = 0;
    for (int i = 0; i < 14; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
            printf("Odd Number : %d\n", arr[i]);
        }
    }
    printf("Total Numbers of Odd numbers : %d\n", count);
}

void prime_checker(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("%d is a Prime number", num);
    }
    else
    {
        printf("%d is not a Prime number", num);
    }
}

void spliting_number(int num){
    while (num > 0) // do till num greater than  0
    {
        int mod = num % 10;  // split last digit from number  
        printf("%d\n", mod); // print the digit.

        num = num / 10; // divide num by 10. num /= 10 also a valid one
    }
}

int spliting_adding(int num)
{
    if (num == 0)
        return 0;  
    return ((num % 10) + spliting_adding(num / 10));
}

int Sum_num(int num)
{
    if (num != 0)
        return num + Sum_num(num - 1);  
    else
        return num;
}

void factorial(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d",num,fact);
}

void arrayPrevsum(int size,int arr[size]){
    for (int i = 0; i < size; i++)
    {
        if(i == 0){
            arr[i] = arr[i];
        }
        else{
            arr[i] = arr[i-1]+arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}

int main()
{
    char arr[] = "gagv12gk2e3v`k-2+r.v/2,k44k6b6k";
    int arr1[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15};
    // number_finder(arr);
    // Character_finder(arr);
    // specialcharacters_finder(arr);
    // evennumber_finder(arr1);
    // oddnumber_finder(arr1);
    // prime_checker(5);
    // spliting_number(1234);
    // int sum = spliting_adding(12345);
    // printf("Sum is : %d",sum);
    // int sum = Sum_num(11);
    // printf("Sum is = %d",sum);
    // factorial(6);
    arrayPrevsum(14,arr1);


    return 0;
}