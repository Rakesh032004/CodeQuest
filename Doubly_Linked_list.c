#include<stdio.h>
#include<stdlib.h>
struct node
{
	char SSN[20],Name[20],Department[20],Designation[20];
	unsigned long long int ph;
	float salary;
	struct node *prev;
	struct node *next;
};
typedef struct node*Node;
Node temp,First=NULL,End=NULL;
void create_DLL();
Node getnode();
void read();
void display_DLL();
void insert_front();
void dlt_front();
void insert_end();
void dlt_end();
void main()
{
	int choice;
	while(1)
	{
		printf("1.Create SLL\n2.Display SLL\n3.Insert front\n4.Delete front\n5.Insert end\n6.Delete end\n7.Exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create_DLL();
				break;
			case 2:display_DLL();
				break;
			case 3:insert_front();
				break;
			case 4:dlt_front();
				break;
			case 5:insert_end();
				break;
			case 6:dlt_end();
				break;
			case 7:exit(0);
				break;
		}
	}
}
void create_DLL()
{
	int n,i;
	printf("Enter the Number of Employees\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter details of Employee %d\n",i);
		read();
		if(First==NULL)
		{
			First=temp;
			End=temp;
		}
		else
		{
			End->next=temp;
			temp->prev=End;
			End=temp;
		}
	}
}
Node getnode()
{
	Node X;
	X=(Node)malloc(sizeof(struct node));
	X->prev=NULL;
	X->next=NULL;
	return X;
}
void read()
{
	temp=getnode();
	printf("Enter the SSN\n");
	scanf("%s",temp->SSN);
	printf("Enter the Name\n");
	scanf("%s",temp->Name);
	printf("Enter the Department\n");
	scanf("%s",temp->Department);
	printf("Enter the Designation\n");
	scanf("%s",temp->Designation);
	printf("Enter the Phone Number\n");
	scanf("%llu",&temp->ph);
	printf("Enter the Salary\n");
	scanf("%f",&temp->salary);
}
void display_DLL()
{
	int count=0;
	printf("Employee details\n");
	if(First==NULL)
	{
		printf(" List is empty\n");
	}
	else 
	{
		temp=First;
		printf("SSN\t\tNAME\t\tDEPARTMENT\tDESIGNATION\tPH\t\tSALARY\n");
		temp=First;
		while(temp!=NULL)
		{
			count++;
			printf("%s\t\t%s\t%s\t%s\t\t%llu\t%f\n",temp->SSN, temp->Name, temp->Department, temp->Designation, temp->ph, temp->salary);
			temp=temp->next;
		}
		printf("Number of Employes=%d\n",count);
	}
}
void insert_front()
{	printf("Enter the Employ details\n");
	read();
	if(First==NULL)
		First=End=temp;
	else
	{
		temp->next=First;
		First->prev=temp;
		First=temp;
	}
}
void dlt_front()
{
	if(First==NULL)
	{
		printf("List is Empty\n");
	}
	else if(First==End)
	{
		printf("SSN of deleted node is %s\n",First->SSN);
		free(First);
		First=NULL;
	}
	else
	{
		temp=First;
		First=First->next;
		printf("SSN of deleted node is %s\n",temp->SSN);
		First->prev=NULL;
		free(temp);
	}
		
}
void insert_end()
{
	printf("Enter Employee details\n");
	read();
	if(First==NULL)
	{
		First=End=temp;
	}
	else
	{
		End->next=temp;
		temp->prev=End;
		End=temp;
	}
}
void dlt_end()
{
	if(First==NULL)
	{
		printf("List is Empty\n");
	}
	else if(First==End)
	{
		printf("SSN of deleted node is %s\n",First->SSN);
		free(First);
		First=NULL;
	}
	else
	{
		temp=End;
		End=End->prev;
		printf("SSN of the deleted node is %s\n",temp->SSN);
		End->next=NULL;
		free(temp);
	}
}		
		

