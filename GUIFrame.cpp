///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 30 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    mbar = new wxMenuBar( 0 );
    fileMenu = new wxMenu();
    wxMenuItem* menuFileQuit;
    menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( wxT("&Esci") ) + wxT('\t') + wxT("Alt+F4"), wxT("Esci"), wxITEM_NORMAL );
    fileMenu->Append( menuFileQuit );

    mbar->Append( fileMenu, wxT("&Opzioni") );

    helpMenu = new wxMenu();
    wxMenuItem* menuHelpAbout;
    menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( wxT("&Info") ) + wxT('\t') + wxT("F1"), wxT("Mostra informazioni"), wxITEM_NORMAL );
    helpMenu->Append( menuHelpAbout );

    mbar->Append( helpMenu, wxT("&Aiuto") );

    this->SetMenuBar( mbar );

    statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
    wxBoxSizer* bSizer1;
    bSizer1 = new wxBoxSizer( wxVERTICAL );

    m_gauge1 = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxSize( -1,-1 ), wxGA_HORIZONTAL );
    m_gauge1->SetMinSize( wxSize( 295,-1 ) );
    m_gauge1->SetMaxSize( wxSize( 295,-1 ) );

    bSizer1->Add( m_gauge1, 0, wxALL, 5 );

    m_button1 = new wxButton( this, wxID_ANY, wxT("Avvia"), wxPoint( 200,-1 ), wxDefaultSize, 0 );
    m_button1->SetMinSize( wxSize( 150,-1 ) );
    m_button1->SetMaxSize( wxSize( 150,-1 ) );

    bSizer1->Add( m_button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

    this->SetSizer( bSizer1 );
    this->Layout();

    // Connect Events
    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
    this->Connect( menuFileQuit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
    this->Connect( menuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
    this->Connect(wxID_ANY,wxID_ANY,wxEVT_BUTTON,wxCommandEventHandler(GUIFrame::OnProcess));
}

GUIFrame::~GUIFrame()
{
    // Disconnect Events
    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
    this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
    this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
    this->Disconnect(wxID_ANY,wxID_ANY,wxEVT_BUTTON,wxCommandEventHandler(GUIFrame::OnProcess));
}
