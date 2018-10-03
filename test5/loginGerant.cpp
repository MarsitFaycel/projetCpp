#include "loginGerant.h"
#include"C:\projet C\base\base.h"
#include<iostream>
#include<wx/wx.h>
#include "menuGerant.h"


BASE *db;


//(*InternalHeaders(loginGerant)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(loginGerant)
const long loginGerant::ID_BUTTON1 = wxNewId();
const long loginGerant::ID_BUTTON2 = wxNewId();
const long loginGerant::ID_TEXTCTRL1 = wxNewId();
const long loginGerant::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(loginGerant,wxFrame)
	//(*EventTable(loginGerant)
	//*)
END_EVENT_TABLE()

loginGerant::loginGerant(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(loginGerant)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER, _T("id"));
	SetClientSize(wxSize(589,450));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(589,450));
	SetMaxSize(wxSize(589,450));
	SetFocus();
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	btn_ok = new wxButton(this, ID_BUTTON1, _("ok"), wxPoint(176,224), wxSize(112,64), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btn_ok->SetBackgroundColour(wxColour(255,128,64));
	btn_reset = new wxButton(this, ID_BUTTON2, _("reset"), wxPoint(336,224), wxSize(112,64), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	txt_password = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(176,136), wxSize(272,32), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("saisir votre mot de passe"), wxPoint(200,80), wxSize(256,24), wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,128,64));
	wxFont StaticText1Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("French Script MT"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&loginGerant::Onbtn_okClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&loginGerant::Onbtn_resetClick1);
	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&loginGerant::Ontxt_passwordText);
	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&loginGerant::OnClose);
	//*)
	db = new BASE("yafet2");
}

loginGerant::~loginGerant()
{
	//(*Destroy(loginGerant)
	//*)
}


void loginGerant::OnClose(wxCloseEvent& event)
{
    Destroy();
}



void loginGerant::Onbtn_okClick(wxCommandEvent& event)
{
    db = new BASE("yafet2");
    wxString password,passwordBase;
    passwordBase<<db->selection("SELECT PASS FROM PASSWORD;");
    password<<txt_password->GetValue();
    int x;
    x=password.Cmp(passwordBase);

    if (x==-1)
    {
        wxMessageBox(wxT("Bonjour Monsieur "));
        menuGerant * frm= new menuGerant(this);
        Hide();
        frm->Show();

    }
    else
    {
        wxMessageBox(wxT("acces interdit !!"));
    }


}

void loginGerant::Ontxt_passwordText(wxCommandEvent& event)
{
}

void loginGerant::Onbtn_resetClick(wxCommandEvent& event)
{
    txt_password->Clear();
}

void loginGerant::Onbtn_resetClick1(wxCommandEvent& event)
{
}
