#ifndef _xianshihanshu_
#define _xianshihanshu_

#define NNN p->dd.num,p->dd.c,p->dd.sex,p->dd.chinese,p->dd.math,p->dd.english,p->dd.PE

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
char xuanzepaixu();
void laoshidayinjiemian(node *p); 
char xuanzezeze();
char xuanze();
char xuanze111();
void xueshengfangwen(); 
void view();
void view1();
void jiemian(node *p);
void cls();
void paixuview(); 
void gaojishezhi(node* head); 

#endif
