/**
 *  Linux_SambaGlobalPrintingOptionsRepositoryExternal.h
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


#ifndef Linux_SambaGlobalPrintingOptionsRepositoryExternal_h
#define Linux_SambaGlobalPrintingOptionsRepositoryExternal_h

#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"
#include "Linux_SambaGlobalPrintingOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsRepositoryExternal {
  	
    public:
    Linux_SambaGlobalPrintingOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalPrintingOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalPrintingOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalPrintingOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalPrintingOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalPrintingOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalPrintingOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
