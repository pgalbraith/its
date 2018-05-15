#include <stdio.h>
#ifdef	vms
#include	"c:lex.h"
#else
#include	<lex.h>
#endif
extern int _lmovb();

#line 10 "cap.lxi"

extern	char	*token();

main()
{
	while (yylex())
		;
}
extern struct lextab cap;

/* Standard I/O selected */
extern FILE *lexin;

llstin()
   {
   if(lexin == NULL)
      lexin = stdin;
   if(_tabp == NULL)
      lexswitch(&cap);
   }

_Acap(__na__)		/* Action routine */
   {

#line 20 "cap.lxi"

	register char *cp;
	char *et;
	switch (__na__) {
	case 0:

#line 25 "cap.lxi"

		cp = token(&et);
		while (cp < et)
			putchar(*cp++);
	
         break;
	case 1:

#line 30 "cap.lxi"
putchar(token(0)[1]);
         break;
	case 2:

#line 31 "cap.lxi"
putchar(*token(0)+'a'-'A');
         break;
	case 3:

#line 32 "cap.lxi"
putchar(*token(0));
         break;
	}
	return(LEXSKIP);
}

#line 33 "cap.lxi"


int _Fcap[] = {
 -1, 3, 2, 3, 1, 3, -1, 0, -1, -1, -1, -1, 3, -1, -1, -1,
 -1,
};

#line 34 "cap.lxi"

#define	LLTYPE1	char

LLTYPE1 _Ncap[] = {
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 5, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 12, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5,
 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 8, 14, 6, 15, 16,
 8, 8, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
 9, 16, 11, 10, 16, 16, 16, 11, 16, 11, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 8, 16, 16, 16, 16, 8, 8, 16, 16, 16, 16, 16,
 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
 16, 16, 16, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 16, 16,
 6, 16, 16, 16, 16, 16, 16, 16, 6, 16, 16, 16, 16, 16, 16, 16,
 16, 16, 16, 10, 16, 8, 9, 16, 11, 16, 8, 8, 16, 11, 9, 11,
 11, 16, 16, 16, 16, 11, 16, 11, 16, 16, 16, 16, 16, 16, 16, 16,
 16, 16, 16, 16, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 13, 8,
 16, 16, 16, 16, 8, 8, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 7, 7,
 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
 7, 7, 7, 7, 7, 7, 7, 7,
};

LLTYPE1 _Ccap[] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 6, 13, 9, 14, -1,
 6, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
 5, -1, 5, 9, -1, -1, -1, 5, -1, 5, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
 6, 6, 6, 6, 8, -1, -1, -1, -1, 8, 8, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, -1, -1,
 11, -1, -1, -1, -1, -1, -1, -1, 12, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, 10, -1, 10, 11, -1, 11, -1, 10, 10, -1, 11, 12, 11,
 12, -1, -1, -1, -1, 12, -1, 12, -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 12, 15,
 -1, -1, -1, -1, 15, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 15, 15,
 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
 15, 15, 15, 15, 15, 15, 15, 15,
};

LLTYPE1 _Dcap[] = {
 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,

};

int _Bcap[] = {
 0, 0, 0, 191, 0, 272, 249, 0, 306, 275, 387, 390, 398, 204, 276, 445,
 0,
};

struct	lextab	cap = {
	16,	/* last state */
	_Dcap,	/* defaults */
	_Ncap,	/* next */
	_Ccap,	/* check */
	_Bcap,	/* base */
	535,	/* last in base */
	_lmovb,	/* byte-int move routines */
	_Fcap,	/* final state descriptions */
	_Acap,	/* action routine */
	NULL,	/* look-ahead vector */
	0,	/* no ignore class */
	0,	/* no break class */
	0,	/* no illegal class */
};
