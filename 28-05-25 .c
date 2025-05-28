#include <stdio.h>
#include <string.h>

void addProduct();
void display();

// create structure
struct myStructure
{
    int p_id;
    char p_name[20];
    int p_price;
};
struct myStructure product[100];

int inx = -1;

void addProduct()
{
    inx++;
    int id, price;
    char name[20];
    printf("\nInput Product Information:\n");
    printf("-----------------------------\n");
    printf("Enter Product ID: ");
    scanf("%d", &id);

    printf("Enter Product Price: ");
    scanf("%d", &price);

    getchar();

    printf("Enter Product Name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
    }

    // assign all value
    product[inx].p_id = id;
    strcpy(product[inx].p_name, name);
    product[inx].p_price = price;
}

void display()
{
    if (inx < 0)
    {
        printf("\nNo products to display.\n");
        return;
    }

    printf("\nDisplay Product Information:\n");
    printf("-----------------------------------\n");
    for (int i = 0; i <= inx; i++)
    {
        printf("Product ID: %d\n", product[i].p_id);
        printf("Product Name: %s\n", product[i].p_name);
        printf("Product Price: %d\n\n", product[i].p_price);
    }
}

// main function
int main()
{
    int n;

    while (1)
    {
        printf("\nMenu\n");
        printf("---------------------------\n");
        printf("1. Add Product.\n2. Display.\n3. Exit.\n");
        printf("Choose Option: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            addProduct();
            break;
        case 2:
            display();
            break;
        case 3:
            return 0;
        default:
            printf("Wrong input\n");
            break;
        }
    }
    return 0;
}
