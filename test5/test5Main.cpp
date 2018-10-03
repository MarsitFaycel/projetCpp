/***************************************************************
 * Name:      test5Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    myf ()
 * Created:   2018-05-06
 * Copyright: myf ()
 * License:
 **************************************************************/

#include "test5Main.h"
#include <wx/msgdlg.h>
#include"loginGerant.h"

#include "loginServeur.h"

//(*InternalHeaders(test5Frame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

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

//(*IdInit(test5Frame)
const long test5Frame::ID_BUTTON1 = wxNewId();
const long test5Frame::ID_BUTTON2 = wxNewId();
const long test5Frame::ID_STATICTEXT1 = wxNewId();
const long test5Frame::idMenuQuit = wxNewId();
const long test5Frame::idMenuAbout = wxNewId();
const long test5Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(test5Frame,wxFrame)
    //(*EventTable(test5Frame)
    //*)
END_EVENT_TABLE()

test5Frame::test5Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(test5Frame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(466,450));
    SetMinSize(wxSize(466,450));
    SetMaxSize(wxSize(466,450));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    btn_gerant = new wxButton(this, ID_BUTTON1, _("gerant"), wxPoint(80,112), wxSize(104,88), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    btn_gerant->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRADIENTACTIVECAPTION));
    wxFont btn_gerantFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("French Script MT"),wxFONTENCODING_DEFAULT);
    btn_gerant->SetFont(btn_gerantFont);
    btn_serveur = new wxButton(this, ID_BUTTON2, _("serveur"), wxPoint(264,112), wxSize(104,88), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    btn_serveur->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRADIENTACTIVECAPTION));
    wxFont btn_serveurFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("French Script MT"),wxFONTENCODING_DEFAULT);
    btn_serveur->SetFont(btn_serveurFont);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("welcome to MYF"), wxPoint(128,48), wxSize(300,32), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(255,128,64));
    wxFont StaticText1Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("French Script MT"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Center();

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&test5Frame::Onbtn_gerantClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&test5Frame::Onbtn_serveurClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&test5Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&test5Frame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&test5Frame::OnClose);
    //*)
}

test5Frame::~test5Frame()
{
    //(*Destroy(test5Frame)
    //*)
}

void test5Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void test5Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void test5Frame::OnClose(wxCloseEvent& event)
{
    Destroy();
}



void test5Frame::Onbtn_gerantClick(wxCommandEvent& event)
{
    loginGerant * frm= new loginGerant(this);
 Hide();
 frm->Show();

}

void test5Frame::Onbtn_serveurClick(wxCommandEvent& event)
{
    loginServeur *frm= new loginServeur(this);
    Hide();
    frm->Show();
}
