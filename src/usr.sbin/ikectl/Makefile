# $OpenBSD: Makefile,v 1.5 2015/11/10 04:33:02 jsg Exp $

.PATH:		${.CURDIR}/../../sbin/iked

LOCALBASE?= /usr/local
PROG=		ikectl
SRCS=		log.c ikeca.c ikectl.c parser.c util.c

.PATH:	${.CURDIR}/../../lib/libutil
SRCS+=	imsg-buffer.c \
	imsg.c

.PATH:	${.CURDIR}/../../compat
SRCS+=	explicit_bzero.c \
	getdtablecount.c

MAN=		ikectl.8

LDADD=		-lutil -lcrypto -lprocstat
DPADD=		${LIBUTIL}
CFLAGS+=	-Wall -I${.CURDIR} -I${.CURDIR}/../../sbin/iked
CFLAGS+=	-Wstrict-prototypes -Wmissing-prototypes
CFLAGS+=	-Wmissing-declarations
CFLAGS+=	-Wshadow -Wpointer-arith -Wcast-qual
CFLAGS+=	-Wsign-compare
CFLAGS+=	-I${LOCALBASE}/include \
		-I${.CURDIR}/../../compat \
		-I${.CURDIR}/../../lib/libutil \
		-D__dead=''

distribution:
	${INSTALL} -C -g wheel -m 0644 ${.CURDIR}/ikeca.cnf \
	    ${DESTDIR}/etc/ssl/ikeca.cnf

.include <bsd.prog.mk>
