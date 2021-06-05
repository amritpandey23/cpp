#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *left, *right;
};

void inorder(struct Node *t)
{
	if (!t)
	{
		return;
	}

	inorder(t->left);
	printf("%d\n", t->data);
	inorder(t->right);
}

void preorder(struct Node *t)
{
	if (!t)
	{
		return;
	}

	printf("%d\n", t->data);
	preorder(t->left);
	preorder(t->right);
}

void postorder(struct Node *t)
{
	if (!t)
	{
		return;
	}

	postorder(t->left);
	postorder(t->right);
	printf("%d\n", t->data);
}

int main()
{
	struct Node *a, *b, *c, *d, *e;
	a = (struct Node *)malloc(sizeof(struct Node));
	b = (struct Node *)malloc(sizeof(struct Node));
	c = (struct Node *)malloc(sizeof(struct Node));
	d = (struct Node *)malloc(sizeof(struct Node));
	e = (struct Node *)malloc(sizeof(struct Node));

	a->data = 100;
	b->data = 200;
	c->data = 500;
	d->data = 400;
	e->data = 700;

	a->left = b;
	a->right = c;
	b->left = d;
	b->right = NULL;
	c->right = e;
	c->left = NULL;
	d->left = NULL;
	d->right = NULL;
	e->left = NULL;
	e->right = NULL;

	inorder(a);
	return 0;
}
