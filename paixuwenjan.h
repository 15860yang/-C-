#ifndef _paixuwenjian_
#define _paixuwenjian_


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

node* sorrtChinese(node* head,int a);


#endif
