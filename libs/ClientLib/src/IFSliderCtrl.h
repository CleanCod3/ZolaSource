#include "ifwnd.h"

class CIFSliderCtrl: public CIFWnd
{
GFX_DECLARE_DYNAMIC_EXISTING(CIFSliderCtrl, 0x00EE9948)
public:
    void TB_Func_13(const std::string str, int a3, int a4);
    void SetSliderTexture(const std::n_string &leftButtonTexturePath, const std::n_string &rightButtonTexturePath,const std::n_string &midButtonTexturePath);
    void FUN_006596f0(int param_1, int param_2, int param_3, undefined4 param_4, int param_5,undefined4 param_6);
    void SetMaxButtonSlide(undefined4 param_1);
    void FUN_006599e0(int param_2, int param_3, int param_4, int param_5);
    void SetEnabledState(bool bState);

public:
    char pad_0x36c[0x388-0x36c];
    int m_SliderMaxVol; // 0x388
    int m_SliderCurrentVol; // 0x38c
    char pad_0x390[0x3cc-0x38c-4];

private:
BEGIN_FIXTURE()
        ENSURE_SIZE(0x3cc)
        ENSURE_OFFSET(m_SliderMaxVol, 0x388)
        ENSURE_OFFSET(m_SliderCurrentVol, 0x38c)
    END_FIXTURE()
    RUN_FIXTURE(CIFSliderCtrl)
};

