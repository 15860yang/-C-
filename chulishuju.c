#include<stdio.h>
#include<stdlib.h>
#include"chulishuju.h"
#include"xianshihanshu.h"
node* creat(node* head,node *tail){
	int i;
	char t;
	int cnt = 1;
	while( cnt ){
		system("cls");
		printf("\t\t������ѧ����ѧ����Ϣ��\n"); 
		node *p = (node*)malloc(sizeof(node));
		
		while(1){
			while( 1 ){
				printf("\n\t\tѧ�ţ�");
				scanf("%s",p->dd.num);
				p->dd.num[10] = '\0';
				for( i = 0;p->dd.num[i] != '\0' && i < 9 ;i++);
				if( i >= 9 ){
					printf("\t\t������8λ���ڵ�ѧ�ţ�");
					continue;
				}else {
					break;
				}
				
			} 
			
			node *p2 = head->next;
			int t = 1;
			while ( p2 ){
				if(strcmp(p2->dd.num,p->dd.num) == 0)
				{
					printf("\n\t\t�����ѧ��������ѧ����ͬ,���������룺\n\t\t");
					t = 0;
					break;
				}  
				p2 = p2->next;
			}
			if( t ){
				break;
			}
		} 
		while( 1 ) {
				printf("\n\t\t������");
				//cls();
				scanf("%s",p->dd.c);
				if( panduanhanzi(p->dd.c) == 0){
					printf("\t\t�����벻�����������ֵ����֣�\n"); 
				} else{
					break;
				}
		}
		//cls();
		
		printf("\n\t\t��ѡ���Ա�1.��    2.Ů  \n\t\t");
		i = xuanze111();	
		switch( i ){
			case '1':strcpy(p->dd.sex,"��");break; 
			case '2':strcpy(p->dd.sex,"Ů");break;
		}		
					
		printf("\n\t\t���ĳɼ���");
		cls();
		p->dd.chinese = zifuchuan();
		while( p->dd.chinese == -1){
			printf("\t�Բ���,���ĳɼ�ֻ����0-150֮�ڣ����������룺");
			//cls();
			p->dd.chinese = zifuchuan();
		}
		
		printf("\n\t\t��ѧ�ɼ���");
		//cls();
		p->dd.math = zifuchuan();
		while( p->dd.math == -1){
			printf("\t�Բ���,��ѧ�ɼ�ֻ����0-150֮�ڣ����������룺");
			//cls();
			p->dd.math = zifuchuan();
		}
		printf("\n\t\tӢ��ɼ���");
		//cls();
		p->dd.english = zifuchuan();
		while( p->dd.english == -1){
			printf("\t�Բ���,Ӣ��ɼ�ֻ����0-150֮�ڣ����������룺");
			//cls();
			p->dd.english = zifuchuan();
		}
		printf("\n\t\t�����ɼ���");
		//cls();
		p->dd.PE = zifuchuan();
		while( p->dd.PE == -1){
			printf("\t�Բ���,�����ɼ�ֻ����0-150֮�ڣ����������룺");
			//cls();
			p->dd.PE = zifuchuan();
		}
		printf("\n\t\t\t����ɹ�����ѧ������ϢΪ��\n");
		jiemian(p);
		printf("\n\t\t���������밴1 ���������밴2 ��������밴3 ��\n\t\t");
		//cls();
		t =  xuanze(); 
		strcpy(p->dd.baomi,p->dd.num);
		switch(t){
			case '1':system("cls");free(p);continue;
			case '2':break;
			case '3':cnt = 0;break;
					
		}
		p->next = NULL;
		tail->next = p;
		tail = p;
	}
	return tail;
}
void xiugai(node* head){
	char i[10];
	int t ;
	char k;
	int cnt = 1, dis = 1;
	while( cnt ){
		if(head->next == NULL){
			printf("��ǰѧ����ϢΪ�գ���֧�ֲ�ѯ����������˳���");
			getch(); 
			return;
		} 
		system("cls"); 
		while(1){
			printf("\t\t������Ҫ�޸ĵ�ѧ����ѧ�ţ�\n\t\t\t");
			printf("\n\t\tѧ�ţ�");
			scanf("%s",i);
			i[10] = '\0';
			for( t = 0;i[t] != '\0' && t < 9 ;t++);
			if( t >= 9 ){
				printf("\t\t������8λ���ڵ�ѧ�ţ�\n");
				continue;
			}else {
				break;
			}
		}
		//cls();
		node *pp = head->next;
		while(pp){
			if(strcmp(pp->dd.num,i) == 0)break;
			pp = pp->next;
		}
		if( !pp ){
			printf("\n\t\t�����ѧ���������������밴 1 ���˳��밴 2 \n");
			t = xuanze111();
			if( t == '2'){
				return;
			} 
			dis = 0;
		}else {
			dis = 1;
		}
		if( dis ){
			jiemian(pp);
		 	printf("\t\t��ȷ���Ƿ��޸ģ�\n");
		 	printf("\t\t1.��\t\t2.��\n\t\t");
		 	t = xuanze111();
	 		if( t == '2'){
			 	printf("\t\tȡ���޸ģ��������������\n\t\t");
			 	getch();
			 	return;
			}
			while( 1) {
				printf("\n\t\t������");
				//cls();
				scanf("%s",pp->dd.c);
				if( panduanhanzi(pp->dd.c) == 0){
					printf("\t\t�����벻�����������ֵ����֣�\n"); 
				} else{
					break;
				}
			}
			
			
			
			printf("\n\t\t��ѡ���Ա�1.��    2.Ů  \n\t\t");
			k = xuanze111();	
			switch( k ){
				case '1':strcpy(pp->dd.sex,"��");break; 
				case '2':strcpy(pp->dd.sex,"Ů");break;
			}
			
			
			printf("\n\t\t���ĳɼ���");
			cls();
			pp->dd.chinese = -2;
			pp->dd.chinese = zifuchuan();
			while( pp->dd.chinese == -1){
				printf("\t�Բ���,���ĳɼ�ֻ����0-150֮�ڣ����������룺");
				//cls();
				pp->dd.chinese = zifuchuan();
			}
			printf("\n\t\t��ѧ�ɼ���");
			//cls();
			pp->dd.math = zifuchuan();
			while( pp->dd.math == -1){
				printf("\t�Բ���,��ѧ�ɼ�ֻ����0-150֮�ڣ����������룺");
				//cls();
				pp->dd.math = zifuchuan();
			}
			printf("\n\t\tӢ��ɼ���");
			//cls();
			pp->dd.english = zifuchuan();
			while( pp->dd.english == -1){
				printf("\t�Բ���,Ӣ��ɼ�ֻ����0-150֮�ڣ����������룺");
				//cls();
				pp->dd.english = zifuchuan();
			}
			printf("\n\t\t�����ɼ���");
			cls();
			pp->dd.PE = zifuchuan();
			while( pp->dd.PE == -1){
				printf("\t�Բ���,�����ɼ�ֻ����0-150֮�ڣ����������룺");
				//cls();
				pp->dd.PE = zifuchuan();
			}
			printf("\n\t\t\t����ɹ�����ѧ������ϢΪ��\n");
			jiemian(pp);
			printf("\n\t\t�����޸��밴1 �޸�����밴2 ��\n\t\t");
			//cls();
		 	k = xuanze111();
			switch(k){
				case '1':system("cls");break;
				case '2':cnt = 0;break; 
			}
		}
	}
}
void shanchu(node* head){
	char t;
	int cnt;
	if( head ->next == NULL ){
		printf("\t\tѧ������Ϊ�գ����ܽ��иù��ܣ��������������");
		getch();
		return;
	}
	char i[10];
	while(1){
		
		system("cls"); 
		printf("\t\t������Ҫɾ����ѧ����ѧ�ţ�\n\t\t\t");
		//cls();
		scanf("%s",i);
		node *pp = head->next;
		node *p2 = head;
		while( pp ){
			if(strcmp(pp->dd.num,i) == 0)break;
			pp = pp->next;
			p2 = pp;
		}
		if(!pp){
			printf("\n\t\t�����ѧ���������������밴 1 ���˳��밴 2 \n");
			t = xuanze111();
			if( t == '2'){
				return;
			}
			cnt = 0;
		}
		else {
			cnt = 1;
		}
		if( cnt ){
			jiemian(pp);
			printf("\t\t��ȷ���Ƿ�ɾ����\n");
		 	printf("\t\t1.��\t\t2.��\n\t\t");
		 	t = xuanze111();
	 		if( t == '1'){
		 		node* p1 = pp;
				p2->next = pp->next;
				free(p1);
				printf("\n\t\t\tɾ���ɹ���,��������������˵���\n");
		 	}else{
	 			printf("\n\t\t\tȡ��ɾ����,��������������˵���\n");
	 		} 
			cls();
			getch();
			break;
		}
	}
}
void dayinxinxi(node* head){ 
	node *p1 = head->next;
	system("cls");
	printf("\t\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T\n");
	while(p1){
		laoshidayinjiemian(p1);
		p1 = p1->next;
	}
	printf("\t\t�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T\n");
	printf("\n\t\t\t��ӡ�ɹ�������������������˵���\n\t\t\t");
	getch();
}
void dayinxueshengxinxi(node* head){
	node *p1 = head->next;
	int cnt , j = 1;
	char i[10],t; 
	while( j ){
		printf("\t\t���������ѧ����ѧ�ţ�\n\t\t\t");
		scanf("%s",i);
		while(p1){
			if(strcmp(p1->dd.num,i) == 0)break;
			p1 = p1->next;
		}
		if(!p1){
			printf("\n\t\t�����ѧ���������������밴 1 ���˳��밴 2 \n\t\t");
		 	t = xuanze111();
			if( t == '2'){
				return;
			}
		}else {
			j = 0;
			cnt = 1;
		}
	}
	
	if( cnt ){
		jiemian(p1);
		printf("\n\t\t\t��ӡ�ɹ�������������������˵���\n\t\t\t");
	}
	//cls();
	getch();
}

int panduanhanzi(char a[]){
	int i = 0;
	while( a[i] != '\0'  ){
		if( a[i] >= 0 ){
			return 0;
		}else if( a[i] < 0){
			i += 2;
			if( i > 6){
				return 0;
			}
		}
	}
	return 1;
}


//�ַ�ת�����ֺ��� 

float zifuchuan(){
	char a[20];
	int jj = 0,tt = 0;
	int xiaoshu = 0;//С������
	int dian = 0; //��¼С������ֵĴ���
	int xiaoshudianhou = 1;
	scanf("%s",a);
	float num = 0;
	int i = 0;
	while( a[i] != '\0' ){
		
		if( a[i] == '.'){
			jj = 1;
		} 
		if( tt == 1 && a[i] == '.'){
			return -1;
		}
		if( jj == 1 ){
			tt = 1;
		}
		i++;
	}
	if( i > 8 ){
		return -1;
	}
	for(i = 0; a[i] != '\0' && xiaoshudianhou < 3; i++){
		switch(a[i]){
			case '0':if(xiaoshu == 0){
						num *= 10;
					}else{
						num = xiaoshudian(num,xiaoshudianhou,0);
						xiaoshudianhou++;
					}break;
			case '1':if(xiaoshu == 0){
						num = num*10+1;
					}else {
						num = xiaoshudian(num,xiaoshudianhou,1);
						xiaoshudianhou++;
					}break;
			case '2':if( xiaoshu == 0){
						num = num*10+2;
					}else{
						num = xiaoshudian(num,xiaoshudianhou,2);
						xiaoshudianhou++;
					}break;
			case '3':if(xiaoshu == 0){
						num = num*10+3;
						
					}else {
						num = xiaoshudian(num,xiaoshudianhou,3);
						xiaoshudianhou++;
					}break;
			case '4':if(xiaoshu == 0){
						num = num*10+4;
						
					}else {
						num = xiaoshudian(num,xiaoshudianhou,4);
						xiaoshudianhou++;
					}break;
			case '5':if(xiaoshu == 0){
						num = num*10+5;
						
					}else {
						num = xiaoshudian(num,xiaoshudianhou,5);
						xiaoshudianhou++;
					}break;
			case '6':if(xiaoshu == 0){
						num = num*10+6;
					}else {
						num = xiaoshudian(num,xiaoshudianhou,6);
						xiaoshudianhou++;
					}break;
			case '7':if(xiaoshu == 0){
						num = num*10+7;
			
					}else {
						num = xiaoshudian(num,xiaoshudianhou,7);
						xiaoshudianhou++;
					}break;
			case '8':if(xiaoshu == 0){
						num = num*10+8;
						
					}else {
						num = xiaoshudian(num,xiaoshudianhou,8);
						xiaoshudianhou++;
					}break;
			case '9':if(xiaoshu == 0){
						num = num*10+9;
						
					}else {
						num = xiaoshudian(num,xiaoshudianhou,9);
						xiaoshudianhou++;
					}break;
			case '.':if( dian == 0){
						dian = 1;
						xiaoshu = 1;
					}else {
						return -1;
					}break;
			default :return -1;
		}
	}
	if( num > 150 || num < 0)
		return -1;
	return num;
}

float xiaoshudian(float num,int t,int i){
	switch(t){
		case 1:num += 0.1*i;break; 
		case 2:num += 0.01*i;break;
		case 3:num += 0.001*i;break;
	}
	return num;
}

