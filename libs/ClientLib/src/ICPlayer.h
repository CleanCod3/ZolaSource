#pragma once

#include "ICUser.h"
#include "SOItem.h"

class CICPlayer : public CICUser {
    GFX_DECLARE_DYNAMIC_EXISTING(CICPlayer, 0x00ef1b44)
public:

    bool IsGameMaster();

    std::n_wstring *sub_9D6580(std::n_wstring *str);

    /// \address 009d6580
    std::n_wstring GetCharName() const;

    unsigned char GetCurrentLevel() const;

    long long int GetCurrentExp() const;

    short GetStatPointAvailable() const;

    short GetStrength() const;

    short GetIntelligence() const;

    /// \address 009d65c0
    /// \remark Optimized to return const reference instead of object
    const std::n_wstring &GetJobAlias() const;

    /// \address 009d4d20
    int GetCurrentJobExperiencePoints() const;

    CICPlayer* GetCICPlayerByUniqueID(DWORD UniqueID);

    void OnRender();
    void OnRenderItemName();
    /// \address 009d49c0
    void Func_15(int param_1, float *param_2) override;
    void Func_15_impl(int param_1, float *param_2);
    /// \address 009d68f0
    undefined4 FUN_009d68f0();
    int GetWorldID();
public:

    char pad_082C[32]; //0x082C
    std::n_wstring m_charname; //0x084C

public:
    unsigned char m_level; //0x0868 level of your character, crashes when set too high

private:
    char pad_0869[7]; //0x0869
public:
    long long int m_exp_current; //0x0870
    int m_skillpoint_progress; //0x0878
private:
    short m_str_stat; //0x087C
    short m_int_stat; //0x087E
public:
    int m_skillpoint; //0x0880
public:
    short m_statpoint_available; //0x0884
    BYTE m_zerkPoint; //0x0886
    char pad_0887[25]; //0x0887
    CSOItem N0000947A; //0x08A0
    CSOItem N0000947B; //0x0A70
    CSOItem N0000947C; //0x0C40
    CSOItem N0000947D; //0x0E10
    CSOItem N0000947E; //0x0FE0
    CSOItem N0000947F; //0x11B0
    CSOItem N00009480; //0x1380
    CSOItem N00009481; //0x1550
    CSOItem N00009482; //0x1720
    CSOItem N00009483; //0x18F0
    CSOItem N00009484; //0x1AC0
    CSOItem N00009485; //0x1C90
    CSOItem N00009486; //0x1E60
    char pad_2030[0x18]; //0x2030
    byte m_inventorySize; //0x2048
    char pad_2049[0x43]; //0x2049
    int m_pkPenaltyPoint; //0x208c
    char N000094A7; //0x2090 bit 0 = isGameMaster
    char pad_2091[7]; //0x2091
    std::n_wstring m_jobAlias; // 0x2098
    char pad_20B4[48]; //0x20B4
    short m_WorldID; //0x20E4
    char pad_20E6[50]; //0x20E6
//208C
//20a4

    BEGIN_FIXTURE()
        ENSURE_SIZE(0x2118)
        ENSURE_OFFSET(m_charname, 0x084C)
        ENSURE_OFFSET(m_level, 0x0868)
        ENSURE_OFFSET(m_exp_current, 0x0870)
        ENSURE_OFFSET(m_skillpoint_progress, 0x0878)
        ENSURE_OFFSET(m_str_stat, 0x087C)
        ENSURE_OFFSET(m_int_stat, 0x087E)
        ENSURE_OFFSET(m_skillpoint, 0x0880)
        ENSURE_OFFSET(m_statpoint_available, 0x0884)
        ENSURE_OFFSET(m_zerkPoint, 0x0886)
        ENSURE_OFFSET(m_inventorySize, 0x2048)
        ENSURE_OFFSET(m_pkPenaltyPoint, 0x208c)
        ENSURE_OFFSET(N000094A7, 0x2090)
        ENSURE_OFFSET(m_jobAlias, 0x2098)
        ENSURE_OFFSET(m_WorldID, 0x20E4)
    END_FIXTURE()

    RUN_FIXTURE(CICPlayer)
};

#define g_pCICPlayer (*((CICPlayer**)0x00EEF5EC))
#define g_CGamePtr (0x00eece80)