#include<stdio.h>

void makeCoffee(int sugar){

    printf("Coffee is ready with %d spoons sugar!",sugar);    
}

int main(){

    int sugar;
    printf("Enter number of spoons of sugar in coffee: ");
    scanf("%d", &sugar);

    makeCoffee(sugar);

return 0;
}