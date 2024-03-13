#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

void TrimRight(char *s) // через цикл
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

    char s4[] = "qwerty      ";
    char s5[] = "qwerty qwerty";
    char s6[] = " qwerty ";

    // то что должно быть

    char p1[] = "qwerty";
    char p2[] = "qwerty qwerty";
    char p3[] = " qwerty";

    char p4[] = "qwerty";
    char p5[] = "qwerty qwerty";
    char p6[] = " qwerty";

    // обрезка в двух вариантах

    TrimRight(s1);
    TrimRight(s2);
    TrimRight(s3);

    TrimRightRec(s4);
    TrimRightRec(s5);
    TrimRightRec(s6);

    // assert
    assert(strcmp(s1, p1) == 0);
    cout << "Test1 completed" << endl;
    assert(strcmp(s2, p2) == 0);
    cout << "Test2 completed" << endl;
    assert(strcmp(s3, p3) == 0);
    cout << "Test3 completed" << endl;

    assert(strcmp(s4, p4) == 0);
    cout << "Test4 completed" << endl;
    assert(strcmp(s5, p5) == 0);
    cout << "Test5 completed" << endl;
    assert(strcmp(s6, p6) == 0);
    cout << "Test6 completed" << endl;
}

int main()
{
    TestTrim();

    return 0;
}
