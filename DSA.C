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

void harsh_insertatend()
{ new1=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter data : ");
  scanf("%d",&new1->info);
  if(last==NULL)
  {  new1->next=new1;
     last=new1;
  }
  else
  {  new1->next=last->next;
     last->next=new1;
     last=new1;
  }
}

void harsh_disp()
{ new1=last->next;
  while(new1!=last)
  { printf("%d \t",new1->info);
    new1=new1->next;
  }
  printf("%d",last->info);
}

void main()
{ int x;
clrscr();
  do{
  printf("\n1.Insert At End");
  printf("\n2.Display");
  printf("\n3.Exit");
  printf("\n Enter your choice : ");
  scanf("%d",&x);

  switch(x)
  { case 1:
    harsh_insertatend();
    break;
    case 2:
    harsh_disp();
    break;
    case 3:
    exit(0);
  }
  getch();
  }while(1);
}