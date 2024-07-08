#include "DiscordRPC.h"
#include "DiscordRPC.h"

void DiscordRPC::UpdateDiscord() {
	DiscordRichPresence RPC;

	this->Init(); // Initializes presence

	while (true) { // Must be while loop since you are updating it everytime
		int hours, minutes, seconds;
		hours = elapsedTimeInSec / 3600;
		minutes = (elapsedTimeInSec % 3600) / 60;
		seconds = elapsedTimeInSec % 60;

		// alloc space in memory
		memset(&RPC, 0, sizeof(RPC));
		// below there are the infos that will appear when the instance is being ran;
		RPC.largeImageKey = "logo";
		RPC.largeImageText = "your text on hover";
		RPC.smallImageKey = "small-image";
		RPC.smallImageText = "your text on hover";
		RPC.startTimestamp = this->startTime;
		RPC.details = "Your details";
		RPC.state = "Your state";

		Discord_UpdatePresence(&RPC);
	}
}
