#include<stdio.h>
#include<stdlib.h>
struct example
{
	int data;
	struct example *next;
//	struct example *link;
};
 struct example *a = NULL;
struct example *insert(struct example *,int);
void reverse();
int  display(struct example *);
void main()
{
  //  struct example *a = NULL;
    a = insert(a,100);
    a = insert(a,200);
    a = insert(a,300);
    a = insert(a,400);
     reverse();
    display(a);
}
struct example *insert(struct example *s,int val)
{
	struct example *start = s;
    	if(s == NULL)
      	{	
       		s = (struct example *)malloc(sizeof(struct example));
       		s->data = val;
      		s->next = NULL;
       		return s;
      	}	
    	while(s->next!=NULL)
       		s = s->next;
     		s->next = (struct example *)malloc(sizeof(struct example));
     		s->next->data =val;
     		s->next->next =NULL;
     		return start;
}
/*struct example  *reverse (struct example *p)
{
	struct example *temp = NULL;
	struct example *sn = p;
	struct example *ref = p->next;
	while(ref!= NULL)
	{
		temp = ref->next;
		ref->next = p;
		p = ref;
		ref = temp;
	}
		sn->next = NULL;
		return p;
}*/
void reverse()
{
struct example *p=a,*q=a;
int i,j,n,k,temp;
n = 4;
i = 0;
j = n-1;
while(i<j)
{
	k = 0;
	while(k<j)
	{
		q = q->next;
		k++;
	}
	temp = p->data;
	p->data = q->data;
	q->data = temp;
	i++;
	j--;
	p = p->next;
	q = a;
}
}
int  display(struct example *p)
{
	while(p!= NULL)
        {
        	printf("value = %d",p->data);
           	p = p->next;
        }
}  
