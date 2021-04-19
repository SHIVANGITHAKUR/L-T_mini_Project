#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"

void Help();
char fname[20];
char lname[20];
char phone_number[20];

int main(){
    int choice;
    printf("\n\n\t----------------------CONTACT MANAGEMENT SYSTEM------------------------");
    printf("\n\t[1] Add Contact ");
    printf("\n\t[1] Add Contact ");
    printf("\n\t[2] View Contact ");
    printf("\n\t[3] Help");
    printf("\n\t[4] Exit");
    printf("\n\tEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        addContact();
        break;
    case 2:
        viewContact();
        break;
    case 3:
        Help();
        break;
    case 4:
        exit(1);
        break;
    default:
        printf("Enter the Correct Choice !");
        main();
    }
}

void Help(){
    printf("\n\t This is Contact Management Application");
    main();
}

