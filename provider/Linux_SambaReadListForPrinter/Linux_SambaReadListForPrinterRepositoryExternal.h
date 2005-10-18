/**
 *  Linux_SambaReadListForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaReadListForPrinterRepositoryExternal_h
#define Linux_SambaReadListForPrinterRepositoryExternal_h

#include "Linux_SambaReadListForPrinterInstanceName.h"
#include "Linux_SambaReadListForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaReadListForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaReadListForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaReadListForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaReadListForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaReadListForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaReadListForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaReadListForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaReadListForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaReadListForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaReadListForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
