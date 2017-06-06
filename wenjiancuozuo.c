#include<stdio.h> 
#include<stdlib.h>
#include"wenjiancuozuo.h"
void wenjiancunchu(node* head){
	//新建文件,数据写入文件
	fp = fopen("student.txt","w");
	node *pp = head->next;
	while( pp ){
		fwrite(&pp->dd,sizeof(node),1,fp);
		pp = pp->next;
	}
	fclose(fp); 
	printf("\t\t文件存储成功，按任意键继续...\n");
	getch();
} 
node* duwenjian(){
	//新链表的建立 
	node* phead = (node*)malloc(sizeof(node));
	phead->next = NULL; 
	node* real  = phead;
	//读文件数据
	fp = fopen("student.txt","r");
	if( fp == NULL ){
		fp = fopen("student.txt","w");
		if(fp==NULL)
		{
			printf("文件异常终止..."); 
			exit(-1);	
		}
		fclose(fp);
	}else{
		fclose(fp);
	}
	fp = fopen("student.txt","r");
	node *p1 = (node*)malloc(sizeof(node));
	while( fread(p1,sizeof(node),1,fp) == 1 ){
		p1->next = NULL;
		real->next = p1;
		real = p1;
		p1 = (node*)malloc(sizeof(node));
	}
	free(p1);
	fclose(fp);
		
	//printf("\t\t文件在线初始化成功！按任意键继续...\n"); 
	//getch();
	return phead;
}

node *returnreal(node* head){ 
	node *p = head->next;
	node *real = NULL;
	if( head->next == NULL){
		real = head;
	} 
	while( p ){
		real = p;
		p = p->next;
	}
	return real;
}
