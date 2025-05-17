#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("\nWelcome to the Resturant: \n");
    while(1){

         int n,quan,total_cost1,total_cost2,total_cost3;
         int price[3]={250,220,30};
         char pizza[20]="pizza";
         char burger[20]="Burger";
         char cold_drinks[20]="Cold Drinks";

         printf("\nMenu: \n");
         printf("\n 0 - pizza (250). \n 1 - Burger (220).\n 2 - Cold Drink (30). \n press 3 to exit.\n");
         printf("\n Enter the item number you want to buy: ");
         scanf("%d",&n);

    switch(n)
    {
    case 0:
        printf("\n Enter quantity: ");
        scanf("%d",&quan);
        total_cost1=price[0]*quan;
        printf("\n Your orders %d %s.",quan,pizza);
        printf("\n Total Cost: %d tk\n",total_cost1);
        break;

    case 1:
        printf("\n Enter quantity: ");
        scanf("%d",&quan);
        int total_cost2 = price[1]*quan;
        printf("\n Your orders %d %s.",quan,burger);
        printf("\n Total Cost: %d tk\n",total_cost2);
        break;
    case 2:
        printf("\n Enter quantity: ");
        scanf("%d",&quan);
        int total_cost3 = price[2]*quan;
        printf("\n Your orders %d %s.",quan,cold_drinks);
        printf("\n Total Cost: %d tk\n",total_cost3);
        break;
    case 3:
         return 0;
    default :
        printf("Invalid Option.");
    }

}
}
