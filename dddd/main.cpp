#include <iostream>
#include <random>
#include <Windows.h>
#include <string>

using namespace std;


int main()
{
    int height;
    int fore;
    string temp;
    cout << "Enter height:";
    cin >> height;
    for (int i = 0; i < height; i++)
    {
        temp = "color ";
        for (int i = 0; i < 2; i++)
        {
            fore = rand() % 16;
            if (fore >= 10)
            {
                temp += 'A' + fore - 10;
            }
            else
            {
                temp += to_string(fore);
            }
        }
        system(temp.c_str());
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        int columns, rows;
        columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
        char blah;
        for (int i = 0; i < columns; i++)
        {
            blah = rand() % 255 + 1;
            cout << blah;
        }
        cout << "\n";
    }
    system("pause");
    return 0;
}

//#include <iostream>
//#define NOMINMAX 
//#include <Windows.h>
//#include <random>
//
//using namespace std;
//void red()
//{
//    HANDLE hStdout;
//    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hStdout, FOREGROUND_RED | FOREGROUND_INTENSITY);
//}
//void blue()
//{
//    HANDLE hStdout;
//    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
//}
//void green()
//{
//    HANDLE hStdout;
//    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hStdout, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
//}
//void white()
//{
//    HANDLE hStdout;
//    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
//}
//int main()
//{
//    int height;
//    int num;
//    HANDLE hStdout;
//
//    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
//
//    cout << "Enter height:";
//    cin >> height;
//    for (int i = 0; i < height; i++)
//    {
//        num = rand() % 4;
//        if (num == 0)
//        {
//            blue();
//        }
//        else if (num == 1)
//        {
//            red();
//        }
//        else if (num == 2)
//        {
//            green();
//        }
//        else
//        {
//            white();
//        }
//        CONSOLE_SCREEN_BUFFER_INFO csbi;
//        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
//        int columns, rows;
//        columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
//        rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
//        char blah;
//        for (int i = 0; i < columns; i++)
//        {
//            blah = rand() % 256 + 1;
//            cout << blah;
//        }
//        cout << "\n";
//    }
//
//
//    // Back to white
//    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
//    system("pause");
//    return 0;
//}