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
	CSetServer::create("188.127.241.74", 1, 16, 1666, false),
	CSetServer::create("188.127.241.74", 1, 16, 1666, false)	
};
