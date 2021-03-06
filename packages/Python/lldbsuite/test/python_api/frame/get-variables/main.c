//===-- main.c --------------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#include <stdio.h>

int g_global_var = 123;
static int g_static_var = 123;

int main (int argc, char const *argv[])
{                            
    static int static_var = 123;
    int i = 0;                                  // breakpoint 1
    for (i=0; i<1; ++i)
    {
        int j = i*2;
        printf("i = %i, j = %i\n", i, j);       // breakpoint 2
        {
            int k = i*j*3;
            printf("i = %i, j = %i\n", i, j);   // breakpoint 3
        }
    }
    return 0;
}
