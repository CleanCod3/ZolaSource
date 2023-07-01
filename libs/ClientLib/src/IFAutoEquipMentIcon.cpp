#include "../../../DevKit_DLL/src/StdAfx.h"
#include "IFAutoEquipMentIcon.h"
#include "GInterface.h"
#include "IFflorian0.h"
#include "IFflorian0Guide.h"
#include "CPSMission.h"


GFX_IMPLEMENT_DYNCREATE(CIFAutoEquipMentIcon, CIFDecoratedStatic)


bool CIFAutoEquipMentIcon::OnCreate(long ln)
{

    printf("> " __FUNCTION__ "(%d)\n", ln);
    CIFDecoratedStatic::OnCreate(ln);

    // TB_Func_13("icon\\etc\\bugle_icon_1.ddj", 0, 0);


    TB_Func_13("icon\\etc\\autoequipicon.ddj", 0, 0);
    sub_634470("icon\\etc\\autoequipicon.ddj");
    set_N00009BD4(2);
    set_N00009BD3(500);



    return true;
}

int CIFAutoEquipMentIcon::OnMouseLeftUp(int a1, int x, int y)
{
    printf("> " __FUNCTION__ "(%d, %d, %d)\n", a1, x, y);
    CMsgStreamBuffer buf(0x1318);
    buf << std::n_string("!UPDATEEQUIPSET");
    buf << std::n_string("!UPDATEEQUIPSET");
    SendMsg(buf);

    return 0;
}


void CIFAutoEquipMentIcon::OnCIFReady()
{
    printf("> " __FUNCTION__ "\n");

    CIFDecoratedStatic::OnCIFReady();
    sub_633990();

}



