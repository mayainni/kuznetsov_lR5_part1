#include <iostream>
#include "M:\\Kuznetsov_IST\\kuznetsov_LR5\\kuznetsov_lR5_part1\\kuznetsov_MathTask.h"

int main(){
    int NumberA = 0, NumberB = 0;
    EnterNumberInt(NumberA, "input height A");
    EnterNumberInt(NumberB, "input height B");

    int task = task_0(NumberA, NumberB);

    cout << "area of rectangle is " << task << endl;
}