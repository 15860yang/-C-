#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"xianshihanshu.h"

/*������*/
void view(){
	printf("\t\t\t      �n�n�n�k�k�k�k�k�k�k�k�n�n�n�n\n");
	printf("\t\t\t�X�T�T�T�k�k ��ӭ����ѧ������ϵͳ �k�k�T�T�T�[\n");
	printf("\t\t\t�U��1. �� ʦ �� ¼ \t\t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��2. ѧ �� �� �ʡ� \t\t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��3. �� �� ϵ ͳ�� \t\t\t    �U   \n");
	printf("\t\t\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
}
/*����Ա����*/
void view1(){
	printf("\t\t\t       �n�n�n�k�k�k�k�k�k�k�k�n�n�n�n\n");
	printf("\t\t\t�X�T�T�T�k�k ��ӭ����ѧ������ϵͳ �k�k�T�T�T�[\n");
	printf("\t\t\t�U��1. �� �� ѧ �� �� Ϣ   \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��2. �� �� ѧ �� �� Ϣ�� \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��3. ɾ �� ѧ �� �� Ϣ�� \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��4. �� ӡ ѧ �� �� Ϣ�� \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��5. �� �� Ϣ �� �� �� \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��6. �� �� �� ʦ �� ½�� \t\t    �U   \n");
	printf("\t\t\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
}

/*����Ա��¼����*/
int guanlidenglu(){
	int cnt = 1,i,b;
	char guanli[] = "03161257",a[9];
	char mima[] = "yanghao",c[8];
	printf("\t��������ʦ�˺ţ�");
	scanf("%s",a);
	cls();
	if( strcmp(guanli,a) != 0){
		cnt = 0;
	}
	printf("\t��������ʦ���룺");
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
/*��ӡ��Ϣ���溯��*/
void jiemian(node *p){
	printf("\t\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T\n");
	printf("\t\t  ѧ�ţ� %s\t�U",p->dd.num);
	printf("������ %s\t\t ",p->dd.c);
	printf("�Ա� %s\t \n",p->dd.sex);
	printf("\t\t�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
	printf("\t\t�U���ģ� %.2f\t�U",p->dd.chinese);
	printf("��ѧ�� %.2f\t�U",p->dd.math);
	printf("Ӣ� %.2f\t�U",p->dd.english);
	printf("������ %.2f\t�U\n",p->dd.PE);
	printf("\t\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
}

void laoshidayinjiemian(node *p){
	//printf("\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T\n");
	printf("\t\t  ѧ�ţ� %s\t ",p->dd.num);
	printf("������ %s\t\t ",p->dd.c);
	printf("�Ա� %s\t \n",p->dd.sex);
	printf("\t\t�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
	printf("\t\t�U���ģ� %.2f\t�U",p->dd.chinese);
	printf("��ѧ�� %.2f\t�U",p->dd.math);
	printf("Ӣ� %.2f\t�U",p->dd.english);
	printf("������ %.2f\t�U\n",p->dd.PE);
	printf("\t\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	//printf("\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");

}

void xueshengfangwen(){
	printf("\t\t\t       �n�n�n�k�k�k�k�k�k�k�k�n�n�n�n\n");
	printf("\t\t\t�X�T�T�T�k�k ��ӭ����ѧ������ϵͳ �k�k�T�T�T�[\n");
	printf("\t\t\t�U��1. �� �� �� �� �� Ϣ   \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��2. �� �� �� һ �� �桡 \t\t    �U   \n");
	printf("\t\t\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
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
/*�������*/
void paixuview(){
	printf("\t\t\t       �n�n�n�k�k�k�k�k�k�k�k�n�n�n�n\n");
	printf("\t\t\t�X�T�T�T�k�k ��ӭ����ѧ������ϵͳ �k�k�T�T�T�[\n");
	printf("\t\t\t�U��1. �� ѧ ��  �� ��   \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��2. �� �� �� �� �� �� \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��3. �� ѧ �� �� �� �� \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��4. Ӣ �� �� �� �� �� \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��5. �� �� �� �� �� �� �� \t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��6. �� ӡ �� �� �� �� �� ��\t\t    �U   \n");
	printf("\t\t\t�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
	printf("\t\t\t�U��7. �� �� �� �� �� �桡 \t\t    �U   \n");
	printf("\t\t\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
}
