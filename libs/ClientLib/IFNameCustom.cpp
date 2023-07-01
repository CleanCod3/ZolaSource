#include "IFNameCustom.h"

						GFX_IMPLEMENT_DYNCREATE(CIFNameCustom, CIFMainFrame)
						GFX_BEGIN_MESSAGE_MAP(CIFNameCustom, CIFMainFrame)
						            ONG_COMMAND(3, &CIFNameCustom::On_Name_Custome)

						GFX_END_MESSAGE_MAP()

						CIFNameCustom::CIFNameCustom(void)
						{
						}
						CIFNameCustom::~CIFNameCustom(void)
						{
						}
						bool CIFNameCustom::OnCreate(long ln)
						{
						    CIFMainFrame::OnCreate(ln);

						    RECT m_tileRect = { 32,44,86,82 };
						    m_tile = (CIFNormalTile*)CGWnd::CreateInstance(this, GFX_RUNTIME_CLASS(CIFNormalTile), m_tileRect, 2, 0);
						    m_tile->TB_Func_13("interface\\ifcommon\\bg_tile\\com_bg_tile_a.ddj", 0, 0);

								RECT Name_CustomeRect ={43,116,111,40};
Name_Custome = (CIFButton*)CGWnd::CreateInstance(this, GFX_RUNTIME_CLASS(CIFButton), Name_CustomeRect, 3, 0);
Name_Custome->TB_Func_13("interface\\ifcommon\\com_mid_button.ddj", 0, 0);
Name_Custome->SetText(L"Add Custom Name");

RECT Name_CUSTOM_BOXRect ={6,61,171,40};
Name_CUSTOM_BOX = (CIFEdit*)CGWnd::CreateInstance(this, GFX_RUNTIME_CLASS(CIFEdit), Name_CUSTOM_BOXRect, 4, 0);
Name_CUSTOM_BOX->TB_Func_13("interface\\messagebox\\msgbox_gil_title.ddj", 0, 0);
Name_CUSTOM_BOX->SetText(L"Enter Your Custom Name Here");



						    TB_Func_13("interface\\frame\\mframe_wnd_", 0, 0);
						    SetText(L"Main Window");
						    return true;
						}


						void CIFNameCustom::OnUpdate()
						{

						}
						void CIFNameCustom::On_Name_Custome(){

}