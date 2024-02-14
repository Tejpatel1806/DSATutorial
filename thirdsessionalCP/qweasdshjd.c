#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
struct Name
{
    char firstName[31];
    char middleInitial[6];
    char lastName[36];
};
struct Address
{
    int streetNumber;
    char street[41];
    int apartmentNumber;
    char postalCode[8];
    char city[41];
};
struct Numbers
{
    char cell[11];
    char home[11];
    char business[11];
};
struct Contact
{
    struct Name name;
    struct Address address;
    struct Numbers numbers;
};
void getName(struct Name *);
void getAddress(struct Address *);
void getNumbers(struct Numbers *);

void getName(struct Name *name)
{

    char yesNo;

    printf("Please enter the contact's first name: ");
    scanf("%30[^\n]%*c", name->firstName);

    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf("%s%*c", &yesNo);

    if (yesNo == 'y' || yesNo == 'Y')
    {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%5[^\n]%*c", name->middleInitial);
    }
    printf("Please enter the contact's last name: ");
    scanf("%35[^\n]%*c", name->lastName);
}

void getAddress(struct Address *address)
{
    char yesNo;

    do
    {
        printf("Please enter the contact's street number: ");
        scanf("%d%*c", &address->streetNumber);
    } while (address->streetNumber < 1);

    printf("Please enter the contact's street name: ");
    scanf("%40[^\n]%*c", address->street);

    printf("Do you want to enter an apartment number? (y or n): ");
    scanf("%c%*c", &yesNo);

    if (yesNo == 'y' || yesNo == 'Y')
    {
        do
        {
            printf("Please enter the contact's apartment number: ");
            scanf("%d%*c", &address->apartmentNumber);
        } while (address->apartmentNumber < 1);
    }

    printf("Please enter the contact's postal code: ");
    scanf("%7[^\n]%*c", address->postalCode);

    printf("Please enter the contact's city: ");
    scanf("%40[^\n]%*c", address->city);
}

void getNumbers(struct Numbers *numbers)
{
    char yesNo;

    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf("%c%*c", &yesNo);

    if (yesNo == 'y' || yesNo == 'Y')
    {
        printf("Please enter the contact's cell phone number: ");
        scanf("%10[^\n]%*c", numbers->cell);
    }

    printf("Do you want to enter a home phone number? (y or n): ");
    scanf("%c%*c", &yesNo);

    if (yesNo == 'y' || yesNo == 'Y')
    {
        printf("Please enter the contact's home phone number: ");
        scanf("%10[^\n]%*c", numbers->home);
    }

    printf("Do you want to enter a business phone number? (y or n): ");
    scanf("%c%*c", &yesNo);

    if (yesNo == 'y' || yesNo == 'Y')
    {
        printf("Please enter the contact's business phone number: ");
        scanf("%10[^\n]%*c", numbers->business);
    }
}

int main(void)
{
    struct Contact contact = {{{0}}};
    //printf("Contact Management System\n");
    //printf("=========================\n");
    getName(&contact.name);
    getAddress(&contact.address);
    getNumbers(&contact.numbers);

    printf("\n");
    printf("Contact Details\n");
    printf("===============\n");
    printf("Name Details\n");
    printf("------------\n");
    printf("First name: %s\n", contact.name.firstName);
    printf("Middle initial(s): %s\n", contact.name.middleInitial);
    printf("Last name: %s\n\n", contact.name.lastName);

    printf("Address Details\n");
    printf("---------------\n");
    printf("Street number: %d\n", contact.address.streetNumber);
    printf("Street name: %s\n", contact.address.street);
    printf("Apartment: %d\n", contact.address.apartmentNumber);
    printf("Postal code: %s\n", contact.address.postalCode);
    printf("City: %s\n\n", contact.address.city);

    printf("Phone Numbers\n");
    printf("-------------\n");
    printf("Cell phone number: %s\n", contact.numbers.cell);
    printf("Home phone number: %s\n", contact.numbers.home);
    printf("Business phone number: %s\n\n", contact.numbers.business);

    printf("Structure test for Contact using functions done!\n");

    return 0;
}