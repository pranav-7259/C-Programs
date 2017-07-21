#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
	char name[30];
	struct node *next;
};


struct node *root = NULL , *prev, *current;

void main()
{
	char input_name[30];
	while(1)
	{
		printf("Enter the name of the player (end) to stop entering- ");
		gets(input_name);
	
		if(strcmp(input_name,"end") == 0)
			break;
		
		current = (struct node *) malloc (sizeof(struct node));
	
		if(current == NULL)
		{
			printf("Problem creating node");
			exit(1);
		}

		strcpy(current->name,input_name);
		current->next = NULL;

		if(root == NULL)
		{
			root = current;
		}

		else
		{
			prev->next = current;
		}	
		
		prev = current;
		
	}
	
	current = root;

	while(current!=NULL)
		{
			printf("%s\n", current->name );
			current = current->next;
		}
	
}

