#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"xianshihanshu.h"

/*主界面*/
void view(){
	printf("\t\t\t      ╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪\n");
	printf("\t\t\t╔═══╧╧ 欢迎来到学生管理系统 ╧╧═══╗\n");
	printf("\t\t\t║※1. 老 师 登 录 \t\t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※2. 学 生 访 问　 \t\t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※3. 退 出 系 统　 \t\t\t    ║   \n");
	printf("\t\t\t╚═════════════════════╝\n");
}
/*管理员界面*/
void view1(){
	printf("\t\t\t       ╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪\n");
	printf("\t\t\t╔═══╧╧ 欢迎来到学生管理系统 ╧╧═══╗\n");
	printf("\t\t\t║※1. 添 加 学 生 信 息   \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※2. 修 改 学 生 信 息　 \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※3. 删 除 学 生 信 息　 \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※4. 打 印 学 生 信 息　 \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※5. 对 信 息 排 序 　 \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※6. 退 出 老 师 登 陆　 \t\t    ║   \n");
	printf("\t\t\t╚═════════════════════╝\n");
}

/*管理员登录界面*/
int guanlidenglu(){
	int cnt = 1,i,b;
	char guanli[] = "03161257",a[9];
	char mima[] = "yanghao",c[8];
	printf("\t请输入老师账号：");
	scanf("%s",a);
	cls();
	if( strcmp(guanli,a) != 0){
		cnt = 0;
	}
	printf("\t请输入老师密码：");
	for(i = 0;i < 7; i++){
		c[i] = getch();
		if( c[i] == 8){
			if( i > 0 ) {
				printf("\b \b");
				i -= 2;
			}else {
				printf(" ");
				printf("\b \b");
				i -= 2;
			}
			if( i < 0 ){
				i = -1;
			}
			continue;
		}
		printf("*");
	}
	c[7] = '\0';
	if(cnt == 1){
		if(strcmp(mima,c) != 0)
		cnt = 0;
	}
	return cnt;
}
/*打印信息界面函数*/
void jiemian(node *p){
	printf("\t\t═════════════════════════════════\n");
	printf("\t\t  学号： %s\t║",p->dd.num);
	printf("姓名： %s\t\t ",p->dd.c);
	printf("性别： %s\t \n",p->dd.sex);
	printf("\t\t╔═══════════════════════════════╗\n");
	printf("\t\t║语文： %.2f\t║",p->dd.chinese);
	printf("数学： %.2f\t║",p->dd.math);
	printf("英语： %.2f\t║",p->dd.english);
	printf("体育： %.2f\t║\n",p->dd.PE);
	printf("\t\t╚═══════════════════════════════╝\n");
}

void laoshidayinjiemian(node *p){
	//printf("\t═════════════════════════════════\n");
	printf("\t\t  学号： %s\t ",p->dd.num);
	printf("姓名： %s\t\t ",p->dd.c);
	printf("性别： %s\t \n",p->dd.sex);
	printf("\t\t╔═══════════════════════════════╗\n");
	printf("\t\t║语文： %.2f\t║",p->dd.chinese);
	printf("数学： %.2f\t║",p->dd.math);
	printf("英语： %.2f\t║",p->dd.english);
	printf("体育： %.2f\t║\n",p->dd.PE);
	printf("\t\t╚═══════════════════════════════╝\n");
	//printf("\t╚═══════════════════════════════╝\n");

}

void xueshengfangwen(){
	printf("\t\t\t       ╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪\n");
	printf("\t\t\t╔═══╧╧ 欢迎来到学生管理系统 ╧╧═══╗\n");
	printf("\t\t\t║※1. 查 看 我 的 信 息   \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※2. 返 回 上 一 界 面　 \t\t    ║   \n");
	printf("\t\t\t╚═════════════════════╝\n");
}

void cls(){
	char ch;
	while((ch = getchar()) != '\n' && ch != EOF);
}

char xuanze(){
	char ch;
	do{
		printf("\b \b");
		ch = getche();
	}while( !(ch == '1' || ch == '2' || ch == '3' ));
	printf("\n");
	return ch;
}
char xuanze111(){
	char ch;
	do{
		printf("\b \b");
		ch = getche();
	}while( !(ch == '1' || ch == '2'));
	printf("\n");
	return ch;
}
char xuanzezeze(){
	char ch;
	do{
		printf("\b \b");
		ch = getche();
	}while( !(ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6'));
	printf("\n");
	return ch;
}

char xuanzepaixu(){
	char ch;
	do{
		printf("\b \b");
		ch = getche();
	}while( !(ch == '1' || ch == '2' || ch == '7' || ch == '3' || ch == '4' || ch == '5' || ch == '6'));
	printf("\n");
	return ch;
}
/*排序界面*/
void paixuview(){
	printf("\t\t\t       ╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪\n");
	printf("\t\t\t╔═══╧╧ 欢迎来到学生管理系统 ╧╧═══╗\n");
	printf("\t\t\t║※1. 按 学 号  排 序   \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※2. 语 文 成 绩 排 序　 \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※3. 数 学 成 绩 排 序　 \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※4. 英 语 成 绩 排 序　 \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※5. 体 育 成 绩 排 序 　 \t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※6. 打 印 排 序 后 的 数 据\t\t    ║   \n");
	printf("\t\t\t╠═════════════════════╣\n");
	printf("\t\t\t║※7. 退 出 排 序 界 面　 \t\t    ║   \n");
	printf("\t\t\t╚═════════════════════╝\n");
}
