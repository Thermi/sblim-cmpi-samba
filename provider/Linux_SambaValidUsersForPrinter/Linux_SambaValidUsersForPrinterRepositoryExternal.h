/**
 *  Linux_SambaValidUsersForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaValidUsersForPrinterRepositoryExternal_h
#define Linux_SambaValidUsersForPrinterRepositoryExternal_h

#include "Linux_SambaValidUsersForPrinterInstanceName.h"
#include "Linux_SambaValidUsersForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaValidUsersForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaValidUsersForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaValidUsersForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaValidUsersForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaValidUsersForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaValidUsersForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaValidUsersForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaValidUsersForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaValidUsersForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaValidUsersForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
