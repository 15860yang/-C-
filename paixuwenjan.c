#include<stdio.h>
#include<stdlib.h>
#include"paixuwenjan.h"
		
node* sorrtChinese(node* head,int a){
	node *min = NULL; 		// 最小节点 
	node *pmin = NULL;   			//保存最小节点的前一个节点
	node *p  = head->next;	//保存正在比较的前一个节点
	node *p1 = head->next->next;	// 保存正在比较的结点 
	//新链表的建立 
	node* phead = (node*)malloc(sizeof(node));
	phead->next = NULL; 
	node* real  = phead; 
	
	
	while( head->next ){ //退出的条件是head后没有节点
		p  = head->next; 
		p1 = head->next->next; 	// 保存正在比较的结点
		min = head->next;//假设此时第一个结点数据最小
		pmin = head; 
		while( p1 ){
			switch(a){
				case 1:if(  strcmp(min->dd.num , p1->dd.num) > 0 ){
							pmin = p;//保存最小节点的前一个节点
							min = p1;//找到小的就放在min中
						}break;
				case 2:if( min->dd.chinese > p1->dd.chinese ){
							pmin = p;//保存最小节点的前一个节点
							min = p1;//找到小的就放在min中
						}break;
				case 3:if( min->dd.math > p1->dd.math ){
							pmin = p;//保存最小节点的前一个节点
							min = p1;//找到小的就放在min中
						}break;
				case 4:if( min->dd.english > p1->dd.english ){
							pmin = p;//保存最小节点的前一个节点
							min = p1;//找到小的就放在min中
						}break;
				case 5:if( min->dd.PE	 > p1->dd.PE	 ){
							pmin = p;//保存最小节点的前一个节点
							min = p1;//找到小的就放在min中
						}break;
			}
			p  = p->next;//正在比较的前一个节点后移 
			p1 = p1->next;//正在比较节点后移 
		}
		pmin->next = min->next;
		//将min连接到新链表
		real->next = min;
		real = min;
		free(head);
	}
	return phead;//返回排序好的链表
}
