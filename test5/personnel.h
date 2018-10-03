#ifndef PERSONNEL_H
#define PERSONNEL_H

//(*Headers(personnel)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class personnel: public wxFrame
{
	public:

		personnel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~personnel();

		//(*Declarations(personnel)
		wxButton* Btn_ajouter;
		wxButton* btn_infosalaire;
		wxButton* btn_pass;
		wxButton* btn_recherche;
		wxButton* btn_sal;
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* Panel3;
		wxPanel* Panel4;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxStatusBar* StatusBar1;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* txt_ajouter;
		wxTextCtrl* txt_info;
		wxTextCtrl* txt_infonom;
		wxTextCtrl* txt_mp_nom;
		wxTextCtrl* txt_mp_pass2;
		wxTextCtrl* txt_mp_pass;
		wxTextCtrl* txt_nom;
		wxTextCtrl* txt_nsal;
		wxTextCtrl* txt_pass;
		wxTextCtrl* txt_sal;
		wxTextCtrl* txt_salaire;
		//*)

	protected:

		//(*Identifiers(personnel)
		static const long ID_BUTTON4;
		static const long ID_TEXTCTRL5;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT5;
		static const long ID_PANEL1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_BUTTON1;
		static const long ID_TEXTCTRL1;
		static const long ID_PANEL2;
		static const long ID_BUTTON2;
		static const long ID_TEXTCTRL7;
		static const long ID_TEXTCTRL8;
		static const long ID_TEXTCTRL9;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT6;
		static const long ID_BUTTON5;
		static const long ID_PANEL3;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL10;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL11;
		static const long ID_TEXTCTRL12;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL13;
		static const long ID_PANEL4;
		static const long ID_NOTEBOOK1;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(personnel)
		void Ontxt_salaireText(wxCommandEvent& event);
		void OnBtn_ajouterClick(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void Ontxt_nomText(wxCommandEvent& event);
		void Onbtn_rechercheClick(wxCommandEvent& event);
		void OnTextCtrl1Text(wxCommandEvent& event);
		void Onbtn_infosalaireClick(wxCommandEvent& event);
		void Onbtn_salClick(wxCommandEvent& event);
		void Ontxt_mp_nomText(wxCommandEvent& event);
		void Onbtn_passClick(wxCommandEvent& event);
		void OnPanel1Paint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
