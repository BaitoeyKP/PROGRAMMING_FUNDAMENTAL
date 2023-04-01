#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <thread>
#include <time.h>
void gotoxy(int, int);
void erase_ship(int, int);
void draw_ship(int, int);
void setcursor(bool);
void setcolor(int, int);
void draw_bullet(int, int);
void erase_bullet(int, int);
void shoot(int);
void draw_star(void);
char cursor(int, int);
void show_score(int, int);
int status[5], b_x[5], b_y[5], score = 0;

int main()
{
    srand(time(NULL));
    setcursor(0);
    char ch = ' ';
    int x = 40, y = 20, direct = 0, L = 1, R = 2, S = 5;
    for (int j = 1; j <= 20; j++)
    {
        draw_star();
    }
    show_score(x, y);
    draw_ship(x, y);
    do
    {
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 'a')
            {
                direct = L;
            }
            if (ch == 'd')
            {
                direct = R;
            }
            if (ch == 's')
            {
                direct = S;
            }
            if (ch == ' ')
            {
                for (int i = 0; i < 5; i++)
                {
                    if (status[i] == 0)
                    {
                        status[i] = 1;
                        std::thread q(Beep, 300, 100);
                        q.detach();
                        b_x[i] = x + 3;
                        b_y[i] = y - 1;
                        break;
                    }
                }
            }
            fflush(stdin);
        }
        if (direct >= 1)
        {
            if (direct == L)
            {
                if (x > 0)
                {
                    erase_ship(x, y);
                    draw_ship(--x, y);
                }
            }
            if (direct == R)
            {
                if (x < 80)
                {
                    erase_ship(x, y);
                    draw_ship(++x, y);
                }
            }
            for (int i = 0; i < 5; i++)
            {
                if (status[i])
                {
                    shoot(i);
                    show_score(x, y);
                }
            }
            Sleep(100);
        }
    } while (ch != 'x');    
    return 0;
}

void gotoxy(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void erase_ship(int x, int y)
{
    gotoxy(x, y);
    setcolor(15, 0);
    printf("       ");
}

void draw_ship(int x, int y)
{
    setcolor(2, 4);
    gotoxy(x, y);
    printf(" <-0-> ");
}

void setcursor(visible)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = 20;
    SetConsoleCursorInfo(console, &lpCursor);
}

void setcolor(int fg, int bg)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}

void draw_bullet(int x, int y)
{
    gotoxy(x, y);
    setcolor(4, 0);
    printf("|");
}

void erase_bullet(int x, int y)
{
    gotoxy(x, y);
    setcolor(0, 0);
    printf(" ");
}

void shoot(int a)
{
    erase_bullet(b_x[a], b_y[a]);
    if (b_y[a] > 1)
    {
        if (cursor(b_x[a], b_y[a] - 1) == '*')
        {
            std::thread q(Beep, 500, 100);
            q.detach();
            erase_bullet(b_x[a], --b_y[a]);
            status[a] = 0;
            draw_star();
            ++score;
        }
        else
            draw_bullet(b_x[a], --b_y[a]);
    }
    else
    {
        status[a] = 0;
    }
}

void draw_star(void)
{
    int n = rand() % 61 + 10;
    int m = rand() % 4 + 2;
    gotoxy(n, m);
    setcolor(6, 0);
    printf("*");
}

char cursor(int x, int y)
{
    HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
    char buf[2];
    COORD c = {x, y};
    DWORD num_read;
    if (!ReadConsoleOutputCharacter(hStd, (LPTSTR)buf, 1, c, (LPDWORD)&num_read))
        return '\0';
    else
        return buf[0];
}

void show_score(int x, int y)
{
    gotoxy(80, 1);
    setcolor(2, 7);
    printf("%d", score);
}