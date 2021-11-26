//
// Created by paefarinov on 19.11.2021.
//

#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#include <time.h>
#include<string>
#include<ctime>
#include "TaskStatus.h"

using namespace std;

class Task {
public:
    string name;
    string description;
    int dueTo;
    TaskStatus status = ACTIVE;
    void setDescription(string desc);
    void getDescription();
    string display();
private:
    string name;

};

#endif //UNTITLED_TASK_H
