//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// Copyright (C) 2002, The pgAdmin Development Team
// This software is released under the pgAdmin Public Licence
//
// pgAdmin3.cpp - The application
//
//////////////////////////////////////////////////////////////////////////

// wxWindows headers
#include <wx/wx.h>
#include <wx/stc/stc.h>

// App headers
#include "../../pgAdmin3.h"
#include "ctlSQLBox.h"

ctlSQLBox::ctlSQLBox(wxWindow *parent = (wxWindow *) NULL, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0)
: wxStyledTextCtrl(parent,id , pos, size, style)
{

  // Clear all styles
  this->StyleClearAll();

  // Setup the different highlight colurs
  this->StyleSetForeground(0,  wxColour(0x80, 0x80, 0x80));
  this->StyleSetForeground(1,  wxColour(0x00, 0x7f, 0x00));
  this->StyleSetForeground(2,  wxColour(0x00, 0x7f, 0x00));
  this->StyleSetForeground(3,  wxColour(0x7f, 0x7f, 0x7f));
  this->StyleSetForeground(4,  wxColour(0x00, 0x7f, 0x7f));
  this->StyleSetForeground(5,  wxColour(0x00, 0x00, 0x7f));
  this->StyleSetForeground(6,  wxColour(0x7f, 0x00, 0x7f));
  this->StyleSetForeground(7,  wxColour(0x7f, 0x00, 0x7f));
  this->StyleSetForeground(8,  wxColour(0x00, 0x7f, 0x7f));
  this->StyleSetForeground(9,  wxColour(0x7f, 0x7f, 0x7f));
  this->StyleSetForeground(10, wxColour(0x00, 0x00, 0x00));
  this->StyleSetForeground(11, wxColour(0x00, 0x00, 0x00));

  // SQL Lexer and keywords.
  this->SetLexer(wxSTC_LEX_SQL);
  this->SetKeyWords(0, SQL_KEYWORDS);

}
