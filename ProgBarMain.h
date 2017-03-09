//
// Created by matteo on 06/03/17.
//

#ifndef PROGRESSBAR_PROGBARMAIN_H
#define PROGRESSBAR_PROGBARMAIN_H


#include "ProgBarApp.h"


#include "GUIFrame.h"

class ProgBarFrame: public GUIFrame
{
public:
    ProgBarFrame(wxFrame *frame);
    ProgBarFrame(){}
    ~ProgBarFrame();
private:
    virtual void OnClose(wxCloseEvent& event);
    virtual void OnQuit(wxCommandEvent& event);
    virtual void OnAbout(wxCommandEvent& event);
    virtual void OnProcess( wxCommandEvent& event);
};



#endif //PROGRESSBAR_PROGBARMAIN_H
