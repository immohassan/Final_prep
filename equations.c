/**/
#include <stdio.h>
int factorial(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int nPr(int n, int r){
    return factorial(n)/factorial(n-r);
}

int probability(int sample_space[], int element,float size){
    float pr = element/size;
    printf("Probability : %.2f",pr);
}
int main(){
    int n,r;
    int num1,num2;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Enter R: ");
    scanf("%d",&r);
    num1 = nCr(n,r);
    num2 = nPr(n,r);
    printf("nCr : %d & nPr : %d\n\n\n",num1,num2);
    int arr[255],element;
    float size;
    printf("Enter size of Sample space: ");
    scanf("%f",&size);
    printf("Enter sample space: \n");
    for(int i =0 ; i < size; i++){
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter no. of Element:");
    scanf("%d",&element);
    probability(arr,element,size);
    return 0;
}
