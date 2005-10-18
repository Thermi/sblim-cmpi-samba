/**
 *  Linux_SambaSharePrinterBrowseForShareRepositoryExternal.h
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


#ifndef Linux_SambaSharePrinterBrowseForShareRepositoryExternal_h
#define Linux_SambaSharePrinterBrowseForShareRepositoryExternal_h

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"
#include "Linux_SambaSharePrinterBrowseForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareRepositoryExternal {
  	
    public:
    Linux_SambaSharePrinterBrowseForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaSharePrinterBrowseForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaSharePrinterBrowseForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaSharePrinterBrowseForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaSharePrinterBrowseForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaSharePrinterBrowseForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
