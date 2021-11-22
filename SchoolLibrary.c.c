/*Project: Library system_error
Author: Caroline Mutugi
Language: GCC
License: MIT
*/

/*
Users
Catalogue
Insurance
Serial
Acquisition


Navigation Menu
*/
#include <stdio.h>
#include <stdlib.h>

int menu();//Prototype
int main()
{
    int action;

    return 0;
}


int menu()//header
{
    //body
    int action;
    action=menu();
 do
    {
    printf("\tSCHOOL LIBRARY\n");
    printf("Welcome to the Library\n");
    printf("What would you like to do in the Library?\n");
    printf("1.  Add user\n");
    printf("2.  New user? Enter your details to sign up.\n");
    printf("3.  Search for a book.\n");
    printf("4.  Explore the Library.\n");
    printf("5.  Borrow a book\n");
    printf("6.  Read a book in the Library without borrowing\n");
    printf("7.  Use research database\n");
    printf("8.  Attend or bring younger person to class\n");
    printf("9.  Borrow a DVD or a video tape of a movie\n");
    printf("10. Get help from the Librarian\n");
    printf("11. Change Password\n");
    printf("12. Log out\n");
    printf("Please select action(1-12):\n");
    printf("Press any key to exit\n");
    scanf("%d",&action);
    if(action<1||action>12)
    {
        printf("Invalid Input. Try again\n");
    }
    }
    while(action<1||action>12);
    return action;
}
