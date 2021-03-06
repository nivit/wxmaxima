//
//  Copyright (C) 2004-2014 Andrej Vodopivec <andrej.vodopivec@gmail.com>
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#ifndef PLOT2DWIZ_H
#define PLOT2DWIZ_H

#include <wx/wx.h>
#include <wx/statline.h>
#include <wx/spinctrl.h>
#include <wx/bmpbuttn.h>

#include "BTextCtrl.h"

class Plot2DWiz: public wxDialog
{
public:
  Plot2DWiz(wxWindow* parent, int id, const wxString& title,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE);
  void SetValue(wxString s);
  wxString GetValue();
private:
  void set_properties();
  void do_layout();
  void OnButton(wxCommandEvent& event);
  void OnCombobox(wxCommandEvent& event);
  void OnFileBrowse(wxCommandEvent& event);
  void OnPopupMenu(wxCommandEvent& event);
  void Parse(wxString in);

  enum {
    special,
    combobox,
    file_browse_2d,
    parametric_plot,
    discrete_plot
  };
  
  enum {
    cartesian,
    polar
  };

protected:
  int type;
  wxStaticText* label_2;
  BTextCtrl* text_ctrl_1;
  wxButton* button_3;
  wxStaticText* label_3;
  BTextCtrl* text_ctrl_2;
  wxStaticText* label_4;
  BTextCtrl* text_ctrl_3;
  wxStaticText* label_5;
  BTextCtrl* text_ctrl_4;
  wxCheckBox* check_box_1;
  wxStaticText* label_6;
  BTextCtrl* text_ctrl_5;
  wxStaticText* label_7;
  BTextCtrl* text_ctrl_6;
  wxStaticText* label_8;
  BTextCtrl* text_ctrl_7;
  wxCheckBox* check_box_2;
  wxStaticText* label_9;
  wxComboBox* combo_box_1;
  wxStaticText* label_10;
  wxSpinCtrl* text_ctrl_8;
  wxStaticText* label_11;
  wxComboBox* combo_box_2;
  wxStaticText* label_12;
  BTextCtrl* text_ctrl_9;
  wxBitmapButton* button_4;
  wxStaticLine* static_line_1;
  wxButton* button_1;
  wxButton* button_2;
  DECLARE_EVENT_TABLE()
};

class Plot2DPar: public wxDialog
{
public:
  Plot2DPar(wxWindow* parent, int id, const wxString& title,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE);
  void SetValue(wxString s)
  {
    text_ctrl_1->SetValue(s);
    text_ctrl_1->SetSelection(-1, -1);
  }
  wxString GetValue();
private:
  void set_properties();
  void do_layout();
protected:
  wxStaticText* label_2;
  wxStaticText* label_3;
  BTextCtrl* text_ctrl_1;
  wxStaticText* label_4;
  BTextCtrl* text_ctrl_2;
  wxStaticText* label_5;
  BTextCtrl* text_ctrl_3;
  wxStaticText* label_6;
  BTextCtrl* text_ctrl_4;
  BTextCtrl* text_ctrl_5;
  wxStaticText* label_7;
  wxSpinCtrl* spin_ctrl_1;
  wxStaticLine* static_line_1;
  wxButton* button_1;
  wxButton* button_2;
};

class Plot2DDiscrete: public wxDialog
{
public:
  Plot2DDiscrete(wxWindow* parent, int id, const wxString& title,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE);
  void SetValue(wxString s)
  {
    text_ctrl_1->SetValue(s);
    text_ctrl_1->SetSelection(-1, -1);
  }
  wxString GetValue();
private:
  void set_properties();
  void do_layout();
protected:
  wxStaticText* label_2;
  wxStaticText* label_3;
  BTextCtrl* text_ctrl_1;
  BTextCtrl* text_ctrl_2;
  wxStaticLine* static_line_1;
  wxButton* button_1;
  wxButton* button_2;
};


#endif // PLOT2DWIZ_H
