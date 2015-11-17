#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
	int num;
	struct LNode *next;
}*List;

int main() 
{
	int  i, k, m, length;
	List  p1, p2, p, head;
	
	head = p2 = NULL;
	printf("圆桌的人数：");
	scanf("%d", &length);

	for (i = 1; i <= length; i++)
	{
		p1 = (List)malloc(sizeof(struct LNode));
		p1->num = i;
		p1->next = NULL;
		if (i == 1) {
			head = p1;
			p2 = p1;
		}
		else {
			p2->next = p1;
			p2 = p2->next;
		}
	}
	p2->next = head;
	head = p2;
	printf("\n开始报数的起始号数：");
	scanf("%d", &k);
	printf("\n数到第几个人需要出列：");
	scanf("%d", &m);
	p1 = head;
	for (i = 1; i < k; i++)
		p1 = p1->next;
	while (length != 0) {
		for (i = 1; i < m; i++)
			p1 = p1->next;
		printf("%d\n", p1->next->num);
		p = p1->next;
		p1->next = p1->next->next;
		free(p);
		length--;
	}
return 0; 

}
