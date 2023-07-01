#pragma once
#include <IFMainFrame.h>
#include <IFNormalTile.h>
#include <IFButton.h>
#include <IFEdit.h>
#include <IFStatic.h>

						class CIFNameCustom : public CIFMainFrame
						{
								GFX_DECLARE_DYNCREATE(CIFNameCustom)
								GFX_DECLARE_MESSAGE_MAP(CIFNameCustom)
						public:
								CIFNameCustom(void);
								~CIFNameCustom(void);

								bool OnCreate(long ln) override;
								void OnUpdate() override;
						private:
								CIFNormalTile* m_tile;
								CIFButton* Name_Custome;
CIFEdit* Name_CUSTOM_BOX;
private: 
void On_Name_Custome();

						};
					