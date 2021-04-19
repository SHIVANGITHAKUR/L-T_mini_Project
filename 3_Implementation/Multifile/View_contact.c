#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fun.h"

void viewContact(){
    system("cls");
    char rfname[20];
    char rlname[20];
    char rphone_number[20];
    FILE *fp;
    fp = fopen("Contact.txt", "r");
    fgets(rfname, 9, fp);
    fgets(rlname, 5, fp);
    fgets(rphone_number, 11, fp);
    printf("\n\t-----------------------List Contact-----------------------");
    printf("\n\tFirst Name: %s ", rfname);
    printf("\n\tLast Name: %s ", rlname);
    printf("\n\t Phone Number: %s ", rphone_number);
    main();
}