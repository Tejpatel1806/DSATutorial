#include<stdio.h>
#include<stdlib.h>
#define NULL 0

struct linked_list
{
	int number;
	char name[20];
	float p;
	struct linked_list *next;
};
typedef struct linked_list node;  /* node type defined */

void create(node *p);
void print(node *p);
node *delete(node *head);
node *find(node *list, int key);

int main()
{
	node *head;
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	head=delete(head);
	printf("\n");
	print(head);
	printf("\n");
    return 0;
}
void create(node *list)
{
	printf("Input a number\n");
	printf("(type -999 at end): ");
	scanf("%d %s %f", &list -> number,list->name,&list->p); /* create current node */

	if(list->number == -999)
	{
		list->next = NULL;
	}
	else 	/*create next node */
	{
		list->next = (node *)malloc(sizeof(node));
		create(list->next);
	}
	return;
}
void print(node *list)
{
		if(list->next != NULL)
		{
		  printf(" data are %d %s %f \n", list -> number,list->name,list->p);  /* print current item */

		   if(list->next->next == NULL)
			{

			    //printf("%d", list->next->number);
			}

		  print(list->next);		/* move to next item */
		}
		return;
	}
node *delete(node *head)
{

	int  key;	/* item to be deleted */
	node *n1;	/* pointer to node preceding key node */
	node *p;		/* temporary pointer */
	printf("\n What is the item (number) to be deleted?");
	scanf("%d", &key);
	if(head->number == key) 	/* first node to be deleted) */
	{
		p = head->next;		/* pointer to 2nd node  in list */
		free(head);		/* release space of key node */
		head = p;			/* make head to point to 1st node */
	}
	else
	{
		n1 = find(head, key);
		if(n1 == NULL)
		   printf("\n key not found \n");
		else						/* delete key node */
		{
			p = n1->next->next;		/*  pointer to the node
							    following the keynode */

			free(n1->next);			/* free key node */
			n1->next = p;			/* establish link */
		}
	}
return(head);
}

node *find(node *list, int key) // 10 20 30 40 50 -999
                                // 30
{
		if(list->next->number == key)  	/* key found */
			return(list);
	    else
        {
           	if(list->next->next == NULL) 	/* end */
			return(NULL);
	        else
		    find(list->next, key);
        }
}
