#include <stdio.h>

int main()
{
    int n, choice;
    float Rice_Quantity, Oil_Quantity;
    float Rice_price, Oil_price;
    float Total_Price;

    printf("\n====================================\n");
    printf("       GROCERY BILLING SYSTEM\n");
    printf("====================================\n");

    printf("1. Single Item (Rice or Oil)\n");
    printf("2. Both Rice & Oil\n");

    printf("------------------------------------\n");
    printf("Enter your choice: ");

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid Input! Please enter a number.\n");
        return 1;
    }

    if (n == 1)
    {
        printf("\n========== SINGLE ITEM ==========\n");

        printf("1. Rice\n");
        printf("2. Oil\n");

        printf("--------------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid Input!\n");
            return 1;
        }

        if (choice == 1)
        {
        Rice:
            printf("\n========== RICE ==========\n");

            printf("Enter Rice Quantity (kg): ");

            if (scanf("%f", &Rice_Quantity) != 1)
            {
                printf("Invalid Quantity!\n");
                return 1;
            }

            printf("Enter Rice Price per kg: ");

            if (scanf("%f", &Rice_price) != 1)
            {
                printf("Invalid Price!\n");
                return 1;
            }

            if (Rice_Quantity <= 0 || Rice_price <= 0)
            {
                printf("Invalid Input! Quantity and Price must be positive.\n");
                goto Rice;
            }
            else
            {
                Total_Price = Rice_Quantity * Rice_price;

                printf("\n---------- BILL ----------\n");
                printf("Rice Quantity: %.2f kg\n", Rice_Quantity);
                printf("Rice Price per kg: Tk %.2f\n", Rice_price);
                printf("Rice Total Price: Tk %.2f\n", Total_Price);
                printf("--------------------------\n");
            }
        }

        else if (choice == 2)
        {
        Oil:
            printf("\n========== OIL ==========\n");

            printf("Enter Oil Quantity (L): ");

            if (scanf("%f", &Oil_Quantity) != 1)
            {
                printf("Invalid Quantity!\n");
                return 1;
            }

            printf("Enter Oil Price per L: ");

            if (scanf("%f", &Oil_price) != 1)
            {
                printf("Invalid Price!\n");
                return 1;
            }

            if (Oil_Quantity <= 0 || Oil_price <= 0)
            {
                printf("Invalid Input! Quantity and Price must be positive.\n");
                goto Oil;
            }
            else
            {
                Total_Price = Oil_Quantity * Oil_price;

                printf("\n---------- BILL ----------\n");
                printf("Oil Quantity: %.2f L\n", Oil_Quantity);
                printf("Oil Price per L: Tk %.2f\n", Oil_price);
                printf("Oil Total Price: Tk %.2f\n", Total_Price);
                printf("--------------------------\n");
            }
        }

        else
        {
            printf("\nInvalid Item Choice!\n");
        }
    }

    else if (n == 2)
    {
    Rice_oil:
        printf("\n======= RICE & OIL =======\n");

        printf("\n[Rice Details]\n");

        printf("Enter Rice Quantity (kg): ");

        if (scanf("%f", &Rice_Quantity) != 1)
        {
            printf("Invalid Rice Quantity!\n");
            return 1;
        }

        printf("Enter Rice Price per kg: ");

        if (scanf("%f", &Rice_price) != 1)
        {
            printf("Invalid Rice Price!\n");
            return 1;
        }

        printf("\n[Oil Details]\n");

        printf("Enter Oil Quantity (L): ");

        if (scanf("%f", &Oil_Quantity) != 1)
        {
            printf("Invalid Oil Quantity!\n");
            return 1;
        }

        printf("Enter Oil Price per L: ");

        if (scanf("%f", &Oil_price) != 1)
        {
            printf("Invalid Oil Price!\n");
            return 1;
        }

        if (Rice_Quantity <= 0 || Rice_price <= 0 ||
            Oil_Quantity <= 0 || Oil_price <= 0)
        {
            printf("\nInvalid Input! All quantities and prices must be positive.\n");
            goto Rice_oil;
        }
        else
        {
            Total_Price = (Rice_Quantity * Rice_price) + (Oil_Quantity * Oil_price);

            printf("\n========== BILL ==========\n");

            printf("Rice Total Price: Tk %.2f\n",
                   Rice_Quantity * Rice_price);

            printf("Oil Total Price: Tk %.2f\n",
                   Oil_Quantity * Oil_price);

            printf("--------------------------\n");
            printf("GRAND TOTAL: Tk %.2f\n", Total_Price);
            printf("==========================\n");
        }
    }

    else
    {
        printf("\nInvalid Choice!\n");
    }

    return 0;
}
