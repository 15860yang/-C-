#include<stdio.h>
#include<stdlib.h>
#include"paixuwenjan.h"
		
node* sorrtChinese(node* head,int a){
	node *min = NULL; 		// ��С�ڵ� 
	node *pmin = NULL;   			//������С�ڵ��ǰһ���ڵ�
	node *p  = head->next;	//�������ڱȽϵ�ǰһ���ڵ�
	node *p1 = head->next->next;	// �������ڱȽϵĽ�� 
	//������Ľ��� 
	node* phead = (node*)malloc(sizeof(node));
	phead->next = NULL; 
	node* real  = phead; 
	
	
	while( head->next ){ //�˳���������head��û�нڵ�
		p  = head->next; 
		p1 = head->next->next; 	// �������ڱȽϵĽ��
		min = head->next;//�����ʱ��һ�����������С
		pmin = head; 
		while( p1 ){
			switch(a){
				case 1:if(  strcmp(min->dd.num , p1->dd.num) > 0 ){
							pmin = p;//������С�ڵ��ǰһ���ڵ�
							min = p1;//�ҵ�С�ľͷ���min��
						}break;
				case 2:if( min->dd.chinese > p1->dd.chinese ){
							pmin = p;//������С�ڵ��ǰһ���ڵ�
							min = p1;//�ҵ�С�ľͷ���min��
						}break;
				case 3:if( min->dd.math > p1->dd.math ){
							pmin = p;//������С�ڵ��ǰһ���ڵ�
							min = p1;//�ҵ�С�ľͷ���min��
						}break;
				case 4:if( min->dd.english > p1->dd.english ){
							pmin = p;//������С�ڵ��ǰһ���ڵ�
							min = p1;//�ҵ�С�ľͷ���min��
						}break;
				case 5:if( min->dd.PE	 > p1->dd.PE	 ){
							pmin = p;//������С�ڵ��ǰһ���ڵ�
							min = p1;//�ҵ�С�ľͷ���min��
						}break;
			}
			p  = p->next;//���ڱȽϵ�ǰһ���ڵ���� 
			p1 = p1->next;//���ڱȽϽڵ���� 
		}
		pmin->next = min->next;
		//��min���ӵ�������
		real->next = min;
		real = min;
		free(head);
	}
	return phead;//��������õ�����
}
