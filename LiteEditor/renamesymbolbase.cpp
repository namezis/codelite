///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "renamesymbolbase.h"

///////////////////////////////////////////////////////////////////////////

RenameSymbolBase::RenameSymbolBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("New Symbol Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer4->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlNewName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_textCtrlNewName, 1, wxALL, 5 );
	
	bSizer1->Add( bSizer4, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("The following matches will be replcaed:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL|wxEXPAND, 5 );
	
	wxArrayString m_checkListCandidatesChoices;
	m_checkListCandidates = new wxCheckListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_checkListCandidatesChoices, 0 );
	bSizer2->Add( m_checkListCandidates, 1, wxALL|wxEXPAND, 5 );
	
	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Preview:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer1->Add( m_staticText3, 0, wxALL, 5 );
	
	m_preview = new LEditor(this, wxID_ANY, wxDefaultSize, wxEmptyString, wxEmptyString);
	bSizer1->Add( m_preview, 1, wxALL|wxEXPAND, 5 );
	
	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer1->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonOk = new wxButton( this, wxID_OK, wxT("&Replace"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonOk->SetDefault(); 
	bSizer3->Add( m_buttonOk, 0, wxALL, 5 );
	
	m_buttonCancel = new wxButton( this, wxID_CANCEL, wxT("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_buttonCancel, 0, wxALL, 5 );
	
	bSizer1->Add( bSizer3, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	m_checkListCandidates->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( RenameSymbolBase::OnItemSelected ), NULL, this );
	m_checkListCandidates->Connect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( RenameSymbolBase::OnItemDClicked ), NULL, this );
	m_checkListCandidates->Connect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( RenameSymbolBase::OnItemChecked ), NULL, this );
	m_buttonOk->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RenameSymbolBase::OnButtonOK ), NULL, this );
}

RenameSymbolBase::~RenameSymbolBase()
{
	// Disconnect Events
	m_checkListCandidates->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( RenameSymbolBase::OnItemSelected ), NULL, this );
	m_checkListCandidates->Disconnect( wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler( RenameSymbolBase::OnItemDClicked ), NULL, this );
	m_checkListCandidates->Disconnect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( RenameSymbolBase::OnItemChecked ), NULL, this );
	m_buttonOk->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RenameSymbolBase::OnButtonOK ), NULL, this );
}
