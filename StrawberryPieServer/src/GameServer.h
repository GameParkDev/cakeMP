#pragma once

#include <Network/NetworkManager.h>
#include <Settings.h>

class GameServer
{
public:
	NetworkManager m_network;

	Settings m_settings;

public:
	GameServer();
	~GameServer();

	void Run();

	void Update();
};

extern GameServer* _pServer;