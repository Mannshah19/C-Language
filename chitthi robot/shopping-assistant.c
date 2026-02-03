#include<stdio.h>

float calculateDiscount(int billAmount){
    if(billAmount > 500){
        return billAmount * 0.10;
    }
    return 0;
}

int main(){
    int bill;
    float discount, finalAmount;
    
    printf("Enter bill amount: ");
    scanf("%d", &bill);
    
    discount = calculateDiscount(bill);
    finalAmount = bill - discount;
    
    printf("Final Amount: %f\n", finalAmount);
    
    return 0;
}
