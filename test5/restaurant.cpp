#include "restaurant.h"
#include"C:\projet C\base\base.h"
#include<iostream>
#include<wx/wx.h>

BASE *db2;

//(*InternalHeaders(restaurant)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(restaurant)
const long restaurant::ID_TEXTCTRL1 = wxNewId();
const long restaurant::ID_STATICTEXT1 = wxNewId();
const long restaurant::ID_TEXTCTRL2 = wxNewId();
const long restaurant::ID_TEXTCTRL3 = wxNewId();
const long restaurant::ID_STATICTEXT2 = wxNewId();
const long restaurant::ID_STATICTEXT3 = wxNewId();
const long restaurant::ID_BUTTON1 = wxNewId();
const long restaurant::ID_BUTTON2 = wxNewId();
const long restaurant::ID_BUTTON3 = wxNewId();
const long restaurant::ID_BUTTON4 = wxNewId();
const long restaurant::ID_TEXTCTRL4 = wxNewId();
const long restaurant::ID_BUTTON5 = wxNewId();
const long restaurant::ID_PANEL1 = wxNewId();
const long restaurant::ID_TEXTCTRL5 = wxNewId();
const long restaurant::ID_TEXTCTRL6 = wxNewId();
const long restaurant::ID_TEXTCTRL7 = wxNewId();
const long restaurant::ID_TEXTCTRL8 = wxNewId();
const long restaurant::ID_BUTTON6 = wxNewId();
const long restaurant::ID_BUTTON7 = wxNewId();
const long restaurant::ID_BUTTON8 = wxNewId();
const long restaurant::ID_BUTTON9 = wxNewId();
const long restaurant::ID_BUTTON10 = wxNewId();
const long restaurant::ID_STATICTEXT4 = wxNewId();
const long restaurant::ID_STATICTEXT5 = wxNewId();
const long restaurant::ID_STATICTEXT6 = wxNewId();
const long restaurant::ID_PANEL2 = wxNewId();
const long restaurant::ID_TEXTCTRL9 = wxNewId();
const long restaurant::ID_TEXTCTRL10 = wxNewId();
const long restaurant::ID_TEXTCTRL11 = wxNewId();
const long restaurant::ID_TEXTCTRL12 = wxNewId();
const long restaurant::ID_BUTTON11 = wxNewId();
const long restaurant::ID_BUTTON12 = wxNewId();
const long restaurant::ID_BUTTON13 = wxNewId();
const long restaurant::ID_BUTTON14 = wxNewId();
const long restaurant::ID_BUTTON15 = wxNewId();
const long restaurant::ID_STATICTEXT7 = wxNewId();
const long restaurant::ID_STATICTEXT8 = wxNewId();
const long restaurant::ID_STATICTEXT9 = wxNewId();
const long restaurant::ID_PANEL3 = wxNewId();
const long restaurant::ID_NOTEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(restaurant,wxFrame)
	//(*EventTable(restaurant)
	//*)
END_EVENT_TABLE()

restaurant::restaurant(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(restaurant)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(517,450));
	SetMinSize(wxSize(517,450));
	SetMaxSize(wxSize(517,450));
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(216,144), wxDefaultSize, 0, _T("ID_NOTEBOOK1"));
	Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	txt_ent_nom = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(128,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("nom"), wxPoint(56,40), wxSize(40,16), 0, _T("ID_STATICTEXT1"));
	txt_ent_prix = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(128,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	txt_ent_cout = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(128,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("prix"), wxPoint(48,96), wxSize(40,13), 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("cout"), wxPoint(56,152), wxSize(32,13), 0, _T("ID_STATICTEXT3"));
	btn_ent_ajout = new wxButton(Panel1, ID_BUTTON1, _("ajouter"), wxPoint(16,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btn_ent_supp = new wxButton(Panel1, ID_BUTTON2, _("supprimer"), wxPoint(112,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btn_ent_rech = new wxButton(Panel1, ID_BUTTON3, _("recherche"), wxPoint(208,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	btn_ent_mod = new wxButton(Panel1, ID_BUTTON4, _("modifier"), wxPoint(304,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	txt_ent_info = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(296,40), wxSize(176,144), wxTE_AUTO_SCROLL|wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	btn_ent_aff = new wxButton(Panel1, ID_BUTTON5, _("afficher"), wxPoint(400,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	Panel2 = new wxPanel(Notebook1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	txt_plat_nom = new wxTextCtrl(Panel2, ID_TEXTCTRL5, wxEmptyString, wxPoint(96,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	txt_plat_prix = new wxTextCtrl(Panel2, ID_TEXTCTRL6, wxEmptyString, wxPoint(96,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	txt_plat_cout = new wxTextCtrl(Panel2, ID_TEXTCTRL7, wxEmptyString, wxPoint(96,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	txt_plat_info = new wxTextCtrl(Panel2, ID_TEXTCTRL8, wxEmptyString, wxPoint(272,32), wxSize(208,128), wxTE_AUTO_SCROLL|wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	btn_plat_ajouter = new wxButton(Panel2, ID_BUTTON6, _("ajouter"), wxPoint(32,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	btn_plat_supp = new wxButton(Panel2, ID_BUTTON7, _("supprimer"), wxPoint(120,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	btn_plat_recherche = new wxButton(Panel2, ID_BUTTON8, _("recherche"), wxPoint(224,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	btn_plat_mod = new wxButton(Panel2, ID_BUTTON9, _("modifier"), wxPoint(320,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	btn_plat_affichage = new wxButton(Panel2, ID_BUTTON10, _("afficher"), wxPoint(416,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("nom"), wxPoint(32,40), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("prix"), wxPoint(32,104), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT6, _("cout"), wxPoint(32,152), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	txt_des_nom = new wxTextCtrl(Panel3, ID_TEXTCTRL9, wxEmptyString, wxPoint(104,40), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	txt_des_prix = new wxTextCtrl(Panel3, ID_TEXTCTRL10, wxEmptyString, wxPoint(104,104), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	txt_des_cout = new wxTextCtrl(Panel3, ID_TEXTCTRL11, wxEmptyString, wxPoint(104,168), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	txt_des_info = new wxTextCtrl(Panel3, ID_TEXTCTRL12, wxEmptyString, wxPoint(296,32), wxSize(160,152), wxTE_AUTO_SCROLL|wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	btn_des_ajouter = new wxButton(Panel3, ID_BUTTON11, _("ajouter"), wxPoint(24,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
	btn_des_supp = new wxButton(Panel3, ID_BUTTON12, _("supprimer"), wxPoint(120,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON12"));
	btn_des_recherche = new wxButton(Panel3, ID_BUTTON13, _("recherche"), wxPoint(216,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON13"));
	btn_des_modifier = new wxButton(Panel3, ID_BUTTON14, _("modifier"), wxPoint(312,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON14"));
	btn_des_aff = new wxButton(Panel3, ID_BUTTON15, _("afficher"), wxPoint(416,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON15"));
	StaticText7 = new wxStaticText(Panel3, ID_STATICTEXT7, _("nom"), wxPoint(24,40), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText8 = new wxStaticText(Panel3, ID_STATICTEXT8, _("prix"), wxPoint(32,104), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText9 = new wxStaticText(Panel3, ID_STATICTEXT9, _("cout"), wxPoint(32,176), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	Notebook1->AddPage(Panel1, _("ENTREE"), false);
	Notebook1->AddPage(Panel2, _("PLATS"), false);
	Notebook1->AddPage(Panel3, _("DESSERTS"), false);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_ent_ajoutClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_ent_suppClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_ent_rechClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_ent_modClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_ent_affClick);
	Connect(ID_TEXTCTRL5,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&restaurant::Ontxt_plat_nomText);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_plat_ajouterClick);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_plat_suppClick);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_plat_rechercheClick);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_plat_modClick);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_plat_affichageClick);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_des_ajouterClick);
	Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_des_suppClick);
	Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_des_rechercheClick);
	Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_des_modifierClick);
	Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&restaurant::Onbtn_des_affClick);
	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&restaurant::OnClose);
	//*)

	db2= new BASE("yafet2");
}

restaurant::~restaurant()
{
	//(*Destroy(restaurant)
	//*)
}


void restaurant::OnClose(wxCloseEvent& event)
{
    db2->close();
    Destroy();
}

void restaurant::Onbtn_ent_ajoutClick(wxCommandEvent& event)
{


wxString requette,requette2;

if ( (txt_ent_nom->GetValue()).Cmp(wxT(" ")) == -1 )
    {
        wxMessageBox(wxT("saisir un nom "));
    }
else if ( (txt_ent_prix->GetValue()).Cmp(wxT(" ")) ==-1)
    {
        wxMessageBox(wxT("saisir un prix "));
    }

else if ( (txt_ent_cout->GetValue()).Cmp(wxT(" ")) ==-1){wxMessageBox(wxT("saisir le cout "));}
else {
        requette<<"INSERT INTO TENTREE (NOM,PRIX,COUT)VALUES("<<"'"<<txt_ent_nom->GetValue()<<"',"<<txt_ent_prix->GetValue()<<","<<txt_ent_cout->GetValue()<<");";

const char * req;
req=requette.mb_str();
db2->Table((char*)req);

requette2<<"SELECT * FROM TENTREE WHERE NOM= '"<<txt_ent_nom->GetValue()<<"';";
const char * req2;
req2=requette2.mb_str();
string st=db2->selection((char *)req2);
wxString mystring;
mystring<<st;
txt_ent_info->AppendText(mystring);

txt_ent_nom->Clear();
txt_ent_prix->Clear();
txt_ent_cout->Clear();
txt_ent_info->AppendText(wxString::Format(wxT("\n")));

}

}

void restaurant::Onbtn_ent_rechClick(wxCommandEvent& event)
{
    txt_ent_info->Clear();
    wxString requette2;
    requette2<<"SELECT NOM FROM TENTREE ;";
const char * req2;
req2=requette2.mb_str();
string st=db2->selection((char *)req2);

//string st=db1->selection("SELECT * FROM TSERVEUR;");
wxString mystring;
mystring<<st;
txt_ent_info->AppendText(mystring);
txt_ent_info->AppendText(wxString::Format(wxT("\n")));

}

void restaurant::Onbtn_ent_suppClick(wxCommandEvent& event)
{
    txt_ent_info->Clear();
    wxString requette2;
    requette2<<"DELETE FROM TENTREE WHERE NOM='"<<txt_ent_nom->GetValue()<<"';";
const char * req2;
req2=requette2.mb_str();
string st=db2->selection((char *)req2);

//string st=db1->selection("SELECT * FROM TSERVEUR;");
wxString mystring;
mystring<<st;
txt_ent_info->AppendText(mystring);
txt_ent_info->AppendText(wxString::Format(wxT("\n")));

}

void restaurant::Onbtn_ent_modClick(wxCommandEvent& event)
{
  txt_ent_info->Clear();


  if( (txt_ent_nom->GetValue()).Cmp(wxT(" ")) == -1 )
    {
        wxMessageBox(wxT("saisir un nom!!"));
    }
    else if ( (txt_ent_prix->GetValue()).Cmp(wxT(" ")) != -1  )
    {
         wxString requette1;
        requette1<<"UPDATE TENTREE SET PRIX ="<<txt_ent_prix->GetValue()<<" ;";
        const char * req1;
        req1=requette1.mb_str();
        db2->Table((char *)req1);
    }
    else if( (txt_ent_cout->GetValue()).Cmp(wxT(" ")) != -1 )
    {
        wxString requette2;
        requette2<<"UPDATE TENTREE SET COUT ="<<txt_ent_cout->GetValue()<<" ;";
        const char * req2;
        req2=requette2.mb_str();
        db2->Table((char *)req2);

    }
    else
    {
        wxMessageBox(wxT("saisir un prix ou un cout !!"));
    }
            wxString requette3;
        requette3<<"SELECT * FROM TENTREE WHERE NOM='"<<txt_ent_nom->GetValue()<<"' ;";
        const char * req3;
        req3=requette3.mb_str();
        string st=db2->selection((char *)req3);
        wxString mystring;
        mystring<<st;
        txt_ent_info->AppendText(mystring);
        txt_ent_info->AppendText(wxString::Format(wxT("\n")));

}

void restaurant::Onbtn_ent_affClick(wxCommandEvent& event)
{
        txt_ent_info->Clear();
        wxString requette1;
        requette1<<"SELECT * FROM TENTREE WHERE NOM='"<<txt_ent_nom->GetValue()<<"' ;";
        const char * req1;
        req1=requette1.mb_str();
        string st=db2->selection((char *)req1);
        wxString mystring;
        mystring<<st;
        txt_ent_info->AppendText(mystring);
        txt_ent_info->AppendText(wxString::Format(wxT("\n")));

}

/* les plats*/

void restaurant::Onbtn_plat_ajouterClick(wxCommandEvent& event)
{
    wxString requette,requette2;

if ( (txt_plat_nom->GetValue()).Cmp(wxT(" ")) == -1 )
    {
        wxMessageBox(wxT("saisir un nom "));
    }
else if ( (txt_plat_prix->GetValue()).Cmp(wxT(" ")) ==-1)
    {
        wxMessageBox(wxT("saisir un prix "));
    }

else if ( (txt_plat_cout->GetValue()).Cmp(wxT(" ")) ==-1){wxMessageBox(wxT("saisir le cout "));}
else {
        requette<<"INSERT INTO TPLATS (NOM,PRIX,COUT)VALUES("<<"'"<<txt_plat_nom->GetValue()<<"',"<<txt_plat_prix->GetValue()<<","<<txt_plat_cout->GetValue()<<");";

const char * req;
req=requette.mb_str();
db2->Table((char*)req);

requette2<<"SELECT * FROM TPLATS WHERE NOM= '"<<txt_plat_nom->GetValue()<<"' ORDER BY IDp DESC;";
const char * req2;
req2=requette2.mb_str();
string st=db2->selection((char *)req2);
wxString mystring;
mystring<<st;
txt_plat_info->AppendText(mystring);
txt_plat_info->AppendText(wxString::Format(wxT("\n")));

txt_plat_nom->Clear();
txt_plat_prix->Clear();
txt_plat_cout->Clear();

}
}
void restaurant::Onbtn_plat_suppClick(wxCommandEvent& event)
{
    txt_plat_info->Clear();
    wxString requette2;
    requette2<<"DELETE FROM TPLATS WHERE NOM='"<<txt_plat_nom->GetValue()<<"';";
    const char * req2;
    req2=requette2.mb_str();
    string st=db2->selection((char *)req2);
    wxString mystring;
    mystring<<st;
    txt_plat_info->AppendText(mystring);
    txt_plat_info->AppendText(wxString::Format(wxT("\n")));
//code d'erreur !!!
}

void restaurant::Onbtn_plat_rechercheClick(wxCommandEvent& event)
{
    txt_plat_info->Clear();
    wxString requette2;
    requette2<<"SELECT NOM FROM TPLATS ;";
    const char * req2;
    req2=requette2.mb_str();
    string st=db2->selection((char *)req2);


    wxString mystring;
    mystring<<st;
    txt_plat_info->AppendText(mystring);
    txt_plat_info->AppendText(wxString::Format(wxT("\n")));
}




void restaurant::Onbtn_plat_modClick(wxCommandEvent& event)
{
     txt_plat_info->Clear();


  if( (txt_plat_nom->GetValue()).Cmp(wxT(" ")) == -1 )
    {
        wxMessageBox(wxT("saisir un nom!!"));
    }
    else if ( (txt_plat_prix->GetValue()).Cmp(wxT(" ")) != -1  )
    {
         wxString requette1;
        requette1<<"UPDATE TPLATS SET PRIX ="<<txt_plat_prix->GetValue()<<" ;";
        const char * req1;
        req1=requette1.mb_str();
        db2->Table((char *)req1);
    }
    else if( (txt_plat_cout->GetValue()).Cmp(wxT(" ")) != -1 )
    {
        wxString requette2;
        requette2<<"UPDATE TPLATS SET COUT ="<<txt_plat_cout->GetValue()<<" ;";
        const char * req2;
        req2=requette2.mb_str();
        db2->Table((char *)req2);

    }
    else
    {
        wxMessageBox(wxT("saisir un prix ou un cout !!"));
    }
            wxString requette3;
            requette3<<"SELECT * FROM TPLATS WHERE NOM='"<<txt_plat_nom->GetValue()<<"' ;";
            const char * req3;
            req3=requette3.mb_str();
            string st=db2->selection((char *)req3);
            wxString mystring;
            mystring<<st;
            txt_plat_info->AppendText(mystring);
            txt_plat_info->AppendText(wxString::Format(wxT("\n")));
}

void restaurant::Onbtn_plat_affichageClick(wxCommandEvent& event)
{
        txt_plat_info->Clear();
        wxString requette1;
        requette1<<"SELECT * FROM TPLATS WHERE NOM = '"<<txt_plat_nom->GetValue()<<"' ;";
        const char * req1;
        req1=requette1.mb_str();
        string st=db2->selection((char *)req1);
        wxString mystring;
        mystring<<st;
        txt_plat_info->AppendText(mystring);
        txt_plat_info->AppendText(wxString::Format(wxT("\n")));
}

/*les desserts*/

void restaurant::Onbtn_des_ajouterClick(wxCommandEvent& event)
{
    wxString requette,requette2;

if ( (txt_des_nom->GetValue()).Cmp(wxT(" ")) == -1 )
    {
        wxMessageBox(wxT("saisir un nom "));
    }
else if ( (txt_des_prix->GetValue()).Cmp(wxT(" ")) ==-1)
    {
        wxMessageBox(wxT("saisir un prix "));
    }

else if ( (txt_des_cout->GetValue()).Cmp(wxT(" ")) ==-1){wxMessageBox(wxT("saisir le cout "));}
else {
        requette<<"INSERT INTO TDESSERT (NOM,PRIX,COUT)VALUES("<<"'"<<txt_des_nom->GetValue()<<"',"<<txt_des_prix->GetValue()<<","<<txt_des_cout->GetValue()<<");";

    const char * req;
    req=requette.mb_str();
    db2->Table((char*)req);

    requette2<<"SELECT * FROM TDESSERT WHERE NOM= '"<<txt_des_nom->GetValue()<<"';";
    const char * req2;
    req2=requette2.mb_str();
    string st=db2->selection((char *)req2);
    wxString mystring;
    mystring<<st;
    txt_des_info->AppendText(mystring);
    txt_des_info->AppendText(wxString::Format(wxT("\n")));

    txt_des_nom->Clear();
    txt_des_prix->Clear();
    txt_des_cout->Clear();
    txt_des_info->AppendText("\n");

}
}

void restaurant::Onbtn_des_suppClick(wxCommandEvent& event)
{
    txt_des_info->Clear();
    wxString requette2;
    requette2<<"DELETE FROM TDESSERT WHERE NOM='"<<txt_des_nom->GetValue()<<"';";
    const char * req2;
    req2=requette2.mb_str();
    string st=db2->selection((char *)req2);
    wxString mystring;
    mystring<<st;
    txt_des_info->AppendText(mystring);
    txt_des_info->AppendText(wxString::Format(wxT("\n")));
}

void restaurant::Onbtn_des_rechercheClick(wxCommandEvent& event)
{
    txt_des_info->Clear();
    wxString requette2;
    requette2<<"SELECT NOM FROM TDESSERT ;";
    const char * req2;
    req2=requette2.mb_str();
    string st=db2->selection((char *)req2);

//string st=db1->selection("SELECT * FROM TSERVEUR;");
    wxString mystring;
    mystring<<st;
    txt_des_info->AppendText(mystring);
    txt_des_info->AppendText(wxString::Format(wxT("\n")));
}

void restaurant::Onbtn_des_modifierClick(wxCommandEvent& event)
{
     txt_des_info->Clear();


  if( (txt_des_nom->GetValue()).Cmp(wxT(" ")) == -1 )
    {
        wxMessageBox(wxT("saisir un nom!!"));
    }
    else if ( (txt_des_prix->GetValue()).Cmp(wxT(" ")) != -1  )
    {
         wxString requette1;
        requette1<<"UPDATE TDESSERT SET PRIX ="<<txt_des_prix->GetValue()<<" ;";
        const char * req1;
        req1=requette1.mb_str();
        db2->Table((char *)req1);
    }
    else if( (txt_des_cout->GetValue()).Cmp(wxT(" ")) != -1 )
    {
        wxString requette2;
        requette2<<"UPDATE TDESSERT SET COUT ="<<txt_des_cout->GetValue()<<" ;";
        const char * req2;
        req2=requette2.mb_str();
        db2->Table((char *)req2);

    }
    else
    {
        wxMessageBox(wxT("saisir un prix ou un cout !!"));
    }
            wxString requette3;
            requette3<<"SELECT * FROM TDESSERT WHERE NOM='"<<txt_des_nom->GetValue()<<"' ;";
            const char * req3;
            req3=requette3.mb_str();
            string st=db2->selection((char *)req3);
            wxString mystring;
            mystring<<st;
            txt_des_info->AppendText(mystring);
            txt_des_info->AppendText(wxString::Format(wxT("\n")));


}

void restaurant::Onbtn_des_affClick(wxCommandEvent& event)
{
        txt_des_info->Clear();
        wxString requette1;
        requette1<<"SELECT * FROM TDESSERT WHERE NOM='"<<txt_des_nom->GetValue()<<"' ;";
        const char * req1;
        req1=requette1.mb_str();
        string st=db2->selection((char *)req1);
        wxString mystring;
        mystring<<st;
        txt_des_info->AppendText(mystring);
        txt_des_info->AppendText(wxString::Format(wxT("\n")));
}

void restaurant::Ontxt_plat_nomText(wxCommandEvent& event)
{
}
