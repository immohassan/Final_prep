/**/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct game{
    int alpha;
    int beta;
    char charlie[255];
    float shit;
    char arr[1000];
};

int main(){
    char a[100] = "hassan";
    struct game * g1 = (struct game*)malloc(sizeof(struct game));
    g1->alpha = 12;
    g1->beta = 14;
    strcpy(g1->charlie, a);
    g1->shit = 6.9;
    sprintf(g1->arr,"%d %d %s %f",g1->alpha,g1->beta,g1->charlie,g1->shit);
    FILE * fp;
    fp = fopen("./testfile.txt","w");
    // fwrite(&g1,sizeof(struct game),1,fp);
    fwrite(&g1->arr,sizeof(struct game),1,fp);
    if(fwrite != 0){
        printf("Struct written in file successfully!");
    }
    else{
        printf("Error writing file");
    }
    fclose(fp);


    return 0;
}