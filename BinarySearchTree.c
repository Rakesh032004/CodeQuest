#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int value;
		struct node *ltree,*rtree;
	};
	typedef struct node *Node;
	Node create_BST(Node root,int item);
Node getnode();
void search(Node root);	
void inorder(Node root);
void preorder(Node root);	
void postorder(Node root);	
void main()
{
	Node root=NULL;
	int choice,i,item,n;
	while(1)
	{
		printf("\nOperations of BST\n1.Create BST\n2.Traverse\n3.Search\n4.Exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter Number of Elements\n");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					printf("Enter the item to be inserted\n");
					scanf("%d",&item);
					root=create_BST(root,item);
				}
				break;
			case 2:if(root==NULL)
					printf("BST is Empty\n");
				else
				{
					printf("Preorder traversal is\t");
					preorder(root);
					printf("\ninorder traversal is\t");
					inorder(root);
					printf("\npostorder traversal is\t");
					postorder(root);
				}
				break;
			case 3:search(root);
				break;
			case 4:exit(0);
			default:printf("You have Entered invalid choice\n");
		}
	}
}
Node getnode()
{
	Node X;
	X=(Node)malloc(sizeof(struct node));
	X->ltree=NULL;
	X->rtree=NULL;
}
Node create_BST(Node root,int item)
{
	int flag=0;
	Node temp,cur,prev;
	temp=getnode();
	temp->value=item;
	if(root==NULL)
	{
		root=temp;
		return root;
	}
	else
	{
		cur=root;
		while(cur!=NULL)
		{
			prev=cur;
			if(temp->value==cur->value)
			{
				flag=1;
				break;
			}
		cur=temp->value>cur->value?cur->rtree:cur->ltree;
		}
	}
	if(flag==0)
	{
		if(prev->value < temp->value)
			prev->rtree=temp;
		else if(prev->value>temp->value)
			prev->ltree=temp;
	}
	return root;
}
void search(Node root)
{
	int key;
	Node cur;
	if(root==NULL)
	{
		printf("BST is empty cannot search for Keyelement\n");
		return;
	}
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	cur=root;
	while(cur!=NULL)
	{
		if(key==cur->value)
		{
			printf("Key is found\n");
			return;
		}
		if(key<cur->value)
		{
			cur=cur->ltree;
		}
		else
		cur=cur->rtree;
	}
	printf("Key is not found\n");
}
void inorder(Node root)
{
	Node cur=root;
	if(cur!=NULL)
	{
		inorder(cur->ltree);
		printf(" %d",cur->value);
		inorder(cur->rtree);
	}
}
void preorder(Node root)
{
	Node cur=root;
	if(cur!=NULL)
	{
		printf(" %d",cur->value);
		preorder(cur->ltree);	
		preorder(cur->rtree);
	}
}
void postorder(Node root)
{
	Node cur=root;
	if(cur!=NULL)
	{
		postorder(cur->ltree);	
		postorder(cur->rtree);
		printf(" %d",cur->value);
	}
}
		
	
					
