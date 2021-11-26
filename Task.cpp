//
// Created by paefarinov on 19.11.2021.
//
#include "Task.h"
#include <ctime>
#include <time.h>
using namespace std;

string Task::display()
{
    return "name: " + name +
           "\ndescription: " + description +
           "\ndueTo: " + to_string(dueTo) +
           "\nTaskStatus: "  + (status == 0 ? "ACTIVE" : "RESOLVED")
           + "\nCreationTime" +
           asctime(localtime(&creationTime));
}
void Task::setDescription(string desc)
{
    description = desc;
}

void Task::getDescription()
{
    return description;
}

Task::Task()
{
    time(&creationTime);
    this->name = name;
    this->description = description;
}