#include<stdio.h>

float calculateTotal(float itemprice, int quantity){
    return itemprice * quantity;
}
 int main() {
    float itemprice = 100.50;
    int quantity = 5;

    float total =calculateTotal(itemprice,quantity);

    printf("Total price: %.2f\n", total);

    return 0;

 }
