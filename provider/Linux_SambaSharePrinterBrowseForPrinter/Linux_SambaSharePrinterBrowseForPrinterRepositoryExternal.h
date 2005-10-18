/**
 *  Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal_h
#define Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal_h

#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"
#include "Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaSharePrinterBrowseForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
