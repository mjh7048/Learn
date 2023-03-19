/*
 * =====================================================================================
 *
 *       Filename:  hello.c
 *
 *    Description:  아주 좆같은 프로그램 씨발0 
 *
 *        Version:  1.0
 *        Created:  03/14/23 11:52:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

float stupid(float x, float y) {
    float stu = 1 / 2 * x * x * sin(y);

    return stu;
}

int main(void) {
    printf("%f\n", stupid(1, 2));

    return 0;
}

