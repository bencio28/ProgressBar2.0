//
// Created by matteo on 03/03/17.
//



#ifndef PROGRESSBAR_SUBJECT_H
#define PROGRESSBAR_SUBJECT_H


#include "Observer.h"

class Observer;

class Subject {
public:
    virtual void subscribe(Observer *o) = 0;

    virtual void unsubscribe(Observer *o) = 0;

    virtual void notify() = 0;
};

#endif //PROGRESSBAR_SUBJECT_H
