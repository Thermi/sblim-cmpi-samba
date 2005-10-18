/**
 *  Linux_SambaSharePrinterBrowseOptionsExternal.h
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


#ifndef Linux_SambaSharePrinterBrowseOptionsExternal_h
#define Linux_SambaSharePrinterBrowseOptionsExternal_h

#include "Linux_SambaSharePrinterBrowseOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsExternal {
  	
    public:
    Linux_SambaSharePrinterBrowseOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaSharePrinterBrowseOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration&);
     
    virtual Linux_SambaSharePrinterBrowseOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaSharePrinterBrowseOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaSharePrinterBrowseOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaSharePrinterBrowseOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
