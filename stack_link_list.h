#include<stdio.h>
#include<stdlib.h>
#include"stack_link_list.h"

int main(){
	
	PNODE TOP = NULL;

	push(&TOP, 11);
	push(&TOP, 12);
	push(&TOP, 13);
	push(&TOP, 14);
	push(&TOP, 15);
	print(TOP);

	pop(&TOP);
	pop(&TOP);
	print(TOP);

	pop(&TOP);
	pop(&TOP);
	print(TOP);

	pop(&TOP);
	print(TOP);

	return 0;
}