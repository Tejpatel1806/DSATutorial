#include<stdio.h>
#include<stdlib.h>
#define NULL 0

struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;  /* node type defined */

// functions prototype
    void create(node *p);
	void print(node *p);
    node *find(node *list, int key);
    node *insert(node *head);

int main()
{
	node *head;
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");

	head=insert(head);
	printf("\n");

	print(head);
	printf("\n");
}
void create(node *list)
{
	printf("Input a number\n");
	printf("(type -999 at end): ");
	scanf("%d", &list -> number); /* create current node */

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
		  printf("%d-->",list ->number);  /* print current item */

		  print(list->next);		/* move to next item */
		}
		return;
	}

node *insert(node *head)
{
	node *new;   		/* pointer to new node */
	node *n1;		/* pointer to node preceding key node */
	int key;
	int x;			/* new item (number) to be inserted */

	printf("Value of new item?");
	scanf("%d", &x);
	printf("Value of key item ?(it can not be -999)  ");
	scanf("%d", &key);

	if(head->number == key) 		/* new node is first */
	{
	new = (node *)malloc(sizeof(node));
	new ->number = x;
	new->next = head->next;
	head->next = new;
	}
	else		/* find key node and insert new node */
	{			/* before the key node */

		n1 = find(head, key);

		if(n1 == NULL)
		   printf("\n key is not found \n");

		else		/* insert new node */
		{
            new = (node *)malloc(sizeof(node));
            new->number = x;
            new->next = n1->next;  //changes
            n1->next = new;        //changes
		}
  	}
return(head);
}
node *find(node *list, int key)
{
		if(list->next->number == key)  	/* key found */
			return(list->next);  //change
	    else
         {
     		if(list->next->next == NULL) 	/* end */
			return(NULL);
	        else
		    find(list->next, key);
         }
}
/* find key node 10 20 30 40 key node is 30 then
		    address of 20 is returned*/
