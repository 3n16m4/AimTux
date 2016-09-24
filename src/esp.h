#ifndef __ESP_H_
#define __ESP_H_

#include "settings.h"
#include "SDK.h"
#include "draw.h"
#include "interfaces.h"
#include "pstring.h"

#define CONV(c) cwConvert(c)

namespace ESP
{
void Tick ();
void DrawTracer (C_BasePlayer* localPlayer, CBaseEntity* entity);
void DrawPlayerBox (C_BasePlayer* localPlayer, CBaseEntity* entity);
void DrawPlayerName (C_BasePlayer* localPlayer, CBaseEntity* entity, int entityIndex);
}


#endif