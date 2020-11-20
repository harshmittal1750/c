#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[30];
    int age;
};
struct employee e[3];
FILE *f1, *f2;
int i;

void add()
{
    f2 = fopen("emp.txt", "w");
    for (i = 0; i < 3; i++)
    {
        printf("\n Enter ID : ");
        scanf("%d", &e[i].id);
        printf("\n Enter Name : ");
        scanf("%s", &e[i].name);
        printf("\n Enter Age : ");
        scanf("%d", &e[i].age);
        fprintf(f2, "\n ID = %d, Name = %s, Age = %d", e[i].id, e[i].name, e[i].age);
    }
    fclose(f2);
}
void disp()
{
    f2 = fopen("emp.txt", "r");
    for (i = 0; i < 3; i++)
    {
        fscanf(f2, "%d %s %d", e[i].id, e[i].name, e[i].age);
        printf("\n ID = %d", e[i].id);
        printf("\n Name = %s", e[i].name);
        printf("\n Age = %d", e[i].age);
    }
    fclose(f2);
}
void search()
{
    int e_id, count = 0;
    f2 = fopen("emp.txt", "r");

    printf("\n Enter the Employee ID to search record : ");
    scanf("%d", &e_id);
    for (i = 0; i < 3; i++)
    {
        fscanf(f2, "%d %s %d", e[i].id, e[i].name, e[i].age);
        if (e_id == e[i].id)
        {
            printf("\n Employee ID : %d", e[i].id);
            printf("\n Employee Name : %s", e[i].name);
            printf("\n Employee Age : %d", e[i].age);
            count = 1;
        }
    }
    if (count == 1)
    {
        printf("\n Record found");
    }
    else
    {
        printf("\n Record not found");
    }
    fclose(f2);
}
void del()
{
    int e_id, temp;
    char ch;
    f2 = fopen("emp.txt", "r");
    f1 = fopen("emp2.txt", "w");
    printf("\n Enter the ID to delete account : ");
    scanf("%d", &e_id);

    for (i = 0; i < 3; i++)
    {
        while (fscanf(f2, "%d %s %d", e[i].id, e[i].name, e[i].age))
        {
            temp = e[i].id;
            if (e_id != temp)
            {
                fprintf(f1, "\n ID = %d, Name = %s, Age = %d", e[i].id, e[i].name,
                        e[i].age);
            }
        }
    }
    fclose(f1);
    fclose(f2);
    remove("emp.txt");
    rename("emp2.txt", "emp.txt");
    printf("\nRECORD DELETED\n");
}
int main()
{
    int x;
    do
    {
        printf("\n Main Menu");
        printf("\n 1.Add Record");
        printf("\n 2.Display Record");
        printf("\n 3.Modify Record");
        printf("\n 4.Search Record");
        printf("\n 5.Delete Record");
        printf("\n 6.Exit");
        printf("\n Enter your choice : ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            add();
            break;
        case 2:
            disp();
            break;
        case 4:
            search();
            break;
        case 5:
            del();
            break;
        case 6:
            exit(1);
            break;
        }
    } while (1);
    return 0;
}