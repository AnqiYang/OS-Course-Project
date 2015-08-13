#include "apilib.h"

void addPath(int** wall, int x, int y, int win);
void HariMain(void)
{
	char *buf;
	int win, i, x, y;
	int wall[30][30];
	int ii, jj;
	for(ii = 0; ii < 30; ii++){
        for(jj = 0; jj < 30; jj++){
            wall[ii][jj] = 0;
        }
	}
	api_initmalloc();
	buf = api_malloc(300 * 300);
	win = api_openwin(buf, 300, 300, -1, "walk");
	api_boxfilwin(win, 4, 24, 295, 295, 0 );
	x = 280;
	y = 280;
	api_putstrwin(win, x, y, 3 , 1, "*");
    api_putstrwin(win, 290, 280, 5 , 1, "<");
	int ix, jx;
	//col1
	for(ix = 1 ; ix < 7; ix++)
    {
        for(jx = 30; jx < 290; jx += 10)
        {
            api_putstrwin(win, ix * 20, jx,  10 /* 绿 */, 1, "*");
            int wx = ix * 2, wy = jx / 10;
            wall[wx][wy] = 1;
        }
    }
    
    //col2
    for(ix = 1 ; ix < 7; ix++)
    {
        for(jx = 30; jx < 290; jx += 10)
        {
            api_putstrwin(win, 290-ix * 20, jx,  10 /* 绿 */, 1, "*");
            int wx = 29 - 2*ix, wy = jx / 10;
            wall[wx][wy] = 1;
        }
    }
    //row1
    for(jx = 1; jx < 5; jx++)
    {
        for(ix = 10; ix < 280; ix += 10)
        {
            api_putstrwin(win, ix, jx * 20, 10 /* 绿 */, 1, "*");
            int wx = ix / 10, wy = jx * 2;
            wall[wx][wy] = 1;
        }
    }
    //row2
    for(jx = 1; jx < 5; jx++)
    {
        for(ix = 10; ix < 280; ix += 10)
        {
            api_putstrwin(win, ix, 290-jx*20, 10 /* 绿 */, 1, "*");
            int wx = ix/10, wy = 29 - jx*2;
            wall[wx][wy] = 1;
        }
    }

    for(ix = 100; ix <= 150; ix += 10)
    {
        api_putstrwin(win, 140, ix, 10 /* 绿 */, 1, "*");
        int wx = 14, wy = ix/10;
        wall[wx][wy] = 1;
    }

    api_putstrwin(win, 150, 100, 10 /* 绿 */, 1, "*");
    wall[15][10] = 1;

    for(ix = 150; ix <= 190; ix += 10)
    {
        api_putstrwin(win, 150, ix, 10 /* 绿 */, 1, "*");
        int wx = 15, wy = ix/10;
        wall[wx][wy] = 1;
    }

    api_putstrwin(win, 140, 190, 10 /* 绿 */, 1, "*");
    wall[14][19] = 1;

    int p, q;
    for(p = 180; p < 280; p += 20 )
    {
        for(q = 40; q < 100; q += 20)
        {
            api_putstrwin(win, p, q, 0 /* 绿 */, 1, "*");
            wall[p/10][q/10] = 0;
        }
        for(q = 210; q < 270; q += 20)
        {
            api_putstrwin(win, p, q, 0 /* 绿 */, 1, "*");
            wall[p/10][q/10] = 0;
        }
    }

    //Add path
    api_putstrwin(win, 270, 90, 0, 1, "*");
    wall[27][9] = 0;
    api_putstrwin(win, 250, 200, 0, 1, "*");
    wall[25][20] = 0;
    api_putstrwin(win, 230, 90, 0, 1, "*");
    wall[23][9] = 0;
    api_putstrwin(win, 210, 200, 0, 1, "*");
    wall[21][20] = 0;
    api_putstrwin(win, 190, 90, 0 , 1, "*");
    wall[19][9] = 0;
    api_putstrwin(win, 170, 200, 0 , 1, "*");
    wall[17][20] = 0;

    api_putstrwin(win, 140, 210, 0 , 1, "*");
    wall[14][21] = 0;
    api_putstrwin(win, 150, 210, 0 , 1, "*");
    wall[15][21] = 0;

    api_putstrwin(win, 140, 80, 0 , 1, "*");
    wall[14][8] = 0;
    api_putstrwin(win, 150, 80, 0 , 1, "*");
    wall[15][8] = 0;

    for(p = 40; p < 160; p += 40)
    {
        for(q = 130; q < 170; q += 10)
        {
            api_putstrwin(win, p, q, 0 , 1, "*");
            wall[p/10][q/10] = 0;
        }
    }

    for(p = 60; p < 140; p += 40)
    {
        for(q = 90; q < 130; q += 10)
        {
            api_putstrwin(win, p, q, 0 , 1, "*");
            wall[p/10][q/10] = 0;
        }
        for(q = 170; q < 210; q += 10)
        {
            api_putstrwin(win, p, q, 0 , 1, "*");
            wall[p/10][q/10] = 0;
        }
    }

    for(p = 50; p <= 260; p += 210)
    {
        for(q = 40; q <= 120; q += 20)
        {
            api_putstrwin(win, q, p, 0 , 1, "*");
            wall[q/10][p/10] = 0;
        }
    }

    for(p = 40; p < 260; p += 10)
    {
        api_putstrwin(win, 30, p, 0 , 1, "*");
        wall[3][p/10] = 0;    
    }
    api_putstrwin(win, 150, 60, 0 , 1, "*");
    wall[15][6] = 0;

    api_putstrwin(win, 140, 230, 0 , 1, "*");
    wall[14][23] = 0;

    api_putstrwin(win, 120, 240, 0 , 1, "*");
    wall[12][24] = 0;

    api_putstrwin(win, 110, 230, 0 , 1, "*");
    wall[11][23] = 0;

    api_putstrwin(win, 100, 220, 0 , 1, "*");
    wall[10][22] = 0;

    api_putstrwin(win, 90, 230, 0 , 1, "*");
    wall[9][23] = 0;

    api_putstrwin(win, 80, 240, 0 , 1, "*");
    wall[8][24] = 0;

    api_putstrwin(win, 70, 230, 0 , 1, "*");
    wall[7][23] = 0;    

    api_putstrwin(win, 60, 220, 0 , 1, "*");
    wall[6][22] = 0;    

    api_putstrwin(win, 50, 230, 0 , 1, "*");
    wall[5][23] = 0;     

    api_putstrwin(win, 50, 250, 0 , 1, "*");
    wall[5][25] = 0;    

    //add wall
    api_putstrwin(win, 90, 130, 10 , 1, "*");
    wall[9][13] = 1;

    api_putstrwin(win, 50, 120, 10 , 1, "*");
    wall[5][12] = 1;

    api_putstrwin(win, 50, 170, 10 , 1, "*");
    wall[5][17] = 1;

    api_putstrwin(win, 40, 50, 10 , 1, "*");
    wall[4][5] = 1;

    api_putstrwin(win, 30, 30, 5 , 1, "<");

	for (;;) {
		i = api_getkey(1);
		api_putstrwin(win, x, y, 0 /* 黒 */, 1, "*"); /* 黒で消す */
		if (i == '4' && x >=  10 && wall[x/10-1][y/10] == 0) { x -= 10; }
		if (i == '6' && x <= 290 && wall[x/10+1][y/10] == 0) { x += 10; }
		if (i == '8' && y >=  30 && wall[x/10][(y-10)/10] == 0) { y -= 10; }
		if (i == '2' && y <=  290 && wall[x/10][(y+10)/10] == 0) { y += 10; }
		if (i == 0x0a) { break; } /* Enterで終了 */
		api_putstrwin(win, x, y, 3 /* 黄 */, 1, "*");
        if (x == 30 && y == 30)
            break;
	}
    for(;;) {
        api_putstrwin(win, 130, 130,  3 /* 黒 */, 20, "YOU WIN");
        api_putstrwin(win, 100, 170,  5 /* 黒 */, 20, "PRESS Q TO QUIT");
        i = api_getkey(1);
        if( i == 'q')
            break; 
    }
	api_closewin(win);
	api_end();
}

