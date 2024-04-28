#pragma once
enum COLORS{BLACK=30,RED,GREEN,YELLOW,BLUE,MAGENTA,CYAN,WHITE};

void setFGcolor(int color);

void clearScreen(void);

void gotoXY(int row, int col);

void resetColor();

void setBgColor(int color);
