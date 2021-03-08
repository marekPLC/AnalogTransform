#include "D:\githubProjekty\analogTransform.h"


/* The implemenation templates */
void ANALOGTRANSFORM(ANALOGTRANSFORMtyp* inst)
{
}

BOOL ANALOGTRANSFORMinit(ANALOGTRANSFORMtyp* inst, BOOL bRetain)
{
	/* Initializing Function Block components */
	inst->EN = FALSE;
	inst->IN = 0.000000E+000;
	inst->INMAX = 0;
	inst->INLOW = 0;
	inst->OUTMAX = 0;
	inst->OUTLOW = 0;
	inst->OUT = 0.000000E+000;
	strcpy(inst->ERR, "");
	if (bRetain)
		return bRetain;

	/* Initalize the retain variables only if bRetain is FALSE */
	return bRetain;
}

void PLC_PRG(void)
{
}

