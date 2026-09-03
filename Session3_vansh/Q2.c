#include<stdio.h>

int main(){

    const float gst_rate=18.00;
    float base_price;
    float gst;
    float final_price;

    printf("Enter the base price: ");
    scanf("%f", &base_price);
    gst = base_price * gst_rate / 100;
    final_price = base_price + gst;
    
    printf("Final price : %.2f\n", final_price);
    return 0;
}
