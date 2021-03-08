#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int book_size=0;
int student_size=0;


void menu()
{
    printf("\n\t******************** WWLCOME TO LIBRARY MANEGEMENT SYSTEM*****************\n");
    printf("\n\n\t1.Admin Login\n");
    printf("\t2.Quit\n");

}

int admin_login()
{
    char *pass={"password"};
    char check[20];

    printf("\n\tEnter your password : ");
    scanf("%s",check);

    if(strcmp(pass,check)==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void admin_menu()
{
    printf("\t1.Add Member ");
    printf("\t2.Vew Member\n");
    printf("\t3.Search Member");
    printf("\t4.delete Member\n");
    printf("\t5.Add Book");
    printf("\t6.Vew Book\n");
    printf("\t7.Search Book");
    printf("\t8.Delete Book");
    printf("\n\t9.Quit\n");

}


struct book
{
    char book_name[25];
    char author_name[25];
    int book_code;
    char book_catagory[25];
}bk[10];

struct student
{
    char student_name[50];
    char student_id[25];
    char student_dept[25];
}st[10];


int main()
{
    while(1)
    {
        int s;  //for using student login
        char student_log[50]; //student login name input
        int b;
        int n;
        int k;
        menu();

        printf("\n\tEnter your choice : ");
        scanf("%d",&n);

        if(n==1)//Admin Login
        {
            if(admin_login()==0)
            {
                while(1)
                {
                    printf("\n\n");
                  admin_menu();
                  int m;
                  printf("\n\tEnter your choice : ");
                  scanf("%d",&m);

                    if(m==1)//Add member
                    {
                        int i;
                        int c;

                        for(i=0;i<10;i++)
                        {
                            printf("\tEnter the Student's Name      : ");
                            scanf("%s",&st[i].student_name);
                            printf("\tEnter the Student's ID        : ");
                            scanf("%s",&st[i].student_id);
                            printf("\tEnter the Student's Department: ");
                            scanf("%s",&st[i].student_dept);

                            printf("\t1.Add more\t2.Menu\n\n");
                            printf("\n\tEnter your choice: ");
                            k++;

                            scanf("%d",&c);

                            if(c==1)
                            {
                                continue;
                            }
                            else if(c==2)
                            {
                                break;
                            }
                        }
                        continue;
                    }
                    else if(m==2)//Vew Member
                    {
                        int i;
                        for(i=0;i<10;i++)
                        {

                            printf("\n\tStudent Name      : %s\n",st[i].student_name);
                            printf("\tStudent I.D       : %s\n",st[i].student_id);
                            printf("\tStudent Department:%s\n",st[i].student_dept);

                            /*if(strcmp(st[i].student_name,'\0')==0)
                            {
                                break;
                            }*/

                        }
                        continue;

                    }
                    else if(m==3)//Search Member
                    {
                        int i;
                        char s[50];
                        printf("Enter the student's id: ");
                        scanf("%s",s);
                        for(i=0;i<10;i++)
                        {
                            if(strcmp(s,st[i].student_id)==0)
                            {
                                printf("\n\tStudent Name      : %s\n",st[i].student_name);
                                printf("\tStudent I.D       : %s\n",st[i].student_id);
                                printf("\tStudent Department:%s\n",st[i].student_dept);
                            }
                        }
                        continue;

                    }
                    else if(m==4)//delete Member
                    {
                        int i;
                        char s[50];
                        printf("Enter the student's id: ");
                        scanf("%s",s);
                        for(i=0;i<10;i++)
                        {
                            if(strcmp(s,st[i].student_id)==0)
                            {
                                strcpy(st[i].student_name,st[i+1].student_name);
                                strcpy(st[i].student_id,st[i+1].student_id);
                                strcpy(st[i].student_dept,st[i+1].student_dept);
                            }
                            printf("\n\tDesired Member is deleted!\n");
                        }
                        continue;


                    }
                    else if(m==5)//Add Book
                    {
                        int i;
                        for(i=0;i<10;i++)
                        {
                            printf("\tEnter the Book Name      : ");
                            scanf("%s",bk[i].book_name);
                            printf("\tEnter the Book Code      : ");
                            scanf("%s",bk[i].book_code);
                            printf("\tEnter the Author Name    : ");
                            scanf("%s",bk[i].author_name);
                            printf("\tEnter the Book Category  : ");
                            scanf("%s",bk[i].book_catagory);
                        }

                    }
                    else if(m==6)//Vew Book
                    {
                        int i;

                        for(i=0;i<10;i++)
                        {
                            printf("\n\tBook Name     : %s\n",bk[i].book_name);
                            printf("\tBook Code     : %s\n",bk[i].book_code);
                            printf("\tBook Author   : %s\n",bk[i].author_name);
                            printf("\tBook Category : %s\n",bk[i].book_catagory);
                        }
                        continue;

                    }
                    else if(m==7)//search book
                    {
                        int i;
                        char s[50];
                        printf("Enter the Book's Name: ");
                        scanf("%s",s);
                        for(i=0;i<10;i++)
                        {
                            if(strcmp(s,bk[i].book_name)==0)
                            {
                                printf("\tBook Name     : %s",bk[i].book_name);
                                printf("\tBook Code     : %s",bk[i].book_code);
                                printf("\tBook Author   : %s",bk[i].author_name);
                                printf("\tBook Category : %s",bk[i].book_catagory);
                            }
                            else
                            {
                                printf("\tBook is not found.\n");
                            }
                        }
                        continue;


                    }
                    else if(m==8)//delete book
                    {
                        int i;
                        char s[50];

                        printf("\tEnter the Book's Name     : ");
                        scanf("%s",s);

                        for(i=0;i<10;i++)
                        {
                            if(strcmp(s,bk[i].book_name)==0)
                            {
                                strcpy(bk[i].book_name,bk[i+1].book_name);
                                strcpy(bk[i].book_code,bk[i+1].book_code);
                                strcpy(bk[i].author_name,bk[i+1].author_name);
                                strcpy(bk[i].book_catagory,bk[i+1].book_catagory);
                            }
                            printf("\n\tDesired Book is deleted!\n");
                        }
                        continue;

                    }
                    else if(m==9)//quit
                    {
                        return 0;
                    }
                    else
                    {
                        printf("\tInvalide choice\n");
                    }
                }

            }
            else
            {
                printf("\tWrong password...\n");
                continue;
            }

        }
        /*else if(n==2)//Student sign up
        {
                    printf("\tEnter the Student's Name      : ");
                    scanf("%s",&st[k].student_name);
                    printf("\tEnter the Student's ID        : ");
                    scanf("%s",&st[k].student_id);
                    printf("\tEnter the Student's Department: ");
                    scanf("%s",&st[k].student_dept);
        }

       else if(n==3) //Student login
       {

            printf("\nEnter your id : ");
            scanf("%s",student_log);

               for(s=0;s<10;s++)
               {
                   if((st[s].student_id,student_log)==0)
                   {
                       printf("\n\t1.Search Book \t 2.Vew Book\n");
                       printf("\n\tEnter your Choice : ");
                       scanf("%d",b);

                       if(b==1)//search book
                       {
                        int i;
                        char s[50];
                        printf("Enter the Book's Name: ");
                        scanf("%s",s);
                        for(i=0;i<10;i++)
                        {
                            if(strcmp(s,bk[i].book_name)==0)
                            {
                                printf("\tBook Name     : %s",bk[i].book_name);
                                printf("\tBook Code     : %s",bk[i].book_code);
                                printf("\tBook Author   : %s",bk[i].author_name);
                                printf("\tBook Category : %s",bk[i].book_catagory);
                            }
                            else
                            {
                                printf("\tBook is not found.\n");
                            }
                        }
                        continue;
                       }
                       else if(b==2)//vew book
                       {
                            int i;

                            for(i=0;i<10;i++)
                            {
                                printf("\n\tBook Name     : %s\n",bk[i].book_name);
                                printf("\tBook Code     : %s\n",bk[i].book_code);
                                printf("\tBook Author   : %s\n",bk[i].author_name);
                                printf("\tBook Category : %s\n",bk[i].book_catagory);
                            }
                            continue;

                       }
                       else
                       {
                           printf("\n\tInvalid book\n");
                           continue;
                       }



                   }
               }

       }*/
       else if(n==2)
       {
           return 0;
       }
       else
       {
            printf("\tInvalilde choice\n");
            continue;
       }


    }



    return 0;
}
