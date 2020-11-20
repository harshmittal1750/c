#include<stdio.h>
#include<conio.h>
#include<process.h>

struct node
{ int info;
  struct node *next;
};
struct node *start;
struct node *last;
struct node *new1;

void sanchit_insert()
{ new1=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter data : ");
  scanf("%d",&new1->info);
  if(start==NULL)
  { last=new1;
    start=new1;
  }
  else
  { last->next=new1;
    last=new1;
  }
  last->next=NULL;
}

void sanchit_disp()
{ int sum=0;
  new1=start;
  while(new1!=NULL)
  { printf("%d \t",new1->info);
    sum=sum+new1->info;
    new1=new1->next;
  }
  printf("\n Sum: %d",sum);
}

void main()
{ int x;

do{    clrscr();
printf("\n Main Menu");
printf("\n 1.Insertion");
printf("\n 2.Traversing");
printf("\n 3.Exit");
printf("\n Enter your choice : ");
scanf("%d",&x);

 switch(x)
 { case 1:
    sanchit_insert();
    break;
   case 2:
    sanchit_disp();
    break;
   case 3:
    exit(0);
 }
 getch();
 }while(1);
}