#include "apilib.h"

void HariMain(void)
{
	int win;
	char *buf;
	char *s;
	api_initmalloc();
	buf = api_malloc(800 * 700);
	win = api_openwin(buf, 800, 700, -1, "                                          ChinaCalendar");
	

	api_boxfilwin(win,  40, 40, 210, 210, 6);
	api_boxfilwin(win,  220,40, 390, 210, 7);
	api_boxfilwin(win,  400,40, 580, 210, 6);
	api_boxfilwin(win,  590,40, 760, 210, 7);
	api_boxfilwin(win,  40, 250, 210, 450, 7);
	api_boxfilwin(win,  220,250, 390, 450, 6);
	api_boxfilwin(win,  400,250, 580, 450, 7);
	api_boxfilwin(win,  590,250, 760, 450, 6);
	api_boxfilwin(win,  40, 485, 210, 665, 6);
	api_boxfilwin(win,  220,485, 390, 665, 7);
	api_boxfilwin(win,  400,485, 580, 665, 6);
	api_boxfilwin(win,  590,485, 760, 665, 7);



	s="         2015-01                2015-02                2015-03              2015-04     ";
	api_putstrwin(win, 28, 40, 0 /* çï */,1000, s);
	s="   S  M  T  W  T  F  S    S  M  T  W  T  F  S    S  M  T  W  T  F  S    S  M  T  W  T  F  S   ";
	api_putstrwin(win, 28, 65, 0 /* çï */,1000, s);
	s="               1  2  3    1  2  3  4  5  6  7    1  2  3  4  5  6  7             1  2  3  4";
	api_putstrwin(win, 28, 90, 0 /* çï */,1000, s);
	s="   4  5  6  7  8  9 10    8  9 10 11 12 13 14    8  9 10 11 12 13 14    5  6  7  8  9 10 11";
	api_putstrwin(win, 28, 115, 0 /* çï */,1000, s);
	s="  11 12 13 14 15 16 17   15 16 17 18 19 20 21   15 16 17 18 19 20 21   12 13 14 15 16 17 18";
	api_putstrwin(win, 28, 140, 0 /* çï */,1000, s);
	s="  18 19 20 21 22 23 24   22 23 24 25 26 27 28   22 23 24 25 26 27 28   19 20 21 22 23 24 25";
	api_putstrwin(win, 28, 165, 0 /* çï */,1000, s);
	s="  25 26 27 28 29 30 31                          29 30 31               26 27 28 29 30";
	api_putstrwin(win, 28, 190, 0 /* çï */,1000, s);
	

	s="         2015-05                2015-06                2015-07              2015-08     ";
	api_putstrwin(win, 28, 250, 0 /* çï */,1000, s);
	s="   S  M  T  W  T  F  S    S  M  T  W  T  F  S    S  M  T  W  T  F  S    S  M  T  W  T  F  S   ";
	api_putstrwin(win, 28, 275, 0 /* çï */,1000, s);
	s="                  1  2       1  2  3  4  5  6             1  2  3  4                      1";
	api_putstrwin(win, 28, 300, 0 /* çï */,1000, s);
	s="   3  4  5  6  7  8  9   7   8  9 10 11 12 13    5  6  7  8  9 10 11    2  3  4  5  6  7  8";
	api_putstrwin(win, 28, 325, 0 /* çï */,1000, s);
	s="  10 11 12 13 14 15 16   14 15 16 17 18 19 20   12 13 14 15 16 17 18    9 10 11 12 13 14 15";
	api_putstrwin(win, 28, 350, 0 /* çï */,1000, s);
	s="  17 18 19 20 21 22 23   21 22 23 24 25 26 27   19 20 21 22 23 24 25   16 17 18 19 20 21 22";
	api_putstrwin(win, 28, 375, 0 /* çï */,1000, s);
	s="  24 25 26 27 28 29 30   28 29 30               26 27 28 29 30 31      23 24 25 26 27 28 29";
	api_putstrwin(win, 28, 400, 0 /* çï */,1000, s);
	s="  31                                                                   30 31";
	api_putstrwin(win, 28, 425, 0 /* çï */,1000, s);


	s="         2015-09                2015-10                2015-11              2015-12     ";
	api_putstrwin(win, 28, 485, 0 /* çï */,1000, s);
	s="   S  M  T  W  T  F  S    S  M  T  W  T  F  S    S  M  T  W  T  F  S    S  M  T  W  T  F  S   ";
	api_putstrwin(win, 28, 510, 0 /* çï */,1000, s);
        s="         1  2  3  4  5                1  2  3    1  2  3  4  5  6  7          1  2  3  4  5";
	api_putstrwin(win, 28, 535, 0 /* çï */,1000, s);
	s="   6  7  8  9 10 11 12    4  5  6  7  8  9 10    8  9 10 11 12 13 14    6  7  8  9 10 11 12";
	api_putstrwin(win, 28, 560, 0 /* çï */,1000, s);
	s="  13 14 15 16 17 18 19   11 12 13 14 15 16 17   15 16 17 18 19 20 21   13 14 15 16 17 18 19";
	api_putstrwin(win, 28, 585, 0 /* çï */,1000, s);
	s="  20 21 22 23 24 25 26   18 19 20 21 22 23 24   22 23 24 25 26 27 28   20 21 22 23 24 25 26";
	api_putstrwin(win, 28, 610, 0 /* çï */,1000, s);
        s="  27 28 29 30            25 26 27 28 29 30 31   29 30                  27 28 29 30 31";
	api_putstrwin(win, 28, 635, 0 /* çï */,1000, s);
	




	for (;;) {
		if (api_getkey(1) == 0x0a) {
			break; /* EnterÇ»ÇÁbreak; */
		}
	}
	api_end();
}
