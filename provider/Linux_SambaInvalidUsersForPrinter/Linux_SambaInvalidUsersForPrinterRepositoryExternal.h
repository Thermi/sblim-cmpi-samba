/**
 *  Linux_SambaInvalidUsersForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaInvalidUsersForPrinterRepositoryExternal_h
#define Linux_SambaInvalidUsersForPrinterRepositoryExternal_h

#include "Linux_SambaInvalidUsersForPrinterInstanceName.h"
#include "Linux_SambaInvalidUsersForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaInvalidUsersForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaInvalidUsersForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaInvalidUsersForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaInvalidUsersForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaInvalidUsersForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaInvalidUsersForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaInvalidUsersForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
