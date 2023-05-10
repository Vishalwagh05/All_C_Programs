#include<stdio.h>
#include<stdio_ext.h>

struct student {
        char name[20];
        char branch[20];
        float cgpa;
};

const int MAX=10;
int cnt=0;

void printMenu(void)
{
        printf("\nMENU\n");
        printf("--------\n");
        printf("i:input\np:print\nq:quit\n");
        printf("ENter your choice:");
}
void input(struct student *db)
{
        if(cnt == MAX)
        {
                printf("not enough memory\n");
                return;
        }
        printf("\nEnter name :");
        __fpurge(stdin);
        gets(db[cnt].name);
        printf("Enter branch name :");
        gets(db[cnt].branch);
        printf("Enter cgpa :");
        scanf("%f",&db[cnt].cgpa);
        cnt++;
}
void print(struct student *db)
{
        int i;
        for(i=0;i<cnt;i++)
                printf("record %d: %s\t %s\t %.2f\n",i,db[i].name,db[i].branch,db[i].cgpa);
                printf("\nTotal no of students is : %d\n",cnt);
}

int main()
{
        char choice;
        struct student db[10];
        while(1)
        {
                printMenu();
                __fpurge(stdin);
                scanf("%c",&choice);
                switch(choice)
                {
                        case 'i':input(db);
                                 break;
                        case 'q':return 0;
                        case 'p':print(db);
                                 break;
                        default: printf("Error:invalid entry\n");
                }
        }
}
