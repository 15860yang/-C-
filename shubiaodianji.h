#ifndef _shubiaodianji_
#define _shubiaodianji_

#include<windows.h>
HANDLE hInput;  /*  ��ȡ��׼�����豸��� */
INPUT_RECORD inRec;/*  �������ݼ�¼ */
DWORD numRead; /*  �����Ѷ�ȡ�ļ�¼�� */
int Y,X;/* X��Y������ */

int input();
void HideCursor();
int shubiao();
#endif