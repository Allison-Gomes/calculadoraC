#include<stdio.h>

int main() {
    int idade = 30;

    printf("Hello World!\nMeu nome e Allison Gomes\nAllison tem %d anos?\nSim, ele tem %d anos\n", idade, idade);
    printf("Passaram 10 anos...\n");
    
    //idade = idade / 10;
    idade /= 10;

    printf("Agora a idade de Allison e, %d anos\n", idade);
    return 0;
}