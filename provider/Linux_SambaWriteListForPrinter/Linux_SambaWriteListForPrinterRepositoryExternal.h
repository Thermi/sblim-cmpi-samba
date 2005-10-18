/**
 *  Linux_SambaWriteListForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaWriteListForPrinterRepositoryExternal_h
#define Linux_SambaWriteListForPrinterRepositoryExternal_h

#include "Linux_SambaWriteListForPrinterInstanceName.h"
#include "Linux_SambaWriteListForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaWriteListForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaWriteListForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaWriteListForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaWriteListForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaWriteListForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaWriteListForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaWriteListForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaWriteListForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaWriteListForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
