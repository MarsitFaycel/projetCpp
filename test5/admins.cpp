#include "admins.h"
#include"C:\projet C\base\base.h"
#include<iostream>
#include<wx/wx.h>

BASE *db7;


//(*InternalHeaders(admins)
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(admins)
const long admins::ID_BUTTON1 = wxNewId();
const long admins::ID_BUTTON2 = wxNewId();
const long admins::ID_TEXTCTRL1 = wxNewId();
const long admins::ID_BUTTON3 = wxNewId();
const long admins::ID_BUTTON4 = wxNewId();
const long admins::ID_BUTTON5 = wxNewId();
//*)

BEGIN_EVENT_TABLE(admins,wxFrame)
	//(*EventTable(admins)
	//*)
END_EVENT_TABLE()

admins::admins(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(admins)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(405,450));
	Move(wxDefaultPosition);
	SetMinSize(wxSize(405,450));
	SetMaxSize(wxSize(405,450));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	btn_reset = new wxButton(this, ID_BUTTON1, _("reset base"), wxPoint(40,384), wxSize(144,48), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1 = new wxButton(this, ID_BUTTON2, _("revenu de  jours"), wxPoint(40,96), wxSize(120,23), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	txt_aff = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(216,88), wxSize(176,152), wxTE_AUTO_SCROLL|wxTE_PROCESS_TAB, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	btn_m_plat = new wxButton(this, ID_BUTTON3, _("meilleur plats"), wxPoint(40,136), wxSize(120,23), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	btn_m_entrre = new wxButton(this, ID_BUTTON4, _("meilleur entree"), wxPoint(40,176), wxSize(120,23), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	btn_m_dessert = new wxButton(this, ID_BUTTON5, _("meilleur dessert"), wxPoint(40,216), wxSize(120,23), 0, wxDefaultValidator, _T("ID_BUTTON5"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&admins::Onbtn_resetClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&admins::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&admins::Onbtn_m_platClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&admins::Onbtn_m_entrreClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&admins::Onbtn_m_dessertClick);
	//*)
	db7= new BASE("yafet2");
}

admins::~admins()
{
	//(*Destroy(admins)
	//*)
}


void admins::Onbtn_resetClick(wxCommandEvent& event)
{
    db7->Table("DROP TABLE IF EXISTS TCOMMANDEPLATS;");
    db7->Table("DROP TABLE IF EXISTS TCOMMANDEDESSERT;");
    db7->Table("DROP TABLE IF EXISTS TCOMMANDEENTREE;");
    db7->Table("DROP TABLE IF EXISTS TADDITION;");
    db7->Table("DROP TABLE IF EXISTS TENTREE;");
    db7->Table("DROP TABLE IF EXISTS TPLATS ;");
    db7->Table("DROP TABLE IF EXISTS TDESSERT ;");
    db7->Table("DROP TABLE IF EXISTS TSERVEUR ;");

    db7->Table("CREATE TABLE TSERVEUR(IDs integer primary key AUTOINCREMENT,NSERVEUR varchar2(31),PASS varchar2(31),SALAIRE number(4,3),ENSERVICE integer ) ;");
    db7->Table("CREATE TABLE TADDITION(IDa integer primary key,IDs integer,NTABLE number(2),ADDITION integer ,DATE  text, FOREIGN KEY (IDs) REFERENCES TSERVEUR(IDs));");
    db7->Table("CREATE TABLE TENTREE(IDe integer primary key AUTOINCREMENT, NOM varchar2(31),PRIX number(3,3),COUT number(3,3));");
    db7->Table("CREATE TABLE TPLATS(IDp integer primary key AUTOINCREMENT, NOM varchar2(31),PRIX number(3,3),COUT number(3,3));");
    db7->Table("CREATE TABLE TDESSERT(IDd integer primary key AUTOINCREMENT,NOM varchar2(31),PRIX number(3,3),COUT number(3,3));");
    db7->Table("CREATE TABLE TCOMMANDEPLATS(IDa integer REFERENCES TADDITION(IDa) , IDp integer REFERENCES TPLATS(IDp) , PRIMARY KEY (IDa,IDp)); ");

    db7->Table("CREATE TABLE TCOMMANDEENTREE(IDa integer REFERENCES TADDITION(IDa) , IDe integer REFERENCES TENTREE(IDe) , PRIMARY KEY (IDa,IDe)); ");
    db7->Table("CREATE TABLE TCOMMANDEDESSERT(IDa integer REFERENCES TADDITION(IDa) , IDd integer REFERENCES TDESSERT(IDd) , PRIMARY KEY (IDa,IDd)); ");

}

void admins::OnButton2Click(wxCommandEvent& event)
{
    txt_aff->Clear();
    wxDateTime n= wxDateTime::Now();
    wxString str = n.Format(wxT("%d/%m/%y"),wxDateTime::CET);
    wxString requette;
    requette<<"SELECT SUM(ADDITION) FROM TADDITION WHERE DATE='"<<str<<"' ; ";
    //requette<<"SELECT MAX(IDe) FROM TCOMANDE ;";
const char * req;
req=requette.mb_str();
string st=db7->selection((char *)req);

//string st=db1->selection("SELECT * FROM TSERVEUR;");
wxString mystring;
mystring<<st;
txt_aff->AppendText(mystring);
}

void admins::Onbtn_m_platClick(wxCommandEvent& event)
{
    txt_aff->Clear();
    wxString requette;
    requette<<"SELECT NOM FROM TPLATS WHERE IDp IN(select IDp from TCOMMANDEPLATS group by IDp order by count(*) desc) limit 1 ;";
const char * req;
req=requette.mb_str();
string st=db7->selection((char *)req);
wxString mystring;
mystring<<st;
txt_aff->AppendText(mystring);

}

void admins::Onbtn_m_entrreClick(wxCommandEvent& event)
{
     txt_aff->Clear();
    wxString requette;
    requette<<"SELECT NOM FROM TENTREE WHERE IDe IN(select IDe from TCOMMANDEENTREE group by IDe order by count(*) desc) limit 1 ;";


const char * req;
req=requette.mb_str();
string st=db7->selection((char *)req);
wxString mystring;
mystring<<st;
txt_aff->AppendText(mystring);
}

void admins::Onbtn_m_dessertClick(wxCommandEvent& event)
{
     txt_aff->Clear();
    wxString requette;
    requette<<"SELECT NOM FROM TDESSERT WHERE IDd IN(select IDd from TCOMMANDEDESSERT group by IDd order by count(*) desc) limit 1 ;";


const char * req;
req=requette.mb_str();
string st=db7->selection((char *)req);
wxString mystring;
mystring<<st;
txt_aff->AppendText(mystring);
}
