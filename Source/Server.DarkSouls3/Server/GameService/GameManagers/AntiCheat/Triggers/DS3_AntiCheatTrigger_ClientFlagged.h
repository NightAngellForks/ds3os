/*
 * Dark Souls 3 - Open Server
 * Copyright (C) 2021 Tim Leonard
 *
 * This program is free software; licensed under the MIT license.
 * You should have received a copy of the license along with this program.
 * If not, see <https://opensource.org/licenses/MIT>.
 */

#pragma once

#include "Server/GameService/GameManagers/AntiCheat/DS3_AntiCheatManager.h"
#include "Server/GameService/GameManagers/AntiCheat/DS3_AntiCheatTrigger.h"

#include <string>
#include <memory>

// Triggers when the clients anti-cheat sends the appropriate flag to notify of cheating.

class DS3_AntiCheatTrigger_ClientFlagged : public DS3_AntiCheatTrigger
{
public:
    DS3_AntiCheatTrigger_ClientFlagged(DS3_AntiCheatManager* InCheatManager, Server* InServerInstance, GameService* InGameServiceInstance);

    virtual bool Scan(std::shared_ptr<GameClient> client, std::string& extraInfo) override;
    virtual std::string GetName() override;
    virtual float GetPenaltyScore() override;

};