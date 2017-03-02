struct node

{
	....; //int data;
	struct node *next;
}	*head,*current,*tail;

head=(struct node*)malloc(sizeof(...));
current=tail=head;
while(....)
{
	current->next=(...*)malloc(....);
	current=current->next;
}
tail=current;

