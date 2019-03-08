#include "search.h"
#include "struct.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void byroll()
{
    FILE *fp ;
    struct student s,*ptr;
    ptr=&s;
    int ch=1,pres,roll;
    while (ch){
        int i;
        fp=fopen("student.txt","r");
        printf("\n\t\tEnter ID/roll: ");
        scanf("%d",&roll);
        while (!feof(fp)){
            i=0;
            fscanf(fp,"%d %s %s %f",&ptr->roll,ptr->name,ptr->dept,&ptr->result);

            if (roll==ptr->roll){
                printf("\n\n\t\t______________________________________\n");
                printf("\t\t  ID/Roll    | %d\n",ptr->roll);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Name       | %s\n",ptr->name);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Department | %s\n",ptr->dept);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Result     | %.2f\n",ptr->result);
                printf("\t\t_____________|________________________\n\n");
                break ;
            }
            else
                i++ ;
        }
            if (i!=0)
                printf("\t\tDidn't match with any record...!!!\n\n");
            printf("\t\tTo search again enter 1 or for main menu enter 2 : ");
            scanf("%d",&ch);
            system("cls");
            if (ch==2){
                pres=2;
                break ;
            }
    }
    fclose(fp);

    switch (pres)
    {
    case 2:
        system("cls");
        main();
        break;
    default :
        break ;
    }
}
//=====================================================//
void byname()
{
    FILE *fp ;
    struct student s ;
    int ch=1,press;
    char name[50];
    while (ch){
        int i;
        fp=fopen("student.txt","r");
        printf("\n\t\tEnter name: ");
        scanf("%s",name);
        while (!feof(fp)){
            i=0;
            fscanf(fp,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result);

            if (strcmp(s.name,name)==0){
                printf("\n\n\t\t______________________________________\n");
                printf("\t\t  ID/Roll    | %d\n",s.roll);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Name       | %s\n",s.name);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Department | %s\n",s.dept);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Result     | %.2f\n",s.result);
                printf("\t\t_____________|________________________\n\n");
                break ;
            }
            else{
                i++ ;
            }
        }

            if (i!=0)
                printf("\t\tDidn't match with any record...!!!\n\n");
            printf("\t\tTo search again enter 1 or for main menu enter 2 : ");
            scanf("%d",&ch);
            system("cls");
            if (ch==2){
                press=2;
                break ;
            }
    }
    fclose(fp);

    switch (press)
    {
    case 2:
        system("cls");
        main();
        break;
    default :
        break ;
    }
}
//=============================================//

void bydept()
{
    FILE *fp ;
    struct student s ;
    int ch=1,press;
    char dept[50];
    while (ch){
        int i=0;
        fp=fopen("student.txt","r");
        printf("\n\t\tEnter a department name which you want to search : ");
        scanf("%s",dept);
        system("cls");
        while (fscanf(fp,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){
                if (strcmp(s.dept,dept)==0){
                    i=i+1;
                    printf("\n\n\t\t______________________________________\n");
                printf("\t\t  ID/Roll    | %d\n",s.roll);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Name       | %s\n",s.name);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Department | %s\n",s.dept);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Result     | %.2f\n",s.result);
                printf("\t\t_____________|________________________\n\n");
                }
        }
        if (i==0)
            printf("\n\t\tSorry!Didn't match with any record...!!!\n\n");
            printf("\t\tTo search again enter 1 or for main menu enter 2 : ");
            scanf("%d",&ch);
            system("cls");
            if (ch==2){
                press=2;
                break ;
            }
    }
    fclose(fp);

    switch (press)
    {
    case 2:
        system("cls");
        main();
        break;
    default :
        break ;
    }
}


