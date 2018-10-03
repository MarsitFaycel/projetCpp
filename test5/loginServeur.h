#ifndef LOGINSERVEUR_H
#define LOGINSERVEUR_H

//(*Headers(loginServeur)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class loginServeur: public wxFrame
{
	public:

		loginServeur(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~loginServeur();

		//(*Declarations(loginServeur)
		wxButton* btn_ok;
		wxButton* btn_reset;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxTextCtrl* txt_id;
		wxTextCtrl* txt_password;
		//*)

	protected:

		//(*Identifiers(loginServeur)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT2;
		//*)

	private:

		//(*Handlers(loginServeur)
		void Onbtn_okClick(wxCommandEvent& event);
		void Onbtn_resetClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
