#ifndef WIN_CONTROL
#define WIN_CONTROL


#include<windows.h>
#include<stdio.h>
#include<stdbool.h>

#define WHITE   "\e[1;37m"
#define uWHITE  "\e[4;37m"
#define RED     "\e[1;31m"
#define GREEN   "\e[1;32m"
#define YELLOW  "\e[1;93m"
#define BLUE    "\e[1;34m"
#define MAGENTA "\e[1;35m"
#define CYAN    "\e[1;36m"
#define RESET   "\e[0m"
#define SET_COLOR(color) printf(color)

void set_screen(void);
void gotoxy(int,int);
void create_border(void);
void HideCursor(bool);
void loading(void);
void menu_box(void);
void Team(void);
void quit_quiz(void);
void opt_box(char[],char[],char[],char[]);




void set_screen(void){
        // maximize window
    ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);
    
    HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hstdout, &csbi);

    csbi.dwSize.X = csbi.dwMaximumWindowSize.X;
    csbi.dwSize.Y = csbi.dwMaximumWindowSize.Y;
    SetConsoleScreenBufferSize(hstdout, csbi.dwSize);

    HWND x = GetConsoleWindow();
    ShowScrollBar(x, SB_BOTH, FALSE);

    CONSOLE_SCREEN_BUFFER_INFOEX info = {0};
    int width, height;
    HANDLE hConsole = NULL;

    
    SetConsoleTitle("INDIAN CULTURE AND TRADITION: The Basis Behind Its Elements");

}

void gotoxy(int x,int y){
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void create_border(void){
    SET_COLOR(MAGENTA);

    int i;
    for(int i=5;i<205;++i){
        gotoxy(i,2);
        printf("\xB2");
        gotoxy(i,47);
        printf("\xB2");
    }
    for(int i=2;i<48;++i){
        gotoxy(4,i);
        printf("\xB2\xB2");
        gotoxy(205,i);
        printf("\xB2\xB2");
    }
}

void HideCursor(bool key){
    CONSOLE_CURSOR_INFO info;
    info.dwSize=100;
    info.bVisible=key;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&info);
}

void loading(void){
    size_t i=0;
    gotoxy(102,34);
    printf("LOADING");
    for(i=0;i<50;++i){
        gotoxy(80+i,35);
        printf("%c",219);
        Sleep(60);
    }
    Sleep(30);
}

void menu_box(void){
    int i;
    gotoxy(60,15);
    printf("%c",201);
    for(int i=1;i<100;++i){
        gotoxy(60+i,15);
        printf("%c",205);
    }
    gotoxy(160,15);
    printf("%c",187);
    for(int i=1;i<15;++i){
        gotoxy(60,15+i);
        printf("%c",186);
        gotoxy(160,15+i);
        printf("%c",186);
    }
    gotoxy(60,30);
    printf("%c",200);
    for(int i=1;i<100;++i){
        gotoxy(60+i,30);
        printf("%c",205);
    }
    gotoxy(160,30);
    printf("%c",188);
}

void quit_quiz(void){
    system("cls");
    system("color 0f");
    create_border();
    SET_COLOR(RED);
    Team();
    int i;
    gotoxy(60,15);
    printf("%c",201);
    for(int i=1;i<100;++i){
        gotoxy(60+i,15);
        printf("%c",205);
    }
    gotoxy(160,15);
    printf("%c",187);
    for(int i=1;i<25;++i){
        gotoxy(60,15+i);
        printf("%c",186);
        gotoxy(160,15+i);
        printf("%c",186);
    }
    gotoxy(60,40);
    printf("%c",200);
    for(int i=1;i<100;++i){
        gotoxy(60+i,40);
        printf("%c",205);
    }
    gotoxy(160,40);
    printf("%c",188);

    gotoxy(105,18);
    printf("CREDITS");
    gotoxy(85,21);
    printf("Data Processor: ");
    gotoxy(110,23);
    printf("Amrit Raj");
    gotoxy(110,24);
    printf("Abhishek Verma");
    gotoxy(110,25);
    printf("Mehtab Salgotra");
    gotoxy(110,26);
    printf("Srishti Raj");
    gotoxy(85,29);
    printf("Desingned And Developed By:");
    gotoxy(110,31);
    printf("Shubham Kumar");
    gotoxy(80,36);
    printf("Thank You from team CORE5. Press any key to quit game.");
    getch();
    exit(1);
}

void opt_box(char A[], char B[], char C[], char D[]){
    gotoxy(50,18);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    gotoxy(50,19);
    printf("%c  A. %-45s%c",186,A,186);
    gotoxy(50,20);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

    gotoxy(120,18);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    gotoxy(120,19);
    printf("%c  B. %-45s%c",186,B,186);
    gotoxy(120,20);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
    gotoxy(50,23);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    gotoxy(50,24);
    printf("%c  C. %-45s%c",186,C,186);
    gotoxy(50,25);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    
    gotoxy(120,23);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    gotoxy(120,24);
    printf("%c  D. %-45s%c",186,D,186);
    gotoxy(120,25);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

}

bool search_Qno(int qno,int *q_asked){
    for(int i=0;i<10;i++){
        if(q_asked[i]==qno)
            return true;
    }
    return false;
}

#endif