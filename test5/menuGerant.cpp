#include "menuGerant.h"
#include"personnel.h"
#include"restaurant.h"
#include "admins.h"

//(*InternalHeaders(menuGerant)
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(menuGerant)
const long menuGerant::ID_BUTTON1 = wxNewId();
const long menuGerant::ID_BUTTON2 = wxNewId();
const long menuGerant::ID_BUTTON3 = wxNewId();
const long menuGerant::ID_BUTTON4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(menuGerant,wxFrame)
	//(*EventTable(menuGerant)
	//*)
END_EVENT_TABLE()

menuGerant::menuGerant(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(menuGerant)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(551,450));
	SetMinSize(wxSize(551,450));
	SetMaxSize(wxSize(551,450));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	btn_perso = new wxButton(this, ID_BUTTON1, _("gestion Personnel"), wxPoint(104,88), wxSize(288,55), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btn_rest = new wxButton(this, ID_BUTTON2, _("gestion restaurant"), wxPoint(104,160), wxSize(288,55), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btn_admin = new wxButton(this, ID_BUTTON3, _("admin et statistique"), wxPoint(104,224), wxSize(288,55), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	Button1 = new wxButton(this, ID_BUTTON4, _("exit"), wxPoint(104,352), wxSize(288,55), 0, wxDefaultValidator, _T("ID_BUTTON4"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&menuGerant::Onbtn_persoClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&menuGerant::Onbtn_restClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&menuGerant::Onbtn_statClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&menuGerant::OnButton1Click);
	//*)
}

menuGerant::~menuGerant()
{
	//(*Destroy(menuGerant)
	//*)
}


void menuGerant::Onbtn_persoClick(wxCommandEvent& event)
{
    personnel *frm1=new personnel(this);
    frm1->Show();
}

void menuGerant::Onbtn_statClick(wxCommandEvent& event)
{
    admins * frm3 = new admins(this);
    frm3->Show();
}

void menuGerant::OnButton1Click(wxCommandEvent& event)
{
    Destroy();
}

void menuGerant::Onbtn_restClick(wxCommandEvent& event)
{
    restaurant * frm2= new restaurant(this);
    frm2->Show();
}
