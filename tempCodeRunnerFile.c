#include <stdio.h>
#include <string.h>
int main() {
    char item [50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;
    char payment[10] = "";


    printf("What item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) -1 ] = '\0';  
    printf("What is the price of each item? ");
    scanf("%f", &price);


    printf("How many items would you like to buy? ");
    scanf("%d", &quantity);

    total = price * quantity    ;
    printf("\nYou have bought %d %s/s \n", quantity , item);
    printf("\nThe total is %c%.2f", currency , total);

    printf("\nWill you pay with cash or card?");
    scanf("%s", &payment);
 return 0;
} 





  

