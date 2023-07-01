#pragma once
#include "IFDecoratedStatic.h"

#define GUIDE_FLORIAN09 13389
class CIFAutoEquipMentIcon : public CIFDecoratedStatic
{
GFX_DECLARE_DYNCREATE(CIFAutoEquipMentIcon)

public:
    bool OnCreate(long ln) override;

    int OnMouseLeftUp(int a1, int x, int y) override;

    void OnCIFReady() override;


};
