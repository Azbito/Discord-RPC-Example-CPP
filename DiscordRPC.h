#pragma once
#include <discord_rpc.h>
#include <iomanip>

using namespace std;

class DiscordRPC
{
public:
	void UpdateDiscord();
private:
	const char* DiscordAPPID = "YOUR APPLICATION ID";
	time_t startTime = time(nullptr);
	time_t currentTime = time(nullptr);
	int elapsedTimeInSec = difftime(currentTime, startTime);

	void Init() {
		DiscordEventHandlers DiscordInstance;
		memset(&DiscordInstance, 0, sizeof(DiscordInstance)); // alloc a place in memory to execute
		Discord_Initialize(DiscordAPPID, &DiscordInstance, 1, NULL);
	}
};

