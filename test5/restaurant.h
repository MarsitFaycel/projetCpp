#ifndef RESTAURANT_H
#define RESTAURANT_H

//(*Headers(restaurant)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class restaurant: public wxFrame
{
	public:

		restaurant(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~restaurant();

		//(*Declarations(restaurant)
		wxButton* btn_des_aff;
		wxButton* btn_des_ajouter;
		wxButton* btn_des_modifier;
		wxButton* btn_des_recherche;
		wxButton* btn_des_supp;
		wxButton* btn_ent_aff;
		wxButton* btn_ent_ajout;
		wxButton* btn_ent_mod;
		wxButton* btn_ent_rech;
		wxButton* btn_ent_supp;
		wxButton* btn_plat_affichage;
		wxButton* btn_plat_ajouter;
		wxButton* btn_plat_mod;
		wxButton* btn_plat_recherche;
		wxButton* btn_plat_supp;
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* Panel3;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxTextCtrl* txt_des_cout;
		wxTextCtrl* txt_des_info;
		wxTextCtrl* txt_des_nom;
		wxTextCtrl* txt_des_prix;
		wxTextCtrl* txt_ent_cout;
		wxTextCtrl* txt_ent_info;
		wxTextCtrl* txt_ent_nom;
		wxTextCtrl* txt_ent_prix;
		wxTextCtrl* txt_plat_cout;
		wxTextCtrl* txt_plat_info;
		wxTextCtrl* txt_plat_nom;
		wxTextCtrl* txt_plat_prix;
		//*)

	protected:

		//(*Identifiers(restaurant)
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_TEXTCTRL4;
		static const long ID_BUTTON5;
		static const long ID_PANEL1;
		static const long ID_TEXTCTRL5;
		static const long ID_TEXTCTRL6;
		static const long ID_TEXTCTRL7;
		static const long ID_TEXTCTRL8;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON8;
		static const long ID_BUTTON9;
		static const long ID_BUTTON10;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_PANEL2;
		static const long ID_TEXTCTRL9;
		static const long ID_TEXTCTRL10;
		static const long ID_TEXTCTRL11;
		static const long ID_TEXTCTRL12;
		static const long ID_BUTTON11;
		static const long ID_BUTTON12;
		static const long ID_BUTTON13;
		static const long ID_BUTTON14;
		static const long ID_BUTTON15;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT9;
		static const long ID_PANEL3;
		static const long ID_NOTEBOOK1;
		//*)

	private:

		//(*Handlers(restaurant)
		void OnClose(wxCloseEvent& event);
		void Onbtn_ent_ajoutClick(wxCommandEvent& event);
		void Onbtn_ent_rechClick(wxCommandEvent& event);
		void Onbtn_ent_suppClick(wxCommandEvent& event);
		void Onbtn_ent_modClick(wxCommandEvent& event);
		void Onbtn_ent_affClick(wxCommandEvent& event);
		void Onbtn_plat_ajouterClick(wxCommandEvent& event);
		void Onbtn_plat_suppClick(wxCommandEvent& event);
		void Onbtn_plat_rechercheClick(wxCommandEvent& event);
		void Onbtn_plat_modClick(wxCommandEvent& event);
		void Onbtn_plat_affichageClick(wxCommandEvent& event);
		void Onbtn_des_ajouterClick(wxCommandEvent& event);
		void Onbtn_des_suppClick(wxCommandEvent& event);
		void Onbtn_des_rechercheClick(wxCommandEvent& event);
		void Onbtn_des_modifierClick(wxCommandEvent& event);
		void Onbtn_des_affClick(wxCommandEvent& event);
		void Ontxt_plat_nomText(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
