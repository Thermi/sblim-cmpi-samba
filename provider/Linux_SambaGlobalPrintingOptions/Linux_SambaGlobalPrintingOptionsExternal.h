/**
 *  Linux_SambaGlobalPrintingOptionsExternal.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaGlobalPrintingOptionsExternal_h
#define Linux_SambaGlobalPrintingOptionsExternal_h

#include "Linux_SambaGlobalPrintingOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsExternal {
  	
    public:
    Linux_SambaGlobalPrintingOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalPrintingOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGlobalPrintingOptionsInstanceEnumeration&);
     
    virtual Linux_SambaGlobalPrintingOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalPrintingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalPrintingOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalPrintingOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalPrintingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
