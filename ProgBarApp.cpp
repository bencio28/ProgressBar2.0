//
// Created by matteo on 06/03/17.
//

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "ProgBarApp.h"
#include "ProgBarMain.h"
#include "ResourceFile.h"
#include "FilesQueue.h"
#include "ProgressBar.h"


IMPLEMENT_APP(ProgBarApp);

static FilesQueue coda_prova;

void ProgBarFrame::OnProcess(wxCommandEvent &event) {
    GUIFrame::OnProcess(event);
    int size_for_test = 10;
    ResourceFile *files = new ResourceFile[size_for_test];
    m_gauge1->SetValue(0);
    m_gauge1->SetRange(size_for_test);
    for (int i = 0; i < size_for_test; i++) {
        coda_prova.addFileToQueue(files[i]);

    }


}

bool ProgBarApp::OnInit() {

    ProgressBar *frame1 = new ProgressBar(&coda_prova, 0L);

    frame1->Show();

    return true;
}


