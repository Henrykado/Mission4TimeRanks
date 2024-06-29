#include "pch.h"
#include "mod.h"
#include <string>

char CalcTime(int a1)
{
    int curLevel;
    int timerSeconds;
    LevelRankTimes* rankTimes;
    char result;
    MinSec* minRankTime;
    int minRankSeconds;

    curLevel = CurrentLevel;
    TotalRings += RingCount[0];
    if ((unsigned int)TotalRings > 9999999)
    {
        TotalRings = 9999999;
    }
    timerSeconds = TimerSeconds + 60 * TimerMinutes;
    if (TimerFrames > 0)
    {
        ++timerSeconds;
    }
    *(byte*)(a1 + 2) = 0;

    rankTimes = Mission2Times;
    if (MissionNum == 2)
    {
        rankTimes = Mission3Times;
    }
    else if (MissionNum == 3)
    {
        rankTimes = Mission4Times;
    }
    
    if (rankTimes->Level == 91)
    {
LABEL_10:
        result = *(byte*)(a1 + 2);
        byte_174B001 = result;
        *(byte*)(dword_1A5A230 + 3) = result;
    }
    else
    {
        int v1 = 0;
        char v2 = rankTimes->Level;
        while (curLevel != v2)
        {
            v2 = rankTimes[1].Level;
            ++rankTimes;
            if (v2 == 91)
            {
                goto LABEL_10;
            }
        }
        minRankTime = &rankTimes->DRank;
        int v3 = 4;
        while (true)
        {
            minRankSeconds = minRankTime->Seconds + 60 * minRankTime->Minutes;
            ++minRankTime;
            if (timerSeconds > minRankSeconds)
            {
                break;
            }
            ++ *(byte*)(a1 + 2);
            if (--v3 <= 0)
            {
                result = *(byte*)(a1 + 2);
                byte_174B001 = result;
                *(byte*)(dword_1A5A230 + 3) = result;
                return result;
            }
        }
        result = *(byte*)(a1 + 2);
        byte_174B001 = result;
        *(byte*)(dword_1A5A230 + 3) = result;
    }
    return result;
}

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
        CalcTime_h.Hook(CalcTime);


        // LoadResultScreenObjects function
        
        //edits jump table so only your final time appears after beating Mission 4
        WriteData<1>((int*)0x4516D8, 0x5B);
        WriteData<1>((int*)0x4516D9, 0x16);
        WriteData<1>((int*)0x4516DA, 0x45);


        // Stage Select display function
         
        // edits if statement so only 'BEST TIME' and 'No. of PLAYS' are displayed while Mission 4 is selected
        WriteData<1>((int*)0x677093, 0x74);
        WriteData<1>((int*)0x677097, 0x74);

        // edits jump table so Mission 4's info box is smaller
        WriteData<1>((int*)0x677340, 0x5E);
        WriteData<1>((int*)0x677341, 0x6C);
        WriteData<1>((int*)0x677342, 0x67);
	}

	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer }; // This is needed for the Mod Loader to recognize the DLL.
}