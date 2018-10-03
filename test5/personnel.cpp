#include "personnel.h"
#include"C:\projet C\base\base.h"
#include<iostream>
#include<wx/wx.h>

BASE *db1;

//(*InternalHeaders(personnel)
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(personnel)
const long personnel::ID_BUTTON4 = wxNewId();
const long personnel::ID_TEXTCTRL5 = wxNewId();
const long personnel::ID_TEXTCTRL6 = wxNewId();
const long personnel::ID_STATICTEXT5 = wxNewId();
const long personnel::ID_PANEL1 = wxNewId();
const long personnel::ID_TEXTCTRL2 = wxNewId();
const long personnel::ID_TEXTCTRL3 = wxNewId();
const long personnel::ID_TEXTCTRL4 = wxNewId();
const long personnel::ID_STATICTEXT2 = wxNewId();
const long personnel::ID_STATICTEXT3 = wxNewId();
const long personnel::ID_STATICTEXT4 = wxNewId();
const long personnel::ID_BUTTON1 = wxNewId();
const long personnel::ID_TEXTCTRL1 = wxNewId();
const long personnel::ID_PANEL2 = wxNewId();
const long personnel::ID_BUTTON2 = wxNewId();
const long personnel::ID_TEXTCTRL7 = wxNewId();
const long personnel::ID_TEXTCTRL8 = wxNewId();
const long personnel::ID_TEXTCTRL9 = wxNewId();
const long personnel::ID_STATICTEXT1 = wxNewId();
const long personnel::ID_STATICTEXT6 = wxNewId();
const long personnel::ID_BUTTON5 = wxNewId();
const long personnel::ID_PANEL3 = wxNewId();
const long personnel::ID_BUTTON3 = wxNewId();
const long personnel::ID_STATICTEXT7 = wxNewId();
const long personnel::ID_TEXTCTRL10 = wxNewId();
const long personnel::ID_STATICTEXT8 = wxNewId();
const long personnel::ID_TEXTCTRL11 = wxNewId();
const long personnel::ID_TEXTCTRL12 = wxNewId();
const long personnel::ID_STATICTEXT9 = wxNewId();
const long personnel::ID_TEXTCTRL13 = wxNewId();
const long personnel::ID_PANEL4 = wxNewId();
const long personnel::ID_NOTEBOOK1 = wxNewId();
const long personnel::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(personnel,wxFrame)
	//(*EventTable(personnel)
	//*)
END_EVENT_TABLE()

personnel::personnel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(personnel)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(517,450));
	SetMinSize(wxSize(517,450));
	SetMaxSize(wxSize(517,450));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(16,48), wxSize(328,224), 0, _T("ID_NOTEBOOK1"));
	Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	btn_recherche = new wxButton(Panel1, ID_BUTTON4, _("recherche"), wxPoint(312,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	txt_infonom = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(72,32), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	txt_info = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(72,72), wxSize(328,96), wxTE_PROCESS_TAB|wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("nom"), wxPoint(16,40), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	Panel2 = new wxPanel(Notebook1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	txt_nom = new wxTextCtrl(Panel2, ID_TEXTCTRL2, wxEmptyString, wxPoint(112,32), wxSize(144,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	txt_pass = new wxTextCtrl(Panel2, ID_TEXTCTRL3, wxEmptyString, wxPoint(112,72), wxSize(144,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	txt_salaire = new wxTextCtrl(Panel2, ID_TEXTCTRL4, wxEmptyString, wxPoint(112,112), wxSize(136,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("nom"), wxPoint(32,32), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("password"), wxPoint(32,72), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("salaire"), wxPoint(40,112), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	Btn_ajouter = new wxButton(Panel2, ID_BUTTON1, _("ajouter"), wxPoint(80,176), wxSize(88,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Btn_ajouter->SetHelpText(_("saisir nom,password,salaire"));
	txt_ajouter = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxPoint(288,24), wxSize(200,168), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	btn_sal = new wxButton(Panel3, ID_BUTTON2, _("modifier Salaire"), wxPoint(104,200), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btn_sal->SetHelpText(_("saisir nouveau salaire"));
	TextCtrl1 = new wxTextCtrl(Panel3, ID_TEXTCTRL7, wxEmptyString, wxPoint(272,16), wxSize(204,160), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	txt_nsal = new wxTextCtrl(Panel3, ID_TEXTCTRL8, wxEmptyString, wxPoint(128,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	txt_sal = new wxTextCtrl(Panel3, ID_TEXTCTRL9, wxEmptyString, wxPoint(128,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	StaticText1 = new wxStaticText(Panel3, ID_STATICTEXT1, _("nom"), wxPoint(32,56), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText6 = new wxStaticText(Panel3, ID_STATICTEXT6, _("nouveau salaire"), wxPoint(24,96), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	btn_infosalaire = new wxButton(Panel3, ID_BUTTON5, _("info salaire"), wxPoint(344,200), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	Panel4 = new wxPanel(Notebook1, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	btn_pass = new wxButton(Panel4, ID_BUTTON3, _("modifier pass"), wxPoint(136,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	StaticText7 = new wxStaticText(Panel4, ID_STATICTEXT7, _("nom"), wxPoint(64,48), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	txt_mp_nom = new wxTextCtrl(Panel4, ID_TEXTCTRL10, wxEmptyString, wxPoint(120,48), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	StaticText8 = new wxStaticText(Panel4, ID_STATICTEXT8, _("password"), wxPoint(40,96), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	txt_mp_pass = new wxTextCtrl(Panel4, ID_TEXTCTRL11, wxEmptyString, wxPoint(120,96), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	txt_mp_pass2 = new wxTextCtrl(Panel4, ID_TEXTCTRL12, wxEmptyString, wxPoint(120,152), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	StaticText9 = new wxStaticText(Panel4, ID_STATICTEXT9, _("repassword"), wxPoint(40,160), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	TextCtrl2 = new wxTextCtrl(Panel4, ID_TEXTCTRL13, wxEmptyString, wxPoint(320,48), wxSize(140,152), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	Notebook1->AddPage(Panel1, _("infoServeur"), false);
	Notebook1->AddPage(Panel2, _("ajouterServeur"), false);
	Notebook1->AddPage(Panel3, _("modifier Salaire"), false);
	Notebook1->AddPage(Panel4, _("modifier pass"), false);
	StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
	int __wxStatusBarWidths_1[1] = { -10 };
	int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
	StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
	StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
	SetStatusBar(StatusBar1);

	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&personnel::Onbtn_rechercheClick);
	Panel1->Connect(wxEVT_PAINT,(wxObjectEventFunction)&personnel::OnPanel1Paint,0,this);
	Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&personnel::Ontxt_nomText);
	Connect(ID_TEXTCTRL4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&personnel::Ontxt_salaireText);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&personnel::OnBtn_ajouterClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&personnel::Onbtn_salClick);
	Connect(ID_TEXTCTRL7,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&personnel::OnTextCtrl1Text);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&personnel::Onbtn_infosalaireClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&personnel::Onbtn_passClick);
	Connect(ID_TEXTCTRL10,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&personnel::Ontxt_mp_nomText);
	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&personnel::OnClose);
	//*)
	db1= new BASE("yafet2");

}

personnel::~personnel()
{
	//(*Destroy(personnel)
	//*)
}


void personnel::Ontxt_salaireText(wxCommandEvent& event)
{
}

void personnel::OnBtn_ajouterClick(wxCommandEvent& event)
{
    int x;

wxString requette,requette2;
x=(txt_nom->GetValue()).Cmp(wxT(" "));
if (x==-1){wxMessageBox(wxT("saisir un nom "));
            x=(txt_pass->GetValue()).Cmp(wxT(" "));}
else if (x==-1){wxMessageBox(wxT("saisir un password "));
            x=(txt_salaire->GetValue()).Cmp(wxT(" "));}
else if (x==-1){wxMessageBox(wxT("saisir un salaire "));}
else {requette<<"INSERT INTO TSERVEUR (NSERVEUR,PASS,SALAIRE,ENSERVICE)VALUES("<<"'"<<txt_nom->GetValue()<<"','"<<txt_pass->GetValue()<<"',"<<txt_salaire->GetValue()<<",0);";

const char * req;
req=requette.mb_str();
db1->Table((char*)req);

requette2<<"SELECT * FROM TSERVEUR WHERE NSERVEUR= '"<<txt_nom->GetValue()<<"';";
const char * req2;
req2=requette2.mb_str();
string st=db1->selection((char *)req2);
wxString mystring;
mystring<<st;
txt_ajouter->AppendText(mystring);

txt_nom->Clear();
txt_pass->Clear();
txt_salaire->Clear();
txt_ajouter->AppendText("\n");

}

}

void personnel::OnClose(wxCloseEvent& event)
{
    Destroy();
}

void personnel::Ontxt_nomText(wxCommandEvent& event)
{
}

void personnel::Onbtn_rechercheClick(wxCommandEvent& event)
{   txt_info->Clear();
    wxString requette2;
    requette2<<"SELECT * FROM TSERVEUR WHERE NSERVEUR= '"<<txt_infonom->GetValue()<<"';";
const char * req2;
req2=requette2.mb_str();
string st=db1->selection((char *)req2);

//string st=db1->selection("SELECT * FROM TSERVEUR;");
wxString mystring;
mystring<<st;
txt_info->AppendText(mystring);

}

void personnel::OnTextCtrl1Text(wxCommandEvent& event)
{

}

void personnel::Onbtn_infosalaireClick(wxCommandEvent& event)
{   TextCtrl1->Clear();
    wxString requette1;
    requette1<<"SELECT SALAIRE FROM TSERVEUR WHERE NSERVEUR='"<<txt_nsal->GetValue()<<"' ;";
const char * req1;
req1=requette1.mb_str();
string st=db1->selection((char *)req1);
wxString mystring;
mystring<<st;
TextCtrl1->AppendText(wxT("ANCIEN SALAIRE: "));
TextCtrl1->AppendText(mystring);
TextCtrl1->AppendText(wxString::Format(wxT("\n")));


}

void personnel::Onbtn_salClick(wxCommandEvent& event)
{
    TextCtrl1->AppendText(wxT("NOUVEAU SALAIRE :"));
    wxString requette1;
    requette1<<"UPDATE TSERVEUR SET SALAIRE = "<<txt_sal->GetValue()<<" WHERE NSERVEUR = '"<<txt_nsal->GetValue()<<"' ;";
    const char *req1;
    req1=requette1.mb_str();
    db1->Table((char*)req1);

    wxString requette2;
    requette2<<"SELECT SALAIRE FROM TSERVEUR WHERE NSERVEUR='"<<txt_nsal->GetValue()<<"' ;";
const char * req2;
req2=requette2.mb_str();
string st=db1->selection((char *)req2);
wxString mystring;
mystring<<st;
TextCtrl1->AppendText(mystring);
TextCtrl1->AppendText(wxString::Format(wxT("\n")));

}

void personnel::Ontxt_mp_nomText(wxCommandEvent& event)
{
}

void personnel::Onbtn_passClick(wxCommandEvent& event)
{   TextCtrl2->Clear();
    int x=(txt_mp_nom->GetValue()).Cmp(wxT(" "));
    if(x==-1)
    {
        wxMessageBox(wxT("saisir un nom!!"));
    }
    else
    {
        TextCtrl2->AppendText(wxT("ANCIEN MOT DE PASSE :"));
        TextCtrl2->AppendText(wxString::Format(wxT("\n")));


        wxString requette1;
    requette1<<"SELECT PASS FROM TSERVEUR WHERE NSERVEUR='"<<txt_mp_nom->GetValue()<<"' ;";
const char * req1;
req1=requette1.mb_str();
string st=db1->selection((char *)req1);
wxString mystring;
mystring<<st;
TextCtrl2->AppendText(mystring);
TextCtrl2->AppendText(wxString::Format(wxT("\n")));


int y=(txt_mp_pass->GetValue()).Cmp(txt_mp_pass2->GetValue());
    if(y!=0)
    {
        wxMessageBox(wxT("retaper mot de passe !!"));

    }
    else
    {
        TextCtrl2->AppendText(wxT("NOUVELLE MOTS DE PASSE :"));

         wxString requette2;
        requette2<<"UPDATE TSERVEUR SET PASS ='"<<txt_mp_pass->GetValue()<<"' WHERE NSERVEUR='"<<txt_mp_nom->GetValue()<<"' ;";
        const char * req2;
        req2=requette2.mb_str();
        db1->Table((char *)req2);

        wxString requette3;
        requette3<<"SELECT PASS FROM TSERVEUR WHERE NSERVEUR='"<<txt_mp_nom->GetValue()<<"' ;";
        const char * req3;
        req3=requette3.mb_str();
        string st=db1->selection((char *)req3);
        wxString mystring;
        mystring<<st;
        TextCtrl2->AppendText(mystring);
        TextCtrl1->AppendText(wxString::Format(wxT("\n")));



    }

    }
}

void personnel::OnPanel1Paint(wxPaintEvent& event)
{
}
