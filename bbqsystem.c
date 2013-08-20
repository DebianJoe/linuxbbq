# include <ncurses.h>

int main ()
{
    int ch;                 //declare ch
    initscr();              //initialize curses
    raw();                  //line buffering disabled
    keypad(stdscr, TRUE);   //F1, F2, etc activated
    noecho();

    printw("BBQ System Tweak Tool\n");
    printw("First, let's check choices.\n");
    ch = getch();   //this is why we call raw(), to not have
                    //have to press "return" after every 
                    //keypress
    if(ch == KEY_F(1)){
        printw("This is where I'll put some help");
    }
    //obviously need to spawn some windows and add logic
    else
    {
        printw("we'll echo our choices here\n");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }
    refresh();
    getch();
    endwin();

    return 0;
}
