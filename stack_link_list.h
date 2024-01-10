#ifndef STACK_LINK_LIST_H
#define STACK_LINK_LIST_H

struct node {
	int data;
	struct node *next;
};

typedef struct node 	NODE;
typedef struct node *	PNODE;
typedef struct node **	PPNODE;

PNODE	create_node(int data, PNODE next){
	PNODE new_node = (PNODE)malloc(sizeof(NODE));
	new_node->data = data;
	new_node->next = next;
	return new_node;
}

void	push(PPNODE top, int data){
	if (*top == NULL)
		*top = create_node(data, NULL);
	else
		*top = create_node(data, *top);
}

int	pop(PPNODE top){
	if(*top){
		int 	val 	= (*top)->data;
		PNODE	next	= (*top)->next;
		free(*top);
		*top		= next;
		return val;
	}
	return -1;
}

void	print(PNODE top){
	while(top){
		printf(" - %2d ", top->data);
		top = top->next;
	}
	printf("\n");
}

#endif
