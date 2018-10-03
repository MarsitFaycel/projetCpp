#ifndef ADMINS_H
#define ADMINS_H

//(*Headers(admins)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
//*)

class admins: public wxFrame
{
	public:

		admins(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~admins();

		//(*Declarations(admins)
		wxButton* Button1;
		wxButton* btn_m_dessert;
		wxButton* btn_m_entrre;
		wxButton* btn_m_plat;
		wxButton* btn_reset;
		wxTextCtrl* txt_aff;
		//*)

	protected:

		//(*Identifiers(admins)
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		//*)

	private:

		//(*Handlers(admins)
		void Onbtn_resetClick(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void Onbtn_m_platClick(wxCommandEvent& event);
		void Onbtn_m_entrreClick(wxCommandEvent& event);
		void Onbtn_m_dessertClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
