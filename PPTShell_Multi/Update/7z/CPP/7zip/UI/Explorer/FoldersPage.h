// FoldersPage.h
 
#ifndef __FOLDERSPAGE_H
#define __FOLDERSPAGE_H

#include "Windows/Control/PropertyPage.h"

#include "../Common/ZipRegistry.h"

class CFoldersPage : public NWindows::NControl::CPropertyPage
{
  NWorkDir::CInfo m_WorkDirInfo;

  void MyEnableControls();
  void ModifiedEvent();
  NWindows::NControl::CDialogChildControl m_WorkPath;
  NWindows::NControl::CDialogChildControl m_ButtonSetWorkPath;
  void OnFoldersWorkButtonPath();
  int GetWorkMode() const;
  void GetWorkDir(NWorkDir::CInfo &workDirInfo);
  // bool WasChanged();
public:
  virtual bool OnInit();
  virtual bool OnCommand(int code, int itemID, LPARAM lParam);
  virtual void OnNotifyHelp();
  virtual LONG OnApply();
  virtual bool OnButtonClicked(int buttonID, HWND buttonHWND);
};

#endif
