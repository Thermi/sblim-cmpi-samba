/**
 *  Linux_SambaGlobalPrintingForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaGlobalPrintingForGlobalRepositoryExternal_h
#define Linux_SambaGlobalPrintingForGlobalRepositoryExternal_h

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"
#include "Linux_SambaGlobalPrintingForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaGlobalPrintingForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaGlobalPrintingForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaGlobalPrintingForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaGlobalPrintingForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGlobalPrintingForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaGlobalPrintingForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGlobalPrintingForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
