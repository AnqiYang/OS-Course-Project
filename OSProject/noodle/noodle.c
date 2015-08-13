#include <stdio.h>
#include "apilib.h"

#define COL8_000000		0
#define COL8_FF0000		1
#define COL8_00FF00		2
#define COL8_FFFF00		3
#define COL8_0000FF		4
#define COL8_FF00FF		5
#define COL8_00FFFF		6
#define COL8_FFFFFF		7
#define COL8_C6C6C6		8
#define COL8_840000		9
#define COL8_008400		10
#define COL8_848400		11
#define COL8_000084		12
#define COL8_840084		13
#define COL8_008484		14
#define COL8_848484		15

void HariMain(void)
{
	static char keytable0[10] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
	};


	char *buf, s[12], settime[8];
	int ii;
	for(ii = 0; ii < 8; ii++)
	{
		settime[ii] = 0;
	}
	int win, timer, sec = 0, min = 0, hou = 0 , k = 0;
	api_initmalloc();
	buf = api_malloc(150 * 50);
	win = api_openwin(buf, 150, 100, -1, "   timer");
	timer = api_alloctimer();
	api_inittimer(timer, 128);

	for (;;) {
		sprintf(s, "%5d:%02d:%02d", hou, min, sec);
		api_boxfilwin(win, 28, 27, 115, 41, COL8_FFFFFF);
		api_putstrwin(win, 28, 27, COL8_000000, 11, s);
		

		int x0 = 28, y0 = 60, sx = 76, sy = 13;
		int x1 = x0 + sx, y1 = y0 + sy;
		api_boxfilwin(win, x0 - 2, y0 - 3, x1 + 1, y0 - 3, COL8_848484);
		api_boxfilwin(win, x0 - 3, y0 - 3, x0 - 3, y1 + 1, COL8_848484);
		api_boxfilwin(win, x0 - 3, y1 + 2, x1 + 1, y1 + 2, COL8_FFFFFF);
		api_boxfilwin(win, x1 + 2, y0 - 3, x1 + 2, y1 + 2, COL8_FFFFFF);
		api_boxfilwin(win, x0 - 1, y0 - 2, x1 + 0, y0 - 2, COL8_FFFFFF);
		api_boxfilwin(win, x0 - 2, y0 - 2, x0 - 2, y1 + 0, COL8_FFFFFF);
		api_boxfilwin(win, x0 - 2, y1 + 1, x1 + 0, y1 + 1, COL8_C6C6C6);
		api_boxfilwin(win, x1 + 1, y0 - 2, x1 + 1, y1 + 1, COL8_C6C6C6);
		api_boxfilwin(win, x0 - 1, y0 - 1, x1 + 0, y1 + 0, COL8_FFFFFF);
		api_putstrwin(win, 28, 60, COL8_000000, 8, settime);

		if (k < 6){
			/*输入时间*/
			int i = api_getkey(1);
			if ((48 <= i) && (i <= 57)){
				settime[k] = keytable0[i - 48];
				k++;
			}
			if (5 == k){
				hou = 10 * (settime[0] - 48) + (settime[1] - 48);
				min = 10 * (settime[2] - 48) + (settime[3] - 48);
				sec = 10 * (settime[4] - 48) + (settime[5] - 48);
			}
		}
		else{
			/*开始倒计时*/
			api_settimer(timer, 100);	/* 1s */
			if (api_getkey(1) != 128) {
				break;
			}
			sec--;
			if (sec == 0) {
				sec = 60;
				min--;
				if (min == 0) {
					min = 60;
					hou--;
				}
			}
		}	
	}
	api_end();

}
