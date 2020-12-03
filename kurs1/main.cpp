#include "LibFun.h"

//значения операндов 
int a_i(10), b_i(2);  // 0
short a_s(10), b_s(2); // 1
double a_d(10.3), b_d(1.5); // 2
float a_f(134.5f), b_f(1.45f); // 3
char a_c('e'), b_c('('); // 4

int main()
{ 
    setlocale(LC_ALL,"Rus");
    ScriptMTXT(); //Анализ данных
    cout << "Скрипт сформирован, импорт завершен" << endl;
    cout << "Графики можно посмотреть в программном пакете MatLab" << endl;
    system("Pause");
    return 0;
}

