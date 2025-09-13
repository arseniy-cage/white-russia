// -- -- -- -- -- -- -- 
// by ГРОМ 2.0 X Barsikkk
// -- -- -- -- -- -- --
#include "CNetwork.h"
#include <stdint.h>

#include "util/CJavaWrapper.h"

const char* g_szServerNames[MAX_SERVERS] = {
	"БЕЛАЯ МОСКВА | КИНДА",
	"БЕЛАЯ МОСКВА | ТЕСТ"
};

const CSetServer::CServerInstanceEncrypted g_sEncryptedAddresses[MAX_SERVERS] = {
	CSetServer::create("194.147.90.168", 1, 16, 1184, false),
	CSetServer::create("194.147.90.168", 1, 16, 1184, false)	
};