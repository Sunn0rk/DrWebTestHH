#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

void TrimRight1(char *s) // через цикл
{
    int i = 1;
    while (s[strlen(s) - i] == ' ')
    {
        i++;
    }
    s[strlen(s) - i + 1] = '\0';
}

void TrimRightRec(char *s) // через рекурсию
{
    if (s[strlen(s) - 1] == ' ')

    {
        s[strlen(s) - 1] = '\0';
        TrimRightRec(s);
    }
}

void TestTrim()
{
    // то что было

    char s1[] = "qwerty      ";
    char s2[] = "qwerty qwerty";
    char s3[] = " qwerty ";
    char s4[] = "qwerty";
    char s5[] = "  qwerty  qwerty      ";

    // то что должно быть

    char p1[] = "qwerty";
    char p2[] = "qwerty qwerty";
    char p3[] = " qwerty";
    char p4[] = "qwerty";
    char p5[] = "  qwerty  qwerty      ";

    // обрезка

    TrimRight1(s1);
    TrimRight1(s2);
    TrimRight1(s3);
    TrimRight1(s4);
    TrimRight1(s5);

    // assert
    assert(strcmp(s1, p1) == 0);
    cout << "Test1 completed" << endl;
    assert(strcmp(s2, p2) == 0);
    cout << "Test2 completed" << endl;
    assert(strcmp(s3, p3) == 0);
    cout << "Test3 completed" << endl;
    assert(strcmp(s4, p4) == 0);
    cout << "Test4 completed" << endl;
    assert(strcmp(s5, p5) == -1);
    cout << "Test5 completed" << endl;
}

int main()
{
    TestTrim();

    return 0;
}
