#include <stdio.h>
#include <string.h>

#include "fun.h"

void addContact(){
    char fname[20];
    char lname[20];
    char phone_number[20];
    system("cls");
    printf("\t Enter First Name: ");
    scanf("%s", &fname);
    printf("\t Enter Last Name: ");
    scanf("%s", &lname);
    printf("\t Enter Phone Number: ");
    scanf("%s", &phone_number);
    if(strlen(phone_number)==10){
        FILE *fp;
        fp = fopen("contact.txt","w");
        fputs(fname, fp);
        fputs(lname, fp);
        fputs(phone_number, fp);
        printf("\n\t Contact Added Successfully! ");
        fclose(fp);
    }
    else{
        printf("\t Enter 10 Digit Phone Number Only!");
    }
    main();
}