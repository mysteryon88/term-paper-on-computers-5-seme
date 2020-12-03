#include "LibFun.h"

void ScriptMTXT() {
    //оценка производительности для памяти
    //double PerformanceEvaluationMemory[Type][Operations];
    vector < vector <float> > PerformanceEvaluationMemory(Type, vector <float>(Operations));
    //оценка производительности для регистров
    //double PerformanceEvaluationRegistr[Type][Operations];
    vector < vector <float> > PerformanceEvaluationRegistr(Type, vector <float>(Operations));
    cout << "Рассчеты начались" << endl;
    cout << "Считаем для int" << endl;
    //INT
    PerformanceEvaluationMemory[0][0] = IntMemoryAdd();
    PerformanceEvaluationMemory[0][1] = IntMemorySub();
    PerformanceEvaluationMemory[0][2] = IntMemoryMul();
    PerformanceEvaluationMemory[0][3] = IntMemoryDiv();
    PerformanceEvaluationRegistr[0][0] = IntRegistrAdd();
    PerformanceEvaluationRegistr[0][1] = IntRegistrSub();
    PerformanceEvaluationRegistr[0][2] = IntRegistrMul();
    PerformanceEvaluationRegistr[0][3] = IntRegistrDiv();
    cout << "Считаем для short" << endl;
    //SHORT
    PerformanceEvaluationMemory[1][0] = ShortMemoryAdd();
    PerformanceEvaluationMemory[1][1] = ShortMemorySub();
    PerformanceEvaluationMemory[1][2] = ShortMemoryMul();
    PerformanceEvaluationMemory[1][3] = ShortMemoryDiv();
    PerformanceEvaluationRegistr[1][0] = ShortRegistrAdd();
    PerformanceEvaluationRegistr[1][1] = ShortRegistrSub();
    PerformanceEvaluationRegistr[1][2] = ShortRegistrMul();
    PerformanceEvaluationRegistr[1][3] = ShortRegistrDiv();
    cout << "Считаем для double" << endl;
    //DOUBLE
    PerformanceEvaluationMemory[2][0] = DoubleMemoryAdd();
    PerformanceEvaluationMemory[2][1] = DoubleMemorySub();
    PerformanceEvaluationMemory[2][2] = DoubleMemoryMul();
    PerformanceEvaluationMemory[2][3] = DoubleMemoryDiv();
    PerformanceEvaluationRegistr[2][0] = DoubleRegistrAdd();
    PerformanceEvaluationRegistr[2][1] = DoubleRegistrSub();
    PerformanceEvaluationRegistr[2][2] = DoubleRegistrMul();
    PerformanceEvaluationRegistr[2][3] = DoubleRegistrDiv();
    cout << "Считаем для float" << endl;
    //FLOAT
    PerformanceEvaluationMemory[3][0] = FloatMemoryAdd();
    PerformanceEvaluationMemory[3][1] = FloatMemorySub();
    PerformanceEvaluationMemory[3][2] = FloatMemoryMul();
    PerformanceEvaluationMemory[3][3] = FloatMemoryDiv();
    PerformanceEvaluationRegistr[3][0] = FloatRegistrAdd();
    PerformanceEvaluationRegistr[3][1] = FloatRegistrSub();
    PerformanceEvaluationRegistr[3][2] = FloatRegistrMul();
    PerformanceEvaluationRegistr[3][3] = FloatRegistrDiv();
    cout << "Считаем для char" << endl;
    //CHAR
    PerformanceEvaluationMemory[4][0] = CharMemoryAdd();
    PerformanceEvaluationMemory[4][1] = CharMemorySub();
    PerformanceEvaluationMemory[4][2] = CharMemoryMul();
    PerformanceEvaluationMemory[4][3] = CharMemoryDiv();
    PerformanceEvaluationRegistr[4][0] = CharRegistrAdd();
    PerformanceEvaluationRegistr[4][1] = CharRegistrSub();
    PerformanceEvaluationRegistr[4][2] = CharRegistrMul();
    PerformanceEvaluationRegistr[4][3] = CharRegistrDiv();
  
    vector<string> variables = { "Y_int", "Y_short", "Y_double", "Y_float", "Y_char" };
    vector<string> variablesdata = { "Int", "Short", "Double", "Float", "Char" };
    vector<string> operation = { "Сложение", "Вычитание", "Умножение", "Деление" };
    
    ofstream out("ScriptBar.m");

    for (short i = 0; i < Type; i++) {
        out << variables[i] << " = [";
        for (short j = 0; j < Operations; j++) {
            out  << PerformanceEvaluationRegistr[i][j] << " " << PerformanceEvaluationMemory[i][j];
            j == Operations - 1 ? out << "" : out << "; ";
        }
        out << "];" << endl;
    }

    out << "X = categorical({'Сложение','Вычитание','Умножение','Деление'});" << endl;
    out << "figure('Name', 'Int в регистрах и памяти', 'NumberTitle', 'off');" << endl;
    out << "bar(X, Y_int)" << endl;
    out << "legend({ 'В регистрах', 'В памяти' });" << endl;
    out << "figure('Name', 'Short в регистрах и памяти', 'NumberTitle', 'off');" << endl;
    out << "bar(X, Y_short)" << endl;
    out << "legend({ 'В регистрах', 'В памяти' });" << endl;
    out << "figure('Name', 'Double в регистрах и памяти', 'NumberTitle', 'off');" << endl;
    out << "bar(X, Y_double)" << endl;
    out << "legend({ 'В регистрах', 'В памяти' });" << endl;
    out << "figure('Name', 'Float в регистрах и памяти', 'NumberTitle', 'off');" << endl;
    out << "bar(X, Y_float)" << endl;
    out << "legend({ 'В регистрах', 'В памяти' });" << endl;
    out << "figure('Name', 'Char в регистрах и памяти', 'NumberTitle', 'off');" << endl;
    out << "bar(X, Y_char)" << endl;
    out << "legend({ 'В регистрах', 'В памяти' });" << endl;

    out.close();
  
    ofstream outdata("Data.txt");

    outdata << "Данные для сравнения" << endl << endl;
    for (short i = 0; i < Type; i++) {
        outdata << variablesdata[i] << " в регистрах и памяти соответственно" << endl;
        for (short j = 0; j < Operations; j++) {
            outdata << operation[j] << ": ";
            outdata << PerformanceEvaluationRegistr[i][j] << " ";
            PerformanceEvaluationRegistr[i][j] < PerformanceEvaluationMemory[i][j] ? outdata << "<" : outdata << ">";
            outdata << " " << PerformanceEvaluationMemory[i][j] << endl;
        }
        outdata << endl;
    }
    outdata.close();
}