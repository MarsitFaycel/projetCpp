#ifndef LOGINGERANT_H
#define LOGINGERANT_H

//(*Headers(loginGerant)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class loginGerant: public wxFrame
{
	public:

		loginGerant(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~loginGerant();

		//(*Declarations(loginGerant)
		wxButton* btn_ok;
		wxButton* btn_reset;
		wxStaticText* StaticText1;
		wxTextCtrl* txt_password;
		//*)

	protected:

		//(*Identifiers(loginGerant)
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(loginGerant)
		void OnClose(wxCloseEvent& event);
		void Onbtn_okClick(wxCommandEvent& event);
		void Ontxt_passwordText(wxCommandEvent& event);
		void Onbtn_resetClick(wxCommandEvent& event);
		void Onbtn_resetClick1(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
