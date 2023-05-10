#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
}*head=NULL;
void display(void);
void create_node(void);
void reverse(void);

int main()
{
	char ch;
	while(1)
	{
		printf("create a node : i\n");
		printf("Display data  : p\n");

		printf("\nEnter a choice : \n");
		scanf("%c",&ch);

		switch(ch)
		{
			case 'i' : create_node();
				   break;
			case 'p' : display();
				   break;
			case 'r' : reverse();
				   break;
			case 'q' : return 0;
		}
	}
}

void create_node(void)
{
	struct node *newnode=NULL,*temp=NULL;
	int data,i,n;
	
	printf("Enter a no. of nodes\n");
	scanf("%d",&n);

	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));

		printf("Enter a Data : ");
		scanf("%d",&data);
		
		head->data=data;
		head->link=NULL;

		temp=head;
	}

	for(i=2;i<=n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));

		printf("Enter a Data : ");
		scanf("%d",&data);

		newnode->data=data;
		newnode->link=NULL;

		temp->link=newnode;
		temp=temp->link;
	}
}

void display(void)
{
	struct node *temp;
	temp=head;

	if(head==NULL)
	{
		printf("No data available\n");
		return;
	}
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
}


		
		

void reverse(void)
{
	struct node *prev=NULL,*current=NULL,*Next=NULL;
	current=head;

	while(current)
	{
		Next=current->link;
		current->link=prev;
		prev=current;
		current=Next;
	}
	head=prev;
}
