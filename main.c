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
	system("title ---ѧ������ϵͳ---");  
	system("color 1a");
	system("mode con cols=100 lines=30");
	node *head = (node*)malloc(sizeof(node));
	head->next = NULL;
	node *tail = head;
 	
	char i;int cnt = 1;
	int a = 1;//��һ������ı�־
	int b = 0;//��ʦ�����¼�ı�־
	int c = 0;//������ʦ����ı�־
	int d = 0;//����ѧ����ѯ����
	int t = 1;
	
	head = duwenjian();
	tail = returnreal(head);
	
	while(t){
		while( a ){
			view(); 
			printf("\t\t������Ӧ����Ž�����Ӧ��ѡ�\n\t\t");
			i = xuanze();
			switch(i){
				case '1':a = 0;b = 1, d = 0;break;//����ʦ���� 
				case '2':a = 0;d = 1, b = 0;break;//��ѧ������ 
				case '3':a = 0;d = 0, b = 0, t = 0;break;//�˳�
			}
		}
		while(b != 0){
				c = guanlidenglu();//��¼��������ֵ����ʦ�������
				cnt = 1;  
				system("cls");
				while( c ){
					system("cls");
					view1(); // ��ʦ���� 
					printf("\t\t��������Ӧ��ѡ�������Ӧ�Ĺ��ܣ�\n\t\t");
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
					printf("\t\t\t\t�˺Ż�����������������룺\n");
				}
				
		} 
		while( d ) {
			system("cls");
			xueshengfangwen();
			printf("\t\t��������Ӧ��ѡ�������Ӧ�Ĺ��ܣ�\n\t\t");
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
// ��������庯�� 
node* paixujiegou(node *head){
	char i;
	int cnt = 1;
	while( cnt ){
		system("cls");
		if( head->next == NULL ){
			printf("\t\t��ǰѧ����ϢΪ�գ���֧�ִ˹��ܣ��������������\n\t\t");
			getch();
			return head;
		}
		paixuview();
		printf("\t\t��������Ӧ����ţ�");
		i = xuanzepaixu();
		switch( i ){
			case '1':head = sorrtChinese(head,1);//ѧ�� 
						printf("\t�Ѿ�����ѧ��������ɣ��������������");
						getch();
						break; 
			case '2':head = sorrtChinese(head,2);//����
						printf("\t�Ѿ��������ĳɼ�������ɣ��������������");
						getch();
						break; 
			case '3':head = sorrtChinese(head,3);//��ѧ
						printf("\t�Ѿ�������ѧ�ɼ�������ɣ��������������");
						getch();
						break; 
			case '4':head = sorrtChinese(head,4);//Ӣ��
						printf("\t�Ѿ�����Ӣ��ɼ�������ɣ��������������");
						getch();
						break;
			case '5':head = sorrtChinese(head,5);//����
						printf("\t�Ѿ����������ɼ�������ɣ��������������");
						getch();
						break;
		 	case '6':dayinxinxi(head);//��ӡ
		 				break; 
		 	case '7':cnt = 0;break;//�˳�
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
