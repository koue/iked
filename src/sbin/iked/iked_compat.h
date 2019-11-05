#include <netinet/in.h>
#include <sys/endian.h>
#include <sys/param.h>

#define betoh16(x)      be16toh(x)
#define betoh32(x)      be32toh(x)
#define betoh64(x)      be64toh(x)

#define HOST_NAME_MAX	_SC_HOST_NAME_MAX

#define LOGIN_NAME_MAX	MAXLOGNAME

#ifndef TAILQ_END
#define TAILQ_END(head)			NULL
#endif

#ifndef SIMPLEQ_HEAD
#define SIMPLEQ_HEAD			STAILQ_HEAD
#define SIMPLEQ_HEAD_INITIALIZER	STAILQ_HEAD_INITIALIZER
#define SIMPLEQ_ENTRY			STAILQ_ENTRY
#define SIMPLEQ_INIT			STAILQ_INIT
#define SIMPLEQ_INSERT_AFTER		STAILQ_INSERT_AFTER
#define SIMPLEQ_INSERT_HEAD		STAILQ_INSERT_HEAD
#define SIMPLEQ_INSERT_TAIL		STAILQ_INSERT_TAIL
#define SIMPLEQ_EMPTY			STAILQ_EMPTY
#define SIMPLEQ_FIRST			STAILQ_FIRST
#define SIMPLEQ_REMOVE_AFTER		STAILQ_REMOVE_AFTER
#define SIMPLEQ_REMOVE_HEAD		STAILQ_REMOVE_HEAD
#define SIMPLEQ_FOREACH			STAILQ_FOREACH
#define SIMPLEQ_END(head)		NULL
#endif

/* OpenBSD
	src/sys/netinet/in.h
	src/sys/netinet6/in6.h
*/
#define IP_AUTH_LEVEL		20   /* int; authentication used */
#define IP_ESP_TRANS_LEVEL	21   /* int; transport encryption */
#define IP_ESP_NETWORK_LEVEL	22   /* int; full-packet encryption */
#define IPV6_ESP_NETWORK_LEVEL	55   /* int; full-packet encryption */
#define IPV6_ESP_TRANS_LEVEL	54   /* int; transport encryption */
#define IPSEC_LEVEL_BYPASS      0x00    /* Bypass policy altogether */
#define IPV6_AUTH_LEVEL		53   /* int; authentication used */

__attribute__((weak)) void __explicit_bzero_hook(void *, size_t);
