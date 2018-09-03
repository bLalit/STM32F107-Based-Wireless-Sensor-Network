/*--------------------------------Parser.h----------------------------------*/
/*Name: Lalit Bhat
Student ID:01671833
Program Number: 4
*/

#ifndef PKTPARSER_H
#define PKTPARSER_H


#include "includes.h"

#include "BfrPair.h"
#include "SerIODriver.h"
#include "Error.h"
#include "Payload.h"
#include "assert.h"
#define DataArray 1

typedef struct
{
  CPU_INT08S dataLen;
  CPU_INT08U dat[DataArray];
}PktBfr;
      
//----- f u n c t i o n    p r o t o t y p e s -----

CPU_VOID CreateParserTask(CPU_VOID);
CPU_VOID ParsePkt(CPU_VOID *data);


#endif