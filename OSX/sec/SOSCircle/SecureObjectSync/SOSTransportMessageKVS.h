

#ifndef sec_SOSTransportMessageKVS_h
#define sec_SOSTransportMessageKVS_h
#include <Security/SecureObjectSync/SOSAccount.h>

//
// KVS Stuff
//

typedef struct __OpaqueSOSTransportMessageKVS *SOSTransportMessageKVSRef;

SOSTransportMessageKVSRef SOSTransportMessageKVSCreate(SOSAccountRef account, CFStringRef circleName, CFErrorRef *error);

//
// Key interests
//


bool SOSTransportMessageKVSAppendKeyInterest(SOSTransportMessageKVSRef transport, CFMutableArrayRef alwaysKeys, CFMutableArrayRef afterFirstUnlockKeys, CFMutableArrayRef unlockedKeys, CFErrorRef *localError);

bool SOSTransportMessageSendMessageIfNeeded(SOSTransportMessageRef transport, CFStringRef circle_id, CFStringRef peer_id, CFErrorRef *error);    

#endif
