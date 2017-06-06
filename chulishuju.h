#ifndef _chulishuju_
#define _chulishuju_

#ifndef _jiegouti_
#define _jiegouti_

struct date{
	char num[10];
	char c[20];
	char sex[10];
	float chinese;
	float math;
	float english;
	float PE;
	char baomi[10];
};

typedef struct student{
	struct date dd;
	struct student* next;
} node;

#endif

float zifuchuan(); 
float xiaoshudian(float num,int t,int i);
int panduanhanzi(char a[]);
void dayinxinxi(node* head);
void shanchu(node* head);
void xiugai(node* head);
node* creat(node* head,node *tail);
int guanlidenglu();
node* sort(node* head); 

#endif


