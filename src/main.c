/* Program Info
 *--------------------------------------
 * Program Name: Ham Radio Utilities CE
 * Author: KnightsWhoSayNi
 * License: MIT
 * Description: ARRL Ham Radio Utilities for the CE
 *--------------------------------------
*/

#include <tice.h>
#include <stdlib.h>
#include <graphx.h>
#include <keypadc.h>

int main(void)
{
    os_ClrHome();
    gfx_Begin();
    gfx_FillScreen(255);

    while (!os_GetCSC()) {
        
    }

    gfx_End();
    return 0;
}
