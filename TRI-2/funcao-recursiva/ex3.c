#include <stdio.h>

int pg (int input, int first, int ratio){
    if(input == 1){
        return first;
    } else {
        return ratio * pg(input -1, first, ratio);
    }
}

int main (){
    int input, ratio;
    printf("Digite qual termo da pg quer saber: ");
    scanf("%d", &input);
    printf("Digite a razao da pg: ");
    scanf("%d", &ratio);
    printf("O termo %d da PG eh %d", input, pg(input, 1, ratio));
    return 0;
}