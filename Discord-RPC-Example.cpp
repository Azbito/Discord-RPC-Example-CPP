#include <Windows.h>
#include <iostream>
#include <string>
#include "DiscordRPC.h"

using namespace std;

int main()
{
    DiscordRPC RPCInstance;

    RPCInstance.UpdateDiscord();

    return 0;
}
