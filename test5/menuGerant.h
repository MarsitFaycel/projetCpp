#ifndef MENUGERANT_H
#define MENUGERANT_H

//(*Headers(menuGerant)
#include <wx/button.h>
#include <wx/frame.h>
//*)

class menuGerant: public wxFrame
{
	public:

		menuGerant(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~menuGerant();

		//(*Declarations(menuGerant)
		wxButton* Button1;
		wxButton* btn_admin;
		wxButton* btn_perso;
		wxButton* btn_rest;
		//*)

	protected:

		//(*Identifiers(menuGerant)
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		//*)

	private:

		//(*Handlers(menuGerant)
		void Onbtn_persoClick(wxCommandEvent& event);
		void Onbtn_statClick(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void Onbtn_restClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
