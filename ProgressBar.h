//
// Created by matteo on 23/02/17.
//
#include "Observer.h"
#include <wx/gauge.h>
#include <list>
#include <chrono>
#include "ResourceFile.h"
#include <thread>
#include "Subject.h"
#include "ProgBarMain.h"
#include "GUIFrame.h"
#include "FilesQueue.h"


#ifndef PROGRESSBAR_PROGRESSBAR_H
#define PROGRESSBAR_PROGRESSBAR_H
// OBSERVER TIPO PUSH- viene caricato un file sulla coda, poi viene elaborato(funzione OnProcess)ed eliminato dalla coda

class FilesQueue;

class ProgressBar : public Observer , public ProgBarFrame{
public:

    ProgressBar() { }


    ProgressBar(FilesQueue *fq,wxFrame *frame):ProgBarFrame(frame){
        fq->subscribe(this);
        subject = new FilesQueue();

    }

    ~ProgressBar() {
        subject->unsubscribe(this);
        delete subject;
        subject = nullptr;
    }



    virtual void update(FilesQueue *fq);



private:
    FilesQueue* subject;

};


#endif //PROGRESSBAR_PROGRESSBAR_H
