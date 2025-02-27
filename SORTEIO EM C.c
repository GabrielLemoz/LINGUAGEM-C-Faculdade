#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int sorteio = rand()%5;
    printf("o sorteado foi o número:%d\n", sorteio);
    return 0;
}
