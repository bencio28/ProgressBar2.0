//
// Created by matteo on 03/03/17.
//

#ifndef PROGRESSBAR_OBSERVER_H
#define PROGRESSBAR_OBSERVER_H

#include "FilesQueue.h"
class FilesQueue;
class Observer {
public:

    virtual void update(FilesQueue *fq) = 0;
};
#endif //PROGRESSBAR_OBSERVER_H
