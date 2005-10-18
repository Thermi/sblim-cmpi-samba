/**
 *  Linux_SambaForceGroupForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaForceGroupForPrinterRepositoryExternal_h
#define Linux_SambaForceGroupForPrinterRepositoryExternal_h

#include "Linux_SambaForceGroupForPrinterInstanceName.h"
#include "Linux_SambaForceGroupForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceGroupForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaForceGroupForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaForceGroupForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaForceGroupForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaForceGroupForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaForceGroupForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaForceGroupForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaForceGroupForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaForceGroupForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
