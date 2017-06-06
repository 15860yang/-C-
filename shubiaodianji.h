#ifndef _shubiaodianji_
#define _shubiaodianji_

#include<windows.h>
HANDLE hInput;  /*  获取标准输入设备句柄 */
INPUT_RECORD inRec;/*  返回数据记录 */
DWORD numRead; /*  返回已读取的记录数 */
int Y,X;/* X和Y的坐标 */

int input();
void HideCursor();
int shubiao();
#endif