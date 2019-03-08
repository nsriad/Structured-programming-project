#include "edit.h"
#include "struct.h"
#include<stdio.h>
#include<stdlib.h>
void update()
{
    FILE *fo,*fn;
    struct student s ;
    struct student up;
    int ch=1,var;
    while (ch){
        int i,select;
        fo=fopen("student.txt","r");
        fn=fopen("new.txt","w");
        printf("\n\t\tEnter a student's ID/roll whose info you want to change: ");
        scanf("%d",&up.roll);
        while (fscanf(fo,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){

            if (up.roll==s.roll){
                i=0;
                printf("\n\n\t\t______________________________________\n");
                printf("\t\t  ID/Roll    | %d\n",s.roll);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Name       | %s\n",s.name);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Department | %s\n",s.dept);
                printf("\t\t_____________|________________________\n");
                printf("\t\t  Result     | %.2f\n",s.result);
                printf("\t\t_____________|________________________\n\n");
                printf("\n\t\tWhich info do you want to modify?\n\t\t\t1.Name\n\t\t\t2.Department\n\t\t\t3.Result\n");
                printf("\t\t\t4.Name & Department\n\t\t\t5.Name & result\n\t\t\t6.Department & result\n\t\t\t7.All\n\n");
                printf("\t\tEnter your choice: ");
                scanf("%d",&select);
                if (select==1){
                    printf("\t\tEnter new name: ");
                    scanf("%s",up.name);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,up.name,s.dept,s.result);
                    printf("\n\t\t\t   Changed Info\n");
                    printf("\n\t\t______________________________________\n");
                    printf("\t\t  ID/Roll    | %d\n",s.roll);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Name       | %s\n",up.name);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Department | %s\n",s.dept);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Result     | %.2f\n",s.result);
                    printf("\t\t_____________|________________________\n\n");
                    printf("\n\t\tName has changed successfully...!\n\n");

                }
                else if (select==2){
                    printf("\t\tEnter new department: ");
                    scanf("%s",up.dept);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,up.dept,s.result);
                    printf("\n\t\t\t   Changed Info\n");
                    printf("\n\t\t______________________________________\n");
                    printf("\t\t  ID/Roll    | %d\n",s.roll);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Name       | %s\n",s.name);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Department | %s\n",up.dept);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Result     | %.2f\n",s.result);
                    printf("\t\t_____________|________________________\n\n");
                    printf("\n\t\tDepartment name has changed successfully...!\n\n");
                }
                else if (select==3){
                    printf("\t\tEnter new result (cgpa out of 4.00): ");
                    scanf("%f",&up.result);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,s.dept,up.result);
                    printf("\n\t\t\t   Changed Info\n");
                    printf("\n\t\t______________________________________\n");
                    printf("\t\t  ID/Roll    | %d\n",s.roll);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Name       | %s\n",s.name);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Department | %s\n",s.dept);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Result     | %.2f\n",up.result);
                    printf("\t\t_____________|________________________\n\n");
                    printf("\n\t\tResult has changed successfully...!\n\n");
                }
                else if (select==4){
                    printf("\t\tEnter new name: ");
                    scanf("%s",up.name);
                    printf("\t\tEnter new department: ");
                    scanf("%s",up.dept);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,up.name,up.dept,s.result);
                    printf("\n\t\t\t   Changed Info\n");
                    printf("\n\t\t______________________________________\n");
                    printf("\t\t  ID/Roll    | %d\n",s.roll);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Name       | %s\n",up.name);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Department | %s\n",up.dept);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Result     | %.2f\n",s.result);
                    printf("\t\t_____________|________________________\n\n");
                    printf("\n\t\tChanged successfully...!\n\n");
                }
                else if (select==5){
                    printf("\t\tEnter new name: ");
                    scanf("%s",up.name);
                    printf("\t\tEnter new result: ");
                    scanf("%f",&up.result);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,up.name,s.dept,up.result);
                    printf("\n\t\t\t   Changed Info\n");
                    printf("\n\t\t______________________________________\n");
                    printf("\t\t  ID/Roll    | %d\n",s.roll);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Name       | %s\n",up.name);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Department | %s\n",s.dept);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Result     | %.2f\n",up.result);
                    printf("\t\t_____________|________________________\n\n");
                    printf("\n\t\tChanged successfully...!\n\n");
                }
                else if (select==6){
                    printf("\t\tEnter new department: ");
                    scanf("%s",up.dept);
                    printf("\t\tEnter new result: ");
                    scanf("%f",&up.result);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,up.dept,up.result);
                    printf("\n\t\t\t   Changed Info\n");
                    printf("\n\t\t______________________________________\n");
                    printf("\t\t  ID/Roll    | %d\n",s.roll);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Name       | %s\n",s.name);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Department | %s\n",up.dept);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Result     | %.2f\n",up.result);
                    printf("\t\t_____________|________________________\n\n");
                    printf("\n\t\tChanged successfully...!\n\n");
                }
                else if (select==7){
                    printf("\t\tEnter new name: ");
                    scanf("%s",up.name);
                    printf("\t\tEnter new department: ");
                    scanf("%s",up.dept);
                    printf("\t\tEnter new result: ");
                    scanf("%f",&up.result);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,up.name,up.dept,up.result);
                    printf("\n\t\t\t   Changed Info\n");
                    printf("\n\t\t______________________________________\n");
                    printf("\t\t  ID/Roll    | %d\n",s.roll);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Name       | %s\n",up.name);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Department | %s\n",up.dept);
                    printf("\t\t_____________|________________________\n");
                    printf("\t\t  Result     | %.2f\n",up.result);
                    printf("\t\t_____________|________________________\n\n");
                    printf("\n\t\tChanged successfully...!\n\n");
                }

            }
            else {
                fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,s.dept,s.result);
            }
    }

        if (i!=0){
            printf("\n\t\tNot Found...!!!\n");
        }

        fclose(fo);
        fclose(fn);
        remove("student.txt");
        rename("new.txt","student.txt");
        printf("\t\tTo update another enter 1 or for main menu enter 2 : ");
        scanf("%d",&ch);
        system("cls");
        if (ch==2){
            var=2;
            break ;
        }
}

    switch (var)
    {
    case 2:
        system("cls");
        main();
        break ;
    default :
        break ;
    }

}
//=============================================//

void del()
{
    system("cls");
    FILE *fo,*fn,*fr;
    struct student s ;
    struct student up;
    int ch=1,var;
    while (ch){
        int i;
        fo=fopen("student.txt","r");
        fn=fopen("new.txt","w");
        fr=fopen("recycle.txt","a+");
        printf("\n\tEnter a student's ID/roll whose info you want to delete: ");
        scanf("%d",&up.roll);

        while (fscanf(fo,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){
            if (up.roll==s.roll){
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
        fclose(fo);
        fo=fopen("student.txt","r");

        printf("\n\tAre you sure you want to delete roll: %d's information??\n",up.roll);
        printf("\n\n\t\t1.Yes\n");
        printf("\t\t2.No\n");
        int p;
        printf("\n\tEnter your choice: ");
        scanf("%d",&p);
        if (p==1){
            while (fscanf(fo,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){
                if (up.roll==s.roll){
                    fprintf(fr,"\n%d %s %s %.2f\n",s.roll,s.name,s.dept,s.result);
                    i=0;

                }
                else {
                    i++;
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,s.dept,s.result);
                }
            }
            if (i!=0)
                printf("\n\tDidn't match with any record...!!!\n\n");
            else if (i==0)
                printf("\tDelete successful..!!!\n");
            fclose(fo);
            fclose(fn);
            fclose(fr);
            remove("student.txt");
            rename("new.txt","student.txt");
        }
        else
            printf("\n\tDelete Unseccessfull..!!!\n");

        printf("\tTo delete again enter 1 or for main menu enter 2 : ");
        scanf("%d",&ch);
        system("cls");
        if (ch==2){
            var=2;
            break ;
        }
}

    switch (var)
    {
    case 2:
        system("cls");
        main();
        break ;
    default :
        break ;
    }

}

