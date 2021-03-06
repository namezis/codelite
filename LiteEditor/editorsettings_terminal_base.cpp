//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: editor_options_terminal.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "editorsettings_terminal_base.h"


// Declare the bitmap loading function
extern void wxC575EInitBitmapResources();

static bool bBitmapLoaded = false;


EditorSettingsTerminalBase::EditorSettingsTerminalBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC575EInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer1);
    
    m_checkBoxUseCodeLiteTerminal = new wxCheckBox(this, wxID_ANY, _("Use CodeLite's built-in terminal emulator"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxUseCodeLiteTerminal->SetValue(false);
    
    bSizer1->Add(m_checkBoxUseCodeLiteTerminal, 0, wxALL, 5);
    
    m_staticText2 = new wxStaticText(this, wxID_ANY, _("Enter here the command to be used by CodeLite for launching consoles:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer1->Add(m_staticText2, 0, wxALL|wxEXPAND, 5);
    
    m_textCtrlProgramConsoleCmd = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlProgramConsoleCmd->SetHint(wxT(""));
    #endif
    
    bSizer1->Add(m_textCtrlProgramConsoleCmd, 0, wxALL|wxEXPAND, 5);
    
    wxStaticBoxSizer* sbSizer1 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Where:")), wxVERTICAL);
    
    bSizer1->Add(sbSizer1, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* fgSizer1 = new wxFlexGridSizer(2, 2, 0, 0);
    fgSizer1->SetFlexibleDirection( wxBOTH );
    fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer1->AddGrowableCol(1);
    
    sbSizer1->Add(fgSizer1, 1, wxEXPAND, 5);
    
    m_staticText3 = new wxStaticText(this, wxID_ANY, _("$(TITLE)"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer1->Add(m_staticText3, 1, wxALL|wxEXPAND, 5);
    
    m_staticText4 = new wxStaticText(this, wxID_ANY, _("The console title"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer1->Add(m_staticText4, 0, wxALL, 5);
    
    m_staticText5 = new wxStaticText(this, wxID_ANY, _("$(CMD)"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer1->Add(m_staticText5, 0, wxALL, 5);
    
    m_staticText6 = new wxStaticText(this, wxID_ANY, _("The command to execute"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer1->Add(m_staticText6, 0, wxALL, 5);
    
    SetName(wxT("EditorSettingsTerminalBase"));
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
    // Connect events
    m_staticText2->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_textCtrlProgramConsoleCmd->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_staticText3->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_staticText4->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_staticText5->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_staticText6->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    
}

EditorSettingsTerminalBase::~EditorSettingsTerminalBase()
{
    m_staticText2->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_textCtrlProgramConsoleCmd->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_staticText3->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_staticText4->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_staticText5->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    m_staticText6->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(EditorSettingsTerminalBase::OnUseCodeLiteTerminalUI), NULL, this);
    
}
