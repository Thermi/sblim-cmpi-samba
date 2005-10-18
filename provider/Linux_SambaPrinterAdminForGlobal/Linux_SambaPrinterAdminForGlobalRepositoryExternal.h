/**
 *  Linux_SambaPrinterAdminForGlobalRepositoryExternal.h
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


#ifndef Linux_SambaPrinterAdminForGlobalRepositoryExternal_h
#define Linux_SambaPrinterAdminForGlobalRepositoryExternal_h

#include "Linux_SambaPrinterAdminForGlobalInstanceName.h"
#include "Linux_SambaPrinterAdminForGlobalRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForGlobalRepositoryExternal {
  	
    public:
    Linux_SambaPrinterAdminForGlobalRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterAdminForGlobalRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterAdminForGlobalInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterAdminForGlobalRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterAdminForGlobalRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterAdminForGlobalInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterAdminForGlobalRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterAdminForGlobalRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterAdminForGlobalInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
