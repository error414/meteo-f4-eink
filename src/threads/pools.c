#include "ch.h"
#include "pools.h"

////////////////////////////////////////////////////////////////////////////
poolStreamObject_t streamPoolObject[STREAM_POOL_SIZE];
MEMORYPOOL_DECL(streamMemPool, STREAM_POOL_SIZE, 0, NULL);
/////////////////////////////////////////////////////////////////////////

void shared_pools_init(){
	chDbgCheck(sizeof(streamPoolObject[0]) % 4 == 0);
	chPoolObjectInit(&streamMemPool, sizeof(streamPoolObject[0]), NULL);
	chPoolLoadArray(&streamMemPool, streamPoolObject, STREAM_POOL_SIZE);
}
