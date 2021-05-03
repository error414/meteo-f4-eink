#include "ch.h"
#include "pools.h"


////////////////////////////////////////////////////////////////////////////
poolStreamObject_t streamPoolObject[STREAM_POOL_SIZE];
MEMORYPOOL_DECL(streamMemPool, STREAM_POOL_SIZE, 0, NULL);

msg_t streamTxDataLetter[STREAM_POOL_SIZE];
MAILBOX_DECL(streamTxMail, &streamTxDataLetter, STREAM_POOL_SIZE);

msg_t streamRxDataLetter[STREAM_POOL_SIZE];
MAILBOX_DECL(streamRxMail, &streamRxDataLetter, STREAM_POOL_SIZE);
/////////////////////////////////////////////////////////////////////////

void shared_pools_init(){
	chDbgCheck(sizeof(streamPoolObject[0]) % 4 == 0);
	chPoolObjectInit(&streamMemPool, sizeof(streamPoolObject[0]), NULL);
	chPoolLoadArray(&streamMemPool, streamPoolObject, STREAM_POOL_SIZE);
}
