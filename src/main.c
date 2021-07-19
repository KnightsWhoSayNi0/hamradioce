/* Program Info
 *--------------------------------------
 * Program Name: Ham Radio Utilities CE
 * Author: KnightsWhoSayNi
 * License:
 * Description: ARRL Ham Radio Utilities for the CE
 *--------------------------------------
*/

#include <tice.h>
#include <stdlib.h>
#include <graphx.h>
#include <keypadc.h>

#include "gfx/gfx.h"

int main(void)
{

    os_ClrHome();
    gfx_Begin();
    gfx_SetPalette(global_palette, sizeof_global_palette, 0);

    gfx_FillScreen(1);
    gfx_Sprite(arrl, 25, 60);
    gfx_SetTextScale(2, 2);
    gfx_PrintStringXY("Ham Radio", 130, 60);
    gfx_PrintStringXY("Utilities CE", 120, 80);
    gfx_SetTextScale(1, 1);
    gfx_PrintStringXY("By KnightsWhoSayNi", 130, 160);

    delay(1000);

    

    gfx_End();
    return 0;
}
