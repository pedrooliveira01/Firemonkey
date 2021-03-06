//---------------------------------------------------------------------------

// This software is Copyright (c) 2015 Embarcadero Technologies, Inc.
// You may only use this software if you are an authorized licensee
// of an Embarcadero developer tools product.
// This software is considered a Redistributable as defined under
// the software license agreement that comes with the Embarcadero Products
// and is subject to that software license agreement.

//---------------------------------------------------------------------------

#ifndef MainFrmH
#define MainFrmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.MultiView.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TDrawer : public TForm
{
__published:	// IDE-managed Components
	TLayout *LayoutContent;
	TStyleBook *StyleBook1;
	TMultiView *MultiView1;
	TSpeedButton *MasterButton;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	void __fastcall CloseNavigationPane(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDrawer(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDrawer *Drawer;
//---------------------------------------------------------------------------
#endif
