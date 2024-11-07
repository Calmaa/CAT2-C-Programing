//an array data structure -is a collection of elements of the same data type stored in contiguous memory location 


#include <stdio.h>


int main(){
    int scores [62][62]={
        {54,90},
        {80,72}
     

};
int score [2][2]={
    {54,30},
    {59,67}
};
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\n",scores[i][j]);
    }
    printf("\n");
    }
     printf("%d\n");
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("\n",score[i][j]);
    }
    printf("\n");
    }
return 0;
}
