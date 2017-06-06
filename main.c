#include<stdio.h>
#include<stdlib.h>
#include"xianshihanshu.h"
#include"chulishuju.h"
#include"wenjiancuozuo.h"
#include"paixuwenjan.h"
node* paixubuchong(node* head);
node* paixujiegou(node *head);
//node* teacherinit(node *head);
int main(){
	system("title ---学生管理系统---");  
	system("color 1a");
	system("mode con cols=100 lines=30");
	node *head = (node*)malloc(sizeof(node));
	head->next = NULL;
	node *tail = head;
 	
	char i;int cnt = 1;
	int a = 1;//第一个界面的标志
	int b = 0;//老师界面登录的标志
	int c = 0;//进入老师界面的标志
	int d = 0;//进入学生查询界面
	int t = 1;
	
	head = duwenjian();
	tail = returnreal(head);
	
	while(t){
		while( a ){
			view(); 
			printf("\t\t输入相应的序号进入相应的选项：\n\t\t");
			i = xuanze();
			switch(i){
				case '1':a = 0;b = 1, d = 0;break;//打开老师界面 
				case '2':a = 0;d = 1, b = 0;break;//打开学生界面 
				case '3':a = 0;d = 0, b = 0, t = 0;break;//退出
			}
		}
		while(b != 0){
				c = guanlidenglu();//登录函数返回值给老师界面参数
				cnt = 1;  
				system("cls");
				while( c ){
					system("cls");
					view1(); // 老师界面 
					printf("\t\t请输入相应的选项进入相应的功能：\n\t\t");
					i = xuanzezeze(); 
					switch( i ){
						case '1':tail = creat(head,tail);break;
						case '2':xiugai(head);break;
						case '3':shanchu(head);break;
						case '4':dayinxinxi(head);break;
						case '5':head = paixujiegou(head);
								 tail = paixubuchong(head);break;
						case '6':wenjiancunchu(head);
								b = 0, c = 0 , cnt = 0,a = 1;system("cls");break;
					}
				}
				if( !c && cnt ) {
					b = 0, c = 0 , cnt = 0,a = 1;
					system("cls");
					printf("\t\t\t\t账号或密码错误，请重新输入：\n");
				}
				
		} 
		while( d ) {
			system("cls");
			xueshengfangwen();
			printf("\t\t请输入相应的选项进入相应的功能：\n\t\t");
			i = xuanze111();
			switch( i ){
				case '1':dayinxueshengxinxi(head);break;
				case '2':d = 0 , a = 1;break;
			}
			system("cls");
		}
	}
	return 0;
}
// 排序的主体函数 
node* paixujiegou(node *head){
	char i;
	int cnt = 1;
	while( cnt ){
		system("cls");
		if( head->next == NULL ){
			printf("\t\t当前学生信息为空，不支持此功能！按任意键继续：\n\t\t");
			getch();
			return head;
		}
		paixuview();
		printf("\t\t请输入相应的序号：");
		i = xuanzepaixu();
		switch( i ){
			case '1':head = sorrtChinese(head,1);//学号 
						printf("\t已经按照学号排序完成，按任意键继续：");
						getch();
						break; 
			case '2':head = sorrtChinese(head,2);//语文
						printf("\t已经按照语文成绩排序完成，按任意键继续：");
						getch();
						break; 
			case '3':head = sorrtChinese(head,3);//数学
						printf("\t已经按照数学成绩排序完成，按任意键继续：");
						getch();
						break; 
			case '4':head = sorrtChinese(head,4);//英语
						printf("\t已经按照英语成绩排序完成，按任意键继续：");
						getch();
						break;
			case '5':head = sorrtChinese(head,5);//体育
						printf("\t已经按照体育成绩排序完成，按任意键继续：");
						getch();
						break;
		 	case '6':dayinxinxi(head);//打印
		 				break; 
		 	case '7':cnt = 0;break;//退出
		}
	}
	return head;
}

node* paixubuchong(node* head){
	node *tail = head;
	node *p = head;
	while( p ){
		tail = p;
		p = p->next;
	}
	tail->next = NULL;
	return tail;
}
