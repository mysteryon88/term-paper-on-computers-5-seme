#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <windows.h>
#include <fstream>

//перевод в секунды
#define TIME ((double)CLOCKS_PER_SEC)

using namespace std;

//кол-во итераций
const auto M = 1000000; 
//кол-во операций 
const short Operations = 4;
//кол-во типов данных
const short Type = 5;

extern int a_i, b_i;
extern float a_f, b_f;
extern char a_c, b_c;
extern short a_s, b_s;
extern double a_d, b_d;

//‘ормирование стрипта и данных
void ScriptMTXT();

//INT
double IntRegistrAdd(); 
double IntRegistrMul();
double IntRegistrSub();
double IntRegistrDiv();
double IntMemoryAdd();
double IntMemoryMul();
double IntMemorySub();
double IntMemoryDiv();

//FLOAT
double FloatRegistrAdd();
double FloatRegistrMul();
double FloatRegistrSub();
double FloatRegistrDiv();
double FloatMemoryAdd();
double FloatMemoryMul();
double FloatMemorySub();
double FloatMemoryDiv();

//DOUBLE 
double DoubleRegistrAdd();
double DoubleRegistrMul();
double DoubleRegistrSub();
double DoubleRegistrDiv();
double DoubleMemoryAdd();
double DoubleMemoryMul();
double DoubleMemorySub();
double DoubleMemoryDiv();

//CHAR
double CharMemoryAdd();
double CharMemorySub();
double CharMemoryDiv();
double CharMemoryMul();
double CharRegistrDiv();
double CharRegistrMul();
double CharRegistrSub();
double CharRegistrAdd();

//SHORT
double ShortMemoryAdd();
double ShortMemorySub();
double ShortMemoryDiv();
double ShortMemoryMul();
double ShortRegistrDiv();
double ShortRegistrMul();
double ShortRegistrSub();
double ShortRegistrAdd();