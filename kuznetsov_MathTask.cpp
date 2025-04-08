#include <iostream>
#include "M:\\Kuznetsov_IST\\kuznetsov_LR5\\kuznetsov_lR5_part1\\kuznetsov_MathTask.h"
struct MenuItem {
    string title;
    function<void()> action;
};
int main(){
    map<int,MenuItem> menu = {
        {1, {"Create vector Dish",task_0}},
        {2, {"ShoFGFGw vector Dish",}},
        {3, {"Add vector Dish",}},
        {4, {"create and show list Dish",}},
        {5, {"Sr ball students",}}
    };
    int choice = 0;
    while(true){
        cout << "Menu:" << endl;
        for (const auto& item : menu){
            cout << "Task " << item.first << ". " << item.second.title << endl;
        }
        cout << "0. Exit" << endl;
        while (true){
            if(choice == 0){
                cout << "@ 2025 Kuznetsov" << endl;
                break;
            }
            cout << endl;
            if (menu.find(choice) != menu.end()){
                menu[choice].action();
            }else{
                cout << "Incorrect input.";
            }
            cout << endl << endl;
        }
        return 0;
    }
}