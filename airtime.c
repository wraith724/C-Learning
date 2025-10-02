/*
Name   :Peter Ngubiru
Reg. No:CT101/G/26455/25
Description:a program to buy airtime
*/

#include <stdio.h>

//main function
int main() {
    int choice;
    float cost;

   
    printf("Available Data Bundles:\n");
    printf("1. 100 MB  - 50 KES\n");
    printf("2. 500 MB  - 200 KES\n");
    printf("3. 1 GB    - 350 KES\n");
    printf("4. 2 GB    - 600 KES\n");
    
  
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    
    if(choice == 1) {
        cost = 50;
        printf("You selected 100 MB. Total cost: %.2f KES\n", cost);
    }
    else if(choice == 2) {
        cost = 200;
        printf("You selected 500 MB. Total cost: %.2f KES\n", cost);
    }
    else if(choice == 3) {
        cost = 350;
        printf("You selected 1 GB. Total cost: %.2f KES\n", cost);
    }
    else if(choice == 4) {
        cost = 600;
        printf("You selected 2 GB. Total cost: %.2f KES\n", cost);
    }
    else {
        printf("Invalid option. Please select between 1 and 4.\n");
    }

    return 0;
}
