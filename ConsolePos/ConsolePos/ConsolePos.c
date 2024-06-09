#include <windows.h>
#include <stdio.h>

// 设置光标位置的函数
void setCursorPosition(int x, int y) {
    // 获取控制台输出句柄
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // COORD结构体保存光标的新位置
    COORD position;
    position.X = x;
    position.Y = y;

    // 设置光标位置
    SetConsoleCursorPosition(hConsole, position);
}

int b[4][4] = { 0, 0, 1, 0,
               0, 1, 1, 1,
               0, 0, 0, 0,
               0, 0, 0, 0 };

int b1[4][4] = { 0, 0, 1, 0,
               0, 0, 1, 0,
               0, 0, 1, 1,
               0, 0, 0, 0 };

int b2[4][4] = { 0, 1, 1, 0,
               0, 0, 1, 1,
               0, 0, 0, 0,
               0, 0, 0, 0 };

int main() {
    // 清屏
    int x = 10, y = 5;
    system("cls");
    setCursorPosition(0, 20);
    printf("■□─━│┃┄┅┆┇┈┉┊┋┌┍┎┏┐┑┒┓└┕┖┗┘┙┚┛├┝┞┟┠┡┢┣┤┥┦┧┨┩┪┫┬┭┮┯┰┱┲┳┴┵┶┷┸┹┺┻┼┽┾┿╀╁╂╃╄╅╆╇╈╉╊╋═║╒╓╔╕╖╗╘╙╚╛╜╝╞╟╠╡╢╣╤╥╦╧╨╩╪╫╬▁▂▃▄▅▆▇█▉▊▋▌▍▎▏");


    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            setCursorPosition(y + j * 2, x + i);
            if (b[i][j]) {
                printf("█▉");
            } else {
            }
        }
    }

    x = 14, y = 5;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            setCursorPosition(y + j * 2, x + i);
            if (b1[i][j]) {
                printf("█▉");
            }
            else {
            }
        }
    }

    x = 18, y = 5;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            setCursorPosition(y + j * 2, x + i);
            if (b2[i][j]) {
                printf("█▉");
            }
            else {
            }
        }
    }

    // 在不同位置输出文本
    setCursorPosition(10, 5);
    printf("This text is at (10, 5)");

    setCursorPosition(20, 10);
    printf("This text is at (20, 10)");

    setCursorPosition(0, 0);
    printf("Back to (0, 0)");

    setCursorPosition(0, 22);
    printf("┌───────────┬──────────┐\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("├───────────┼──────────┤\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("│           │          │\n");
    printf("└───────────┴──────────┘\n");
    

    return 0;
}
