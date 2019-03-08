#include "mainheader.h"

int main()
{
    int i;
    system("COLOR 2F");
    printf("\n\t  \b>>WELCOME TO STUDENT'S DATABASE MANAGEMENT SYSTEM<<\n");
    printf("\t\t       ***Main Menu***\n");
    printf("\t\t ____________________________\n");
    printf("\t\t|1.| Add student's info      |\n");
    printf("\t\t|__|_________________________|\n");
    printf("\t\t|2.| View all student's info |\n");
    printf("\t\t|__|_________________________|\n");
    printf("\t\t|3.| Search student's info   |\n");
    printf("\t\t|__|_________________________|\n");
    printf("\t\t|4.| Edit info               |\n");
    printf("\t\t|__|_________________________|\n");
    printf("\t\t|5.| Recycle Bin             |\n");
    printf("\t\t|__|_________________________|\n");
    printf("\t\t|6.| Exit                    |\n");
    printf("\t\t|__|_________________________|\n");
    printf("\n\t\tSelect an option: ");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
        system("cls");
        system("COLOR 1E");
        add();
        break ;
    case 2:
        system("cls");
        system("COLOR 3E");
        view();
        break ;
    case 3:
        system("cls");
        system("COLOR 30");
        printf("\n\n\t\t       ***Search Option***\n");
        printf("\t\t _______________________________\n");
        printf("\t\t|1.| Search by name             |\n");
        printf("\t\t|__|____________________________|\n");
        printf("\t\t|2.| Search by roll             |\n");
        printf("\t\t|__|____________________________|\n");
        printf("\t\t|3.| Search by department       |\n");
        printf("\t\t|__|____________________________|\n");
        int c;
        printf("\n\t\tSelect any option : ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            system("COLOR 5A");
            byname();
            break ;
        case 2:
            system("COLOR 1A");
            byroll();
            break ;
        case 3:
            system("COLOR E0");
            bydept();
            break;
        default :
            break ;
        }
        break;
    case 4:
        system("cls");
        system("COLOR D1");
        printf("\n\n\t\t  ***Edit Option***\n");
        printf("\t\t ________________________\n");
        printf("\t\t|1.|Update info          |\n");
        printf("\t\t|__|_____________________|\n");
        printf("\t\t|2.|Delete info          |\n");
        printf("\t\t|__|_____________________|\n");
        int d;
        printf("\t\tSelect any option : ");
        scanf("%d",&d);
        switch (d)
        {
        case 1:
            system("COLOR C0");
            update();
            break ;
        case 2:
            system("COLOR F0");
            del();
            break ;
        default :
            break ;
        }
        break;
    case 5:
        system("COLOR 80");
        system("cls");
        recycle();
        break;
    case 6:
        break;
    default :
        break ;
    }
    return 0;
}
