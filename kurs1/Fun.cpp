#include "LibFun.h"

// в регистрах int
double IntRegistrAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov eax, a_i
            mov ebx, b_i
            add eax, ebx
            mov a_i, eax
        }
        End = clock();
        AllTime += (End - Start);
    }
   // cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double IntRegistrMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov eax, a_i
            mov ebx, b_i
            imul ebx
            mov a_i, eax
        }
        End = clock();
        AllTime += (End - Start);
    }
  //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double IntRegistrDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov eax, a_i
            mov ebx, b_i
            cwd
            idiv ebx
            mov a_i, eax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double IntRegistrSub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov eax, a_i
            mov ebx, b_i
            sub eax, ebx
            mov a_i, eax
        }
        End = clock();
        AllTime += (End - Start);
    }
   
    return (double)AllTime / TIME;
}

//в памяти int
double IntMemoryAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_i
            lea edi, b_i
            mov eax, [esi]
            add eax, [edi]
            mov[esi], eax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double IntMemoryMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_i
            lea edi, b_i
            mov eax, [esi]
            imul [edi]
            mov [esi], eax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double IntMemoryDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_i
            lea edi, b_i
            mov eax, [esi]
            cwd
            idiv [edi]
            mov [esi], eax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double IntMemorySub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_i
            lea edi, b_i
            mov eax, [esi]
            sub eax, [edi]
            mov[esi], eax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //cout << AllTime << endl;
    return (double)AllTime / TIME;
}

// в регистрах char
double CharRegistrAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov al, a_c
            mov bl, b_c
            add al, bl
            mov a_c, al
        }
        End = clock();
        AllTime += (End - Start);
    }
    // cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double CharRegistrSub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov al, a_c
            mov bl, b_c
            sub al, bl
            mov a_c, al
        }
        End = clock();
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

double CharRegistrMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov al, a_c
            mov bl, b_c
            cbw
            mul bl
            mov a_c, al
        }
        End = clock();
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

double CharRegistrDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        a_c = 'e', b_c = '(';
        Start = clock();
        __asm {
            mov al, a_c
            mov bl, b_c
            cbw
            idiv bl
            mov a_c, al
        }
        End = clock();
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

//в памяти char
double CharMemoryAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_c
            lea edi, b_c
            mov al, [esi]
            add al, [edi]
            mov[esi], al
        }
        End = clock();
        AllTime += (End - Start);
    }
    // cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double CharMemorySub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_c
            lea edi, b_c
            mov al, [esi]
            sub al, [edi]
            mov[esi], al
        }
        End = clock();
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

double CharMemoryMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_c
            lea edi, b_c
            mov ax, [esi]
            cbw
            imul [edi]
            mov [esi], ax
        }
        End = clock();
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

double CharMemoryDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        a_c = 'e', b_c = '(';
        Start = clock();
        __asm {
            lea esi, a_c
            lea edi, b_c
            mov ax, [esi]
            cbw
            idiv [edi]
            mov[esi], ax
        }
        End = clock();
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

// в регистрах short
double ShortRegistrAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov ax, a_s
            mov bx, b_s
            add ax, bx
            mov a_s, ax
        }
        End = clock();
        AllTime += (End - Start);
    }
    // cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double ShortRegistrMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov ax, a_s
            mov bx, b_s
            imul bx
            mov a_s, ax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double ShortRegistrDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov ax, a_s
            mov bx, b_s
            cwd
            idiv bx
            mov a_s, ax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double ShortRegistrSub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            mov ax, a_s
            mov bx, b_s
            sub ax, bx
            mov a_s, ax
        }
        End = clock();
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

//в памяти short
double ShortMemoryAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_s
            lea edi, b_s
            mov ax, [esi]
            add ax, [edi]
            mov[esi], ax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double ShortMemoryMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_s
            lea edi, b_s
            mov ax, [esi]
            imul[edi]
            mov[esi], ax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double ShortMemoryDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_s
            lea edi, b_s
            mov ax, [esi]
            cwd
            idiv[edi]
            mov[esi], ax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double ShortMemorySub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        Start = clock();
        __asm {
            lea esi, a_s
            lea edi, b_s
            mov ax, [esi]
            sub ax, [edi]
            mov[esi], ax
        }
        End = clock();
        AllTime += (End - Start);
    }
    //cout << AllTime << endl;
    return (double)AllTime / TIME;
}

// в регистрах float
double FloatRegistrAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            fld a_f
            fld b_f
            fadd
            fst a_f
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    // cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double FloatRegistrMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            fld a_f
            fld b_f
            fmul
            fst a_f
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double FloatRegistrDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            fld a_f
            fld b_f
            fdiv
            fst a_f
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double FloatRegistrSub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            fld a_f
            fld b_f
            fsub
            fst a_f
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

// в памяти float
double FloatMemoryAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            lea esi, a_f
            fld[esi]
            fadd b_f
            fst[esi]
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    // cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double FloatMemoryMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            lea esi, a_f
            fld [esi]
            fmul b_f
            fst[esi]
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double FloatMemoryDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            lea esi, a_f
            fld [esi]
            fdiv b_f
            fst[esi]
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double FloatMemorySub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            lea esi, a_f
            fld[esi]
            fsub b_f
            fst[esi]
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

//в регистрах double
double DoubleRegistrAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            fld qword ptr a_d
            fadd qword ptr b_d
            fstp qword ptr a_d
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    // cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double DoubleRegistrMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            fld qword ptr a_d
            fmul qword ptr b_d
            fstp qword ptr a_d
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double DoubleRegistrDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            fld qword ptr a_d
            fdiv qword ptr b_d
            fstp qword ptr a_d
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double DoubleRegistrSub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            finit
            fld qword ptr a_d
            fsub qword ptr b_d
            fstp qword ptr a_d
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}

// в памяти double
double DoubleMemoryAdd() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            lea esi, a_d
            lea edi, b_d
            fld qword ptr[esi]
            fadd qword ptr[edi]
            fstp qword ptr[esi]
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    // cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double DoubleMemoryMul() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            lea esi, a_d
            lea edi, b_d
            fld qword ptr[esi]
            fmul qword ptr[edi]
            fstp qword ptr[esi]
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double DoubleMemoryDiv() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            lea esi, a_d
            lea edi, b_d
            fld qword ptr[esi]
            fdiv qword ptr[edi]
            fstp qword ptr[esi]
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }
    //  cout << AllTime << endl;
    return (double)AllTime / TIME;
}

double DoubleMemorySub() {
    int AllTime = 0, i, Start, End;
    for (i = 0; i < M; i++) {
        __asm {
            call clock
            mov Start, eax
            lea esi, a_d
            lea edi, b_d
            fld qword ptr[esi]
            fsub qword ptr[edi]
            fstp qword ptr[esi]
            call clock
            mov End, eax
        }
        AllTime += (End - Start);
    }

    return (double)AllTime / TIME;
}
