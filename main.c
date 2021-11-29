#include <stdio.h>
#include <stdlib.h>
/*
Project Name: Library project
Author: Simon Ndungu
Date: 10/22/21
*/

int main()
{
    showInitialOptions();
    execute_action();
    return 0;

}
void showInitialOptions() {
    printf("1.View users\n");
    printf("2.Add new user\n");
    printf("3.Edit user\n");
    printf("4.Delete user\n");
    printf("5.Change password\n");
    printf("6.Log out\n");
    printf("7.Exit system\n");

}

void execute_action(){
    printf("What do you want to do: ");
    int execution;
    scanf("%d", &execution);
     switch (execution)
    {case 1:
        printf("Here is a list of all users:\n\n");
        showInitialOptions();
        execute_action();
        break;


     case 2:
        printf("Enter new user's name:\n");
        char username[30];
        scanf("%s", &username);
        printf("Name: %s", username);
        printf("\nEnter new user's ID:\n");
        int userID;
        scanf("%d", &userID);

        printf("\nNew user added: Name: %s ID: %d\n", username, userID);
        showInitialOptions();
        execute_action();
        break;

    case 3:
        printf("Enter previous user's name:\n");
        char prev_username[30];
        scanf("%s", &prev_username);
        printf("Enter new user's name:\n");
        char new_username[30];
        scanf("%s", &new_username);

        printf("\nUser updated from: Prev_Name: %s to New_Name: %s\n", prev_username, new_username);
        showInitialOptions();
        execute_action();
        break;

    case 4:
        printf("Enter user's name that you want to delete:\n");
        char del_username[30];
        scanf("%s", &del_username);
        printf("Are you sure you want to delete %s from the users list? This action can not be undone! [y/n]:\n", del_username);
        char choice[10];
        scanf("%s", &choice);
        if(choice == "y" || choice == "Y")
        {
        printf("\n%s has been deleted from the user's list!", del_username);
        }
        else(choice == "n" || choice == "N");
        {
        printf("Operation cancelled!\n");
        }
        showInitialOptions();
        execute_action();
        break;

    case 5:
        printf("Enter current password:\n");
        char current_pass[30];
        scanf("%s", &current_pass);
        printf("Enter new password:\n");
        char new_pass[30];
        scanf("%s", &new_pass);

        printf("\nPassword updated from: Current_password: %s to New_password: %s\n", current_pass, new_pass);
        showInitialOptions();
        execute_action();
        break;

    case 6:
        printf("Are you sure you want to log out? [y/n]:\n");
        char choice2[10];
        scanf("%s", &choice2);
        if(choice == "y" || choice == "Y")
        {
        printf("\nLogged out!");
        }
        else(choice == "n" || choice == "N");
        {
        printf("Operation cancelled!\n");
        }
        showInitialOptions();
        execute_action();
        break;

    case 7:
        printf("Are you sure you want to exit the system? [y/n]:\n");
        char choice3[10];
        scanf("%s", &choice3);
        if(choice == "y" || choice == "Y")
        {
        printf("\nBye!!");
        break;
        }
        else(choice == "n" || choice == "N");
        {
        printf("Operation cancelled!\n");
        }
        showInitialOptions();
        execute_action();
        break;



    }
}
