#include "interfaceCommande.h"
#include<wx/wx.h>
#include"C:\projet C\base\base.h"
#include<iostream>


BASE *db4;


//(*InternalHeaders(interfaceCommande)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(interfaceCommande)
const long interfaceCommande::ID_TEXTCTRL2 = wxNewId();
const long interfaceCommande::ID_BUTTON4 = wxNewId();
const long interfaceCommande::ID_BUTTON5 = wxNewId();
const long interfaceCommande::ID_BUTTON6 = wxNewId();
const long interfaceCommande::ID_BUTTON7 = wxNewId();
const long interfaceCommande::ID_BUTTON8 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL3 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL4 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL5 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL6 = wxNewId();
const long interfaceCommande::ID_BITMAPBUTTON1 = wxNewId();
const long interfaceCommande::ID_PANEL1 = wxNewId();
const long interfaceCommande::ID_BUTTON9 = wxNewId();
const long interfaceCommande::ID_BUTTON10 = wxNewId();
const long interfaceCommande::ID_BUTTON11 = wxNewId();
const long interfaceCommande::ID_BUTTON12 = wxNewId();
const long interfaceCommande::ID_BUTTON13 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL7 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL8 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL9 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL10 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL11 = wxNewId();
const long interfaceCommande::ID_BITMAPBUTTON2 = wxNewId();
const long interfaceCommande::ID_PANEL2 = wxNewId();
const long interfaceCommande::ID_BUTTON14 = wxNewId();
const long interfaceCommande::ID_BUTTON15 = wxNewId();
const long interfaceCommande::ID_BUTTON16 = wxNewId();
const long interfaceCommande::ID_BUTTON17 = wxNewId();
const long interfaceCommande::ID_BUTTON18 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL12 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL13 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL14 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL15 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL16 = wxNewId();
const long interfaceCommande::ID_BITMAPBUTTON3 = wxNewId();
const long interfaceCommande::ID_PANEL3 = wxNewId();
const long interfaceCommande::ID_NOTEBOOK1 = wxNewId();
const long interfaceCommande::ID_CHOICE1 = wxNewId();
const long interfaceCommande::ID_DATEPICKERCTRL1 = wxNewId();
const long interfaceCommande::ID_TIMEPICKERCTRL1 = wxNewId();
const long interfaceCommande::ID_BUTTON1 = wxNewId();
const long interfaceCommande::ID_BUTTON2 = wxNewId();
const long interfaceCommande::ID_BUTTON3 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL1 = wxNewId();
const long interfaceCommande::ID_STATICTEXT1 = wxNewId();
const long interfaceCommande::ID_TEXTCTRL17 = wxNewId();
const long interfaceCommande::ID_STATICTEXT2 = wxNewId();
const long interfaceCommande::ID_STATICTEXT3 = wxNewId();
const long interfaceCommande::ID_BITMAPBUTTON4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(interfaceCommande,wxFrame)
	//(*EventTable(interfaceCommande)
	//*)
END_EVENT_TABLE()

interfaceCommande::interfaceCommande(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(interfaceCommande)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(850,491));
	SetMinSize(wxSize(850,470));
	SetMaxSize(wxSize(850,470));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(64,112), wxSize(440,256), 0, _T("ID_NOTEBOOK1"));
	Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	txt_ent1 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(176,16), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	Button1 = new wxButton(Panel1, ID_BUTTON4, _("1"), wxPoint(16,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	Button1->SetBackgroundColour(wxColour(0,187,0));
	Button2 = new wxButton(Panel1, ID_BUTTON5, _("2"), wxPoint(16,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	Button2->SetBackgroundColour(wxColour(0,217,0));
	Button3 = new wxButton(Panel1, ID_BUTTON6, _("3"), wxPoint(16,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	Button3->SetBackgroundColour(wxColour(0,236,0));
	Button4 = new wxButton(Panel1, ID_BUTTON7, _("4"), wxPoint(16,136), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	Button4->SetBackgroundColour(wxColour(74,255,74));
	Button5 = new wxButton(Panel1, ID_BUTTON8, _("5"), wxPoint(16,176), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	Button5->SetBackgroundColour(wxColour(140,255,140));
	txt_ent2 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(176,56), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	txt_ent3 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(176,96), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	txt_ent4 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(176,136), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	txt_ent5 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(176,176), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BitmapButton1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON1, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_REDO")),wxART_BUTTON), wxPoint(384,8), wxSize(40,23), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	Panel2 = new wxPanel(Notebook1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	btn_plat1 = new wxButton(Panel2, ID_BUTTON9, _("1"), wxPoint(16,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	btn_plat1->SetBackgroundColour(wxColour(0,0,255));
	btn_plat2 = new wxButton(Panel2, ID_BUTTON10, _("2"), wxPoint(16,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	btn_plat2->SetBackgroundColour(wxColour(0,99,198));
	btn_plat3 = new wxButton(Panel2, ID_BUTTON11, _("3"), wxPoint(16,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
	btn_plat3->SetBackgroundColour(wxColour(0,121,242));
	btn_plat4 = new wxButton(Panel2, ID_BUTTON12, _("4"), wxPoint(16,136), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON12"));
	btn_plat4->SetBackgroundColour(wxColour(85,170,255));
	btn_plat5 = new wxButton(Panel2, ID_BUTTON13, _("5"), wxPoint(16,176), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON13"));
	btn_plat5->SetBackgroundColour(wxColour(183,219,255));
	txt_plat1 = new wxTextCtrl(Panel2, ID_TEXTCTRL7, wxEmptyString, wxPoint(176,16), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	txt_plat2 = new wxTextCtrl(Panel2, ID_TEXTCTRL8, wxEmptyString, wxPoint(176,56), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	txt_plat3 = new wxTextCtrl(Panel2, ID_TEXTCTRL9, wxEmptyString, wxPoint(176,96), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	txt_plat4 = new wxTextCtrl(Panel2, ID_TEXTCTRL10, wxEmptyString, wxPoint(176,136), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	txt_plat5 = new wxTextCtrl(Panel2, ID_TEXTCTRL11, wxEmptyString, wxPoint(176,176), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	BitmapButton2 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON2, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_REDO")),wxART_BUTTON), wxPoint(384,8), wxSize(40,23), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	btn_des1 = new wxButton(Panel3, ID_BUTTON14, _("1"), wxPoint(16,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON14"));
	btn_des1->SetBackgroundColour(wxColour(255,0,0));
	btn_des2 = new wxButton(Panel3, ID_BUTTON15, _("2"), wxPoint(16,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON15"));
	btn_des2->SetBackgroundColour(wxColour(255,47,47));
	btn_des3 = new wxButton(Panel3, ID_BUTTON16, _("3"), wxPoint(16,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON16"));
	btn_des3->SetBackgroundColour(wxColour(255,83,83));
	btn_des4 = new wxButton(Panel3, ID_BUTTON17, _("4"), wxPoint(16,136), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON17"));
	btn_des4->SetBackgroundColour(wxColour(255,102,102));
	btn_des5 = new wxButton(Panel3, ID_BUTTON18, _("5"), wxPoint(16,176), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON18"));
	btn_des5->SetBackgroundColour(wxColour(255,151,151));
	txt_des1 = new wxTextCtrl(Panel3, ID_TEXTCTRL12, wxEmptyString, wxPoint(176,16), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	txt_des2 = new wxTextCtrl(Panel3, ID_TEXTCTRL13, wxEmptyString, wxPoint(176,56), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	txt_des3 = new wxTextCtrl(Panel3, ID_TEXTCTRL14, wxEmptyString, wxPoint(176,96), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL14"));
	txt_des4 = new wxTextCtrl(Panel3, ID_TEXTCTRL15, wxEmptyString, wxPoint(176,136), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL15"));
	txt_des5 = new wxTextCtrl(Panel3, ID_TEXTCTRL16, wxEmptyString, wxPoint(176,176), wxSize(168,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL16"));
	BitmapButton3 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON3, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_REDO")),wxART_BUTTON), wxPoint(384,8), wxSize(40,23), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	Notebook1->AddPage(Panel1, _("NOS ENTREES"), false);
	Notebook1->AddPage(Panel2, _("NOS PLATS"), false);
	Notebook1->AddPage(Panel3, _("NOS DESSERTS"), false);
	Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(152,72), wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->Append(_("1"));
	Choice1->Append(_("2"));
	Choice1->Append(_("3"));
	Choice1->Append(_("4"));
	Choice1->Append(_("5"));
	DatePickerCtrl1 = new wxDatePickerCtrl(this, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxPoint(576,16), wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
	TimePickerCtrl1 = new wxTimePickerCtrl(this, ID_TIMEPICKERCTRL1, wxDateTime::Now(), wxPoint(712,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TIMEPICKERCTRL1"));
	btn_comm_ok = new wxButton(this, ID_BUTTON1, _("ok"), wxPoint(528,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btn_comm_total = new wxButton(this, ID_BUTTON2, _("total"), wxPoint(616,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btn_comm_reset = new wxButton(this, ID_BUTTON3, _("reset"), wxPoint(704,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	txt_ticket = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(584,112), wxSize(208,248), wxTE_AUTO_SCROLL|wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("BIENVENU CHEZ MYF"), wxPoint(200,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,128,64));
	wxFont StaticText1Font(28,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Algerian"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	txt_serveur = new wxTextCtrl(this, ID_TEXTCTRL17, wxEmptyString, wxPoint(192,384), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL17"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("numero table"), wxPoint(64,80), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("identifiant serveur"), wxPoint(72,392), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_QUIT")),wxART_BUTTON), wxPoint(792,400), wxSize(48,39), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	Center();

	Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&interfaceCommande::OnTextCtrl1Text);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnButton1Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnButton2Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnButton3Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnButton4Click);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnButton5Click);
	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnBitmapButton1Click1);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_plat1Click);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_plat2Click);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_plat3Click);
	Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_plat4Click);
	Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_plat5Click);
	Connect(ID_TEXTCTRL9,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&interfaceCommande::OnTextCtrl3Text);
	Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnBitmapButton2Click);
	Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_des1Click);
	Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_des2Click);
	Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_des3Click);
	Connect(ID_BUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_des4Click);
	Connect(ID_BUTTON18,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_des5Click);
	Connect(ID_TEXTCTRL16,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&interfaceCommande::Ontxt_des5Text);
	Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnBitmapButton3Click);
	Connect(ID_NOTEBOOK1,wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&interfaceCommande::OnNotebook1PageChanged);
	Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&interfaceCommande::OnChoice1Select);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_comm_okClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_comm_totalClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::Onbtn_comm_resetClick);
	Connect(ID_BITMAPBUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&interfaceCommande::OnBitmapButton4Click);
	//*)

	db4= new BASE("yafet2");


}

float interfaceCommande::total=0.0;
int interfaceCommande::idaddition=0;

interfaceCommande::~interfaceCommande()
{
	//(*Destroy(interfaceCommande)
	//*)
}


void interfaceCommande::OnBitmapButton1Click(wxCommandEvent& event)
{
  wxMessageBox(wxT("Bonjour Monsieur "));
}

void interfaceCommande::Ontxt_comm_ticketText(wxCommandEvent& event)
{
}


void interfaceCommande::OnTextCtrl1Text(wxCommandEvent& event)
{

}

void interfaceCommande::OnCheckListBox1Toggled(wxCommandEvent& event)
{
}

void interfaceCommande::OnButton1Click(wxCommandEvent& event)
{

    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TENTREE WHERE IDe=1;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TENTREE WHERE IDe=1;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);
    // ca fonctionneee !!!!!!!!!!!!!!
    //mystring<<total;
    //txt_ticket->AppendText(mystring);
    //txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEENTREE (IDa,IDe) VALUES("<<wxString::Format(wxT("%d"),idaddition)<<",1 );";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::OnBitmapButton1Click1(wxCommandEvent& event)
{
    txt_ent1->Clear();
    wxString requette;
    requette<<"SELECT NOM FROM TENTREE WHERE IDe=1;";
const char * req;
req=requette.mb_str();
string st=db4->selection((char *)req);
wxString mystring;
mystring<<st;
txt_ent1->AppendText(mystring);


txt_ent2->Clear();
    wxString requette2;
    requette2<<"SELECT NOM FROM TENTREE WHERE IDe=2;";
const char * req2;
req2=requette2.mb_str();
string st2=db4->selection((char *)req2);
wxString mystring2;
mystring2<<st2;
txt_ent2->AppendText(mystring2);


txt_ent3->Clear();
    wxString requette3;
    requette3<<"SELECT NOM FROM TENTREE WHERE IDe=3;";
const char * req3;
req3=requette3.mb_str();
string st3=db4->selection((char *)req3);
wxString mystring3;
mystring3<<st3;
txt_ent3->AppendText(mystring3);


txt_ent4->Clear();
    wxString requette4;
    requette4<<"SELECT NOM FROM TENTREE WHERE IDe=4;";
const char * req4;
req4=requette4.mb_str();
string st4=db4->selection((char *)req4);
wxString mystring4;
mystring4<<st4   ;
txt_ent4->AppendText(mystring4);



}

void interfaceCommande::OnTextCtrl3Text(wxCommandEvent& event)
{
}

void interfaceCommande::OnBitmapButton2Click(wxCommandEvent& event)
{
        txt_plat1->Clear();
    wxString requette;
    requette<<"SELECT NOM FROM TPLATS WHERE IDp=1;";
const char * req;
req=requette.mb_str();
string st=db4->selection((char *)req);
wxString mystring;
mystring<<st;
txt_plat1->AppendText(mystring);


txt_plat2->Clear();
    wxString requette2;
    requette2<<"SELECT NOM FROM TPLATS WHERE IDp=2;";
const char * req2;
req2=requette2.mb_str();
string st2=db4->selection((char *)req2);
wxString mystring2;
mystring2<<st2;
txt_plat2->AppendText(mystring2);


txt_plat3->Clear();
    wxString requette3;
    requette3<<"SELECT NOM FROM TPLATS WHERE IDp=3;";
const char * req3;
req3=requette3.mb_str();
string st3=db4->selection((char *)req3);
wxString mystring3;
mystring3<<st3;
txt_plat3->AppendText(mystring3);


txt_plat4->Clear();
    wxString requette4;
    requette4<<"SELECT NOM FROM TPLATS WHERE IDp=4;";
const char * req4;
req4=requette4.mb_str();
string st4=db4->selection((char *)req4);
wxString mystring4;
mystring4<<st4   ;
txt_plat4->AppendText(mystring4);

txt_plat5->Clear();
    wxString requette5;
    requette5<<"SELECT NOM FROM TPLATS WHERE IDp=5;";
const char * req5;
req5=requette5.mb_str();
string st5=db4->selection((char *)req5);
wxString mystring5;
mystring5<<st5   ;
txt_plat5->AppendText(mystring4);

}

void interfaceCommande::OnButton2Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TENTREE WHERE IDe=2;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TENTREE WHERE IDe=2;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);
    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEENTREE (IDa,IDe) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",2);";
    const char * req3;
    req3=requette2.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::OnButton3Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TENTREE WHERE IDe=3;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TENTREE WHERE IDe=3;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEENTREE (IDa,IDe) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",3);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::OnButton4Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TENTREE WHERE IDe=4;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TENTREE WHERE IDe=4;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEENTREE (IDa,IDe) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",4);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::OnButton5Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TENTREE WHERE IDe=5;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TENTREE WHERE IDe=5;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEENTREE (IDa,IDe) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",5);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::Onbtn_plat1Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TPLATS WHERE IDp=1;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TPLATS WHERE IDp=1;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEPLATS (IDa,IDp) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",1 );";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);

}

void interfaceCommande::Onbtn_plat2Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TPLATS WHERE IDp=2;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TPLATS WHERE IDp=2;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEPLATS (IDa,IDp) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",2);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::Onbtn_plat3Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TPLATS WHERE IDp=3;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TPLATS WHERE IDp=3;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEPLATS (IDa,IDp) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",3);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::Onbtn_plat4Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TPLATS WHERE IDp=4;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TPLATS WHERE IDp=4;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEPLATS (IDa,IDp) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",4);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::Onbtn_plat5Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TPLATS WHERE IDp=5;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TPLATS WHERE IDp=5;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEPLATS (IDa,IDp) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",5);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);
}

void interfaceCommande::OnBitmapButton3Click(wxCommandEvent& event)
{
    txt_des1->Clear();
    wxString requette;
    requette<<"SELECT NOM FROM TDESSERT WHERE IDd=1;";
const char * req;
req=requette.mb_str();
string st=db4->selection((char *)req);
wxString mystring;
mystring<<st;
txt_des1->AppendText(mystring);


txt_des2->Clear();
    wxString requette2;
    requette2<<"SELECT NOM FROM TDESSERT WHERE IDd=2;";
const char * req2;
req2=requette2.mb_str();
string st2=db4->selection((char *)req2);
wxString mystring2;
mystring2<<st2;
txt_des2->AppendText(mystring2);


txt_des3->Clear();
    wxString requette3;
    requette3<<"SELECT NOM FROM TDESSERT WHERE IDd=3;";
const char * req3;
req3=requette3.mb_str();
string st3=db4->selection((char *)req3);
wxString mystring3;
mystring3<<st3;
txt_des3->AppendText(mystring3);


txt_des4->Clear();
    wxString requette4;
    requette4<<"SELECT NOM FROM TDESSERT WHERE IDd=4;";
const char * req4;
req4=requette4.mb_str();
string st4=db4->selection((char *)req4);
wxString mystring4;
mystring4<<st4   ;
txt_des4->AppendText(mystring4);

txt_des5->Clear();
    wxString requette5;
    requette5<<"SELECT NOM FROM TDESSERT WHERE IDd=5;";
const char * req5;
req5=requette5.mb_str();
string st5=db4->selection((char *)req5);
wxString mystring5;
mystring5<<st5   ;
txt_des5->AppendText(mystring4);

}

void interfaceCommande::Onbtn_des1Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TDESSERT WHERE IDd=1;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TDESSERT WHERE IDd=1;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

    wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEDESSERT (IDa,IDd) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",1 );";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);

}

void interfaceCommande::Onbtn_des2Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TDESSERT WHERE IDd=2;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TDESSERT WHERE IDd=2;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

     wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEDESSERT (IDa,IDd) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",2);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);


}

void interfaceCommande::Onbtn_des3Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TDESSERT WHERE IDd=3;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TDESSERT WHERE IDd=3;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

     wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEDESSERT (IDa,IDd) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<",3);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);


}

void interfaceCommande::Onbtn_des4Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TDESSERT WHERE IDd=4;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

    wxString requette2;
    requette2<<"SELECT PRIX FROM TDESSERT WHERE IDd=4;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

     wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEDESSERT (IDa,IDd) VALUES("<<wxString::Format(wxT("%d"),idaddition) <<", 4);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);


}

void interfaceCommande::Onbtn_des5Click(wxCommandEvent& event)
{
    wxString requette;
    requette<<"SELECT NOM,PRIX FROM TDESSERT WHERE IDd=5;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

wxString requette2;
    requette2<<"SELECT PRIX FROM TDESSERT WHERE IDd=5;";
    const char * req2;
    req2=requette2.mb_str();
    string st2=db4->selection((char *)req2);

    total+= strtof(st2.c_str(),0);

     wxString requette3;
    requette3<<"INSERT INTO TCOMMANDEDESSERT (IDa,IDd) VALUES("<<wxString::Format(wxT("%d"),idaddition)<<",5);";
    const char * req3;
    req3=requette3.mb_str();
    db4->Table((char *) req3);


}

void interfaceCommande::Onbtn_comm_okClick(wxCommandEvent& event)
{
    wxDateTime n= wxDateTime::Now();
    wxString str = n.Format(wxT("%d/%m/%y"),wxDateTime::CET);
    wxString str2 = n.Format(wxT("%d/%m/%y || %H:%M:%S"),wxDateTime::CET);
    wxString requette;
    requette<<"INSERT INTO TADDITION (IDa,IDs,NTABLE,ADDITION,DATE) VALUES ("<<wxString::Format(wxT("%d"),idaddition) <<","<<txt_serveur->GetValue()<<","<<Choice1->GetColumns()<<","<<wxString::Format(wxT("%f"),total)<<",'"<<str<<"' );";
    const char * req;
    req=requette.mb_str();
    db4->Table((char *)req);
    txt_ticket->Clear();

    txt_ticket->AppendText(str2);
    txt_ticket->AppendText(wxString::Format("\n"));
    total=0.0;
    idaddition=idaddition+1;

}

void interfaceCommande::Onbtn_comm_totalClick(wxCommandEvent& event)
{
    wxString mystring;
    mystring<<"Total :"<<total;
    txt_ticket->AppendText(mystring);
    txt_ticket->AppendText(wxString::Format("\n"));

}

void interfaceCommande::Onbtn_comm_resetClick(wxCommandEvent& event)
{   txt_serveur->Clear();
    wxString requette;
    requette<<"SELECT IDs FROM TSERVEUR WHERE ENSERVICE=1;";
    const char * req;
    req=requette.mb_str();
    string st=db4->selection((char *)req);
    wxString mystring;
    mystring<<st;
    txt_serveur->AppendText(mystring);


    txt_ticket->Clear();
    wxDateTime n= wxDateTime::Now();
    wxString str = n.Format(wxT("%d/%m/%y || %H:%M:%S"),wxDateTime::CET);
    txt_ticket->AppendText(str);
    txt_ticket->AppendText(wxString::Format("\n"));

}

void interfaceCommande::Ontxt_des5Text(wxCommandEvent& event)
{
}

void interfaceCommande::OnNotebook1PageChanged(wxNotebookEvent& event)
{
}

void interfaceCommande::OnChoice1Select(wxCommandEvent& event)
{
}

void interfaceCommande::OnBitmapButton4Click(wxCommandEvent& event)
{   this->Destroy();
    db4->close();
}
