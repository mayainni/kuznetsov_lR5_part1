#ifndef KUZNETSOV_MATHTASK_H
#define KUZNETSOV_MATHTASK_H
#include <iostream>
#include <string>
#include <map>
#include <functional>
using namespace std;
bool UserInputInt(string input){
    if(input.empty()) return false;

    try
    {
        int number = stoi(input);
        if (number < 0) return false;
        
    }
    catch(const std::exception& e)
    { return false;}

    return true;
}
function<void()> EnterNumberInt(int& varLink, string label){
    return [&varLink, label](){
        string raw_input;
        cout << label << " = ";
        getline(cin,raw_input);
        while (!UserInputInt(raw_input))
        {
            cout << label << " = ";
            getline(cin,raw_input);
        }
        varLink = stoi(raw_input);
    };
}
int task_0(){
    int X;
    while(true){
        EnterNumberInt(X," ")();
        if(cin.fail() || X <= 0){
            cin.clear();
            cin.ignore(10000,'\n');
            cout << "";

        }else{
            return X;
        }
    }
}
#endif