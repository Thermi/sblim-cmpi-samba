/**
 *  Linux_SambaForceUserForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaForceUserForPrinterRepositoryExternal_h
#define Linux_SambaForceUserForPrinterRepositoryExternal_h

#include "Linux_SambaForceUserForPrinterInstanceName.h"
#include "Linux_SambaForceUserForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceUserForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaForceUserForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaForceUserForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaForceUserForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaForceUserForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaForceUserForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaForceUserForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaForceUserForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaForceUserForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
