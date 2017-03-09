//
// Created by matteo on 06/03/17.
//

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include <wx/msgdlg.h>
#include "ProgBarMain.h"
#include "ProgressBar.h"


//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


ProgBarFrame::ProgBarFrame(wxFrame *frame)
        : GUIFrame(frame)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Progetto ProgressBar"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
}

ProgBarFrame::~ProgBarFrame()
{
}

void ProgBarFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void ProgBarFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void ProgBarFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Nessuna informazione particolare..."));
}


