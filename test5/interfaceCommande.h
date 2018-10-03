#ifndef INTERFACECOMMANDE_H
#define INTERFACECOMMANDE_H

//(*Headers(interfaceCommande)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/frame.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/timectrl.h>
//*)

class interfaceCommande: public wxFrame
{
	public:

		interfaceCommande(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~interfaceCommande();

		//(*Declarations(interfaceCommande)
		wxBitmapButton* BitmapButton1;
		wxBitmapButton* BitmapButton2;
		wxBitmapButton* BitmapButton3;
		wxBitmapButton* BitmapButton4;
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* btn_comm_ok;
		wxButton* btn_comm_reset;
		wxButton* btn_comm_total;
		wxButton* btn_des1;
		wxButton* btn_des2;
		wxButton* btn_des3;
		wxButton* btn_des4;
		wxButton* btn_des5;
		wxButton* btn_plat1;
		wxButton* btn_plat2;
		wxButton* btn_plat3;
		wxButton* btn_plat4;
		wxButton* btn_plat5;
		wxChoice* Choice1;
		wxDatePickerCtrl* DatePickerCtrl1;
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* Panel3;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxTextCtrl* txt_des1;
		wxTextCtrl* txt_des2;
		wxTextCtrl* txt_des3;
		wxTextCtrl* txt_des4;
		wxTextCtrl* txt_des5;
		wxTextCtrl* txt_ent1;
		wxTextCtrl* txt_ent2;
		wxTextCtrl* txt_ent3;
		wxTextCtrl* txt_ent4;
		wxTextCtrl* txt_ent5;
		wxTextCtrl* txt_plat1;
		wxTextCtrl* txt_plat2;
		wxTextCtrl* txt_plat3;
		wxTextCtrl* txt_plat4;
		wxTextCtrl* txt_plat5;
		wxTextCtrl* txt_serveur;
		wxTextCtrl* txt_ticket;
		wxTimePickerCtrl* TimePickerCtrl1;
		//*)
        static float total;
        static int idaddition;

	protected:


		//(*Identifiers(interfaceCommande)
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON8;
		static const long ID_TEXTCTRL3;
		static const long ID_TEXTCTRL4;
		static const long ID_TEXTCTRL5;
		static const long ID_TEXTCTRL6;
		static const long ID_BITMAPBUTTON1;
		static const long ID_PANEL1;
		static const long ID_BUTTON9;
		static const long ID_BUTTON10;
		static const long ID_BUTTON11;
		static const long ID_BUTTON12;
		static const long ID_BUTTON13;
		static const long ID_TEXTCTRL7;
		static const long ID_TEXTCTRL8;
		static const long ID_TEXTCTRL9;
		static const long ID_TEXTCTRL10;
		static const long ID_TEXTCTRL11;
		static const long ID_BITMAPBUTTON2;
		static const long ID_PANEL2;
		static const long ID_BUTTON14;
		static const long ID_BUTTON15;
		static const long ID_BUTTON16;
		static const long ID_BUTTON17;
		static const long ID_BUTTON18;
		static const long ID_TEXTCTRL12;
		static const long ID_TEXTCTRL13;
		static const long ID_TEXTCTRL14;
		static const long ID_TEXTCTRL15;
		static const long ID_TEXTCTRL16;
		static const long ID_BITMAPBUTTON3;
		static const long ID_PANEL3;
		static const long ID_NOTEBOOK1;
		static const long ID_CHOICE1;
		static const long ID_DATEPICKERCTRL1;
		static const long ID_TIMEPICKERCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL17;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_BITMAPBUTTON4;
		//*)

	private:

		//(*Handlers(interfaceCommande)
		void OnBitmapButton1Click(wxCommandEvent& event);
		void Ontxt_comm_ticketText(wxCommandEvent& event);
		void Onbtmp_salade2Click(wxCommandEvent& event);
		void Onbtmp_salade1Click(wxCommandEvent& event);
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnCheckListBox1Toggled(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnBitmapButton1Click1(wxCommandEvent& event);
		void OnTextCtrl3Text(wxCommandEvent& event);
		void OnBitmapButton2Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		void Onbtn_plat1Click(wxCommandEvent& event);
		void Onbtn_plat2Click(wxCommandEvent& event);
		void Onbtn_plat3Click(wxCommandEvent& event);
		void Onbtn_plat4Click(wxCommandEvent& event);
		void Onbtn_plat5Click(wxCommandEvent& event);
		void OnBitmapButton3Click(wxCommandEvent& event);
		void Onbtn_des1Click(wxCommandEvent& event);
		void Onbtn_des2Click(wxCommandEvent& event);
		void Onbtn_des3Click(wxCommandEvent& event);
		void Onbtn_des4Click(wxCommandEvent& event);
		void Onbtn_des5Click(wxCommandEvent& event);
		void Onbtn_comm_okClick(wxCommandEvent& event);
		void Onbtn_comm_totalClick(wxCommandEvent& event);
		void Onbtn_comm_resetClick(wxCommandEvent& event);
		void Ontxt_des5Text(wxCommandEvent& event);
		void OnNotebook1PageChanged(wxNotebookEvent& event);
		void OnChoice1Select(wxCommandEvent& event);
		void OnBitmapButton4Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()


};

#endif
