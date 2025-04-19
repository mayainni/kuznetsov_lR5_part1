#ifndef KUZNETSOV_MATHTASK_H
#define KUZNETSOV_MATHTASK_H
#include <iostream>
#include <string>
#include <map>
#include <functional>
using namespace std;
bool UserInputInt(string input){
    if(input.empty()) return false;
    bool only = true;
    for(char c : input){
        if(!isdigit(c)){
            only = false;
            break;
        }
    }
    try
    {
        int number = stoi(input);
        if (number < 0) return false;
        if(!only) return false;
    }
    catch(const std::exception& e)
    { return false;}

    return true;
}
void EnterNumberInt(int& varLink, string label){
        string raw_input;
        cout << label << " = ";
        getline(cin,raw_input);
        while (!UserInputInt(raw_input))
        {
            cout << label << " = ";
            getline(cin,raw_input);
        }
        varLink = stoi(raw_input);
    
}
int task_0(int NumberA, int NumberB){
    return NumberA * NumberB;
}
#endif