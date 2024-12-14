#include<stdio.h>
#include<stdlib.h>
struct node
{
	char USN[20],Name[20],Branch[20];
	int Sem;
	unsigned long long int ph;
	struct node *link;
};
typedef struct node*Node;
Node temp,first=NULL;
void create_SLL();
Node getnode();
void read();
void display_SLL();
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
			case 1:create_SLL();
				break;
			case 2:display_SLL();
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
void create_SLL()
{
	int n,i;
	printf("Enter the Number of students\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter details of student %d\n",i);
		read();
		if(first==NULL)
		{
			first=temp;
		}
		else
		{
			temp->link=first;
			first=temp;
		}
	}
}
Node getnode()
{
	Node X;
	X=(Node)malloc(sizeof(struct node));
	X->link=NULL;
	return X;
}
void read()
{
	temp=getnode();
	printf("Enter the USN\n");
	scanf("%s",temp->USN);
	printf("Enter the Name\n");
	scanf("%s",temp->Name);
	printf("Enter the Branch\n");
	scanf("%s",temp->Branch);
	printf("Enter the Sem\n");
	scanf("%d",&temp->Sem);
	printf("Enter the Phone Number\n");
	scanf("%llu",&temp->ph);
}
void display_SLL()
{
	int count=0;
	printf("Students details\n");
	if(first==NULL)
	{
		printf(" List is empty\n");
	}
	else 
	{
		temp=first;
		printf("USN\t\tNAME\tBRANCH\tSEM\tPH:\n");
		while(temp->link!=NULL)
		{
			count++;
			printf("%s\t%s\t%s\t%d\t%llu\n",temp->USN, temp->Name, temp->Branch, temp->Sem, temp->ph);
			temp=temp->link;
		}
		count++;
		printf("%s\t%s\t%s\t%d\t%llu\n",temp->USN,temp->Name,temp->Branch,temp->Sem,temp->ph);
		printf("Number of students=%d\n",count);
	}
}
void insert_front()
{	printf("Enter the students details\n");
	read();
	if(first==NULL)
		first=temp;
	else
	{
		temp->link=first;
		first=temp;
	}
}
void dlt_front()
{
	if(first==NULL)
	{
		printf("List id empty\n");
		return;
	}
	temp=first;
	first=first->link;
	printf("USN of deleted node is %s\n",temp->USN);
	free(temp);
}
void insert_end()
{
	printf("Enter Student details\n");
	read();
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		Node last=first;
		while(last->link!=NULL)
		{
			last=last->link;
		}
		last->link=temp;
	}
}
void dlt_end()
{
	if(first==NULL)
	{
		printf("List is empty\n");
	}
	else if(first->link==NULL)
	{
		printf("USN of deleted node is %s\n",first->USN);
		free(first);
		first=NULL;
	}
	else
	{
		Node last=first;
		while(last->link!=NULL)
		{
			temp=last;
			last=last->link;
		}
		printf("USN of the deleted node is %s\n",last->USN);
		free(last);
		temp->link=NULL;
	}
}		

