#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addContact();
void viewContact();
void Help();
char fname[20];
char lname[20];
char phone_number();

int main(){
    int choice;
    printf("\n\n\t----------------------CONTACT MANAGEMENT SYSTEM------------------------");
    printf("\n\t[1] Add Contact");
    printf("\n\t[2] View Contact");
    printf("\n\t[3] Help");
    printf("\n\t[4] Exit");
    printf("\n\tEnter your choice");
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

void addContact(){
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
    printf("\n\tFirst Name: %s", rfname);
    printf("\n\tLast Name: %s", rlname);
    printf("\n\t Phone Number: %s", rphone_number);
    main();
}

void Help(){
    printf("\n\t This is Contact Management Application");
    main();
}

