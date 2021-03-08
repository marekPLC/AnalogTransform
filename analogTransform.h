typedef struct
{
	REAL TRUNCVAR1;
	REAL VAR1;
	REAL VAR2;
	BOOL EN;
	REAL IN;
	REAL INMAX;
	REAL INLOW;
	REAL OUTMAX;
	REAL OUTLOW;
	REAL OUT;
	INT ERR;
}
ANALOGTRANSFORMtyp;


/* Enum definitions */


/* The Prototypes */
void ANALOGTRANSFORM(ANALOGTRANSFORMtyp* inst);
BOOL ANALOGTRANSFORMinit(ANALOGTRANSFORMtyp* inst, BOOL bRetain);
void PLC_PRG(void);
;
