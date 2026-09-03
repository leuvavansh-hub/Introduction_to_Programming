#include <stdio.h>
 
int main(){

    char product_name[]= "IPhone";
    float price = 90000.50;
    double rating = 4.5;

    printf("Product name: %s\nData type: char\n\n", product_name);
    printf("Price: %.2f\nData type: float\n\n", price);
    printf("Rating: %.2lf\nData type: double\n\n", rating);

    return 0;
}