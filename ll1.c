#include<stdio.h>
#include<stdlib.h>

int main()
{
  
  struct node
  {
      int data;
      struct node *next;
  };

  
  struct node *head,*middle,*last;

  
  head   = malloc(sizeof(struct node));
  middle = malloc(sizeof(struct node));
  last   = malloc(sizeof(struct node));


  head->data   = 10;
  middle->data = 30;
  last->data   = 50;


  head->next   = middle;
  middle->next = last;
  last->next   = NULL;

  
  struct node *temp = head;

  
  while(temp != NULL)
  {
      printf("%d->",temp->data);
      temp = temp->next;
  }
  printf("NULL");

  return 0;
}
