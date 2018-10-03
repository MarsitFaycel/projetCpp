#include "loginServeur.h"
#include "interfaceCommande.h"
#include"C:\projet C\base\base.h"
#include<iostream>
#include<wx/wx.h>



BASE *db5;

//(*InternalHeaders(loginServeur)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(loginServeur)
const long loginServeur::ID_STATICTEXT1 = wxNewId();
const long loginServeur::ID_TEXTCTRL1 = wxNewId();
const long loginServeur::ID_BUTTON1 = wxNewId();
const long loginServeur::ID_BUTTON2 = wxNewId();
const long loginServeur::ID_TEXTCTRL2 = wxNewId();
const long loginServeur::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(loginServeur,wxFrame)
	//(*EventTable(loginServeur)
	//*)
END_EVENT_TABLE()

loginServeur::loginServeur(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(loginServeur)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(589,450));
	SetMinSize(wxSize(589,450));
	SetMaxSize(wxSize(589,450));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("saisir votre mot de passe"), wxPoint(8,136), wxSize(256,24), 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,128,128));
	wxFont StaticText1Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("French Script MT"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	txt_password = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(256,136), wxSize(272,32), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	btn_ok = new wxButton(this, ID_BUTTON1, _("ok"), wxPoint(256,216), wxSize(112,64), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btn_ok->SetBackgroundColour(wxColour(255,128,128));
	btn_reset = new wxButton(this, ID_BUTTON2, _("reset"), wxPoint(416,216), wxSize(112,64), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	txt_id = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(256,48), wxSize(272,32), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("saisir votre identifiant"), wxPoint(8,48), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxColour(255,128,128));
	wxFont StaticText2Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("French Script MT"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&loginServeur::Onbtn_okClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&loginServeur::Onbtn_resetClick);
	//*)

	db5 = new BASE("yafet2");
}

loginServeur::~loginServeur()
{
	//(*Destroy(loginServeur)
	//*)
}




void loginServeur::Onbtn_okClick(wxCommandEvent& event)
{
     db5 = new BASE("yafet2");
    wxString password,passwordBase,requette;

    requette<<"SELECT PASS FROM TSERVEUR WHERE IDs="<<txt_id->GetValue()<<";";
    const char * req;
    req=requette.mb_str();

    passwordBase<<db5->selection((char*)req);
    password<<txt_password->GetValue();
    int x;
    x=password.Cmp(passwordBase);

    if (x==-1)
    {
        wxMessageBox(wxT("Bonjour Monsieur "));
        wxString requette1,requette2;

        requette1<<"UPDATE TSERVEUR SET ENSERVICE=0;";
        const char * req1;
        req1=requette1.mb_str();
        db5->Table((char*)req1);

        requette2<<"UPDATE TSERVEUR SET ENSERVICE=1 WHERE IDs="<<txt_id->GetValue()<<";";
        const char * req2;
        req2=requette2.mb_str();
        db5->Table((char*)req2);



        interfaceCommande* frm= new interfaceCommande(this);
        Hide();
        frm->Show();

    }
    else
    {
        wxMessageBox(wxT("acces interdit !!"));
    }
}

void loginServeur::Onbtn_resetClick(wxCommandEvent& event)
{
    txt_id->Clear();
    txt_password->Clear();
}
