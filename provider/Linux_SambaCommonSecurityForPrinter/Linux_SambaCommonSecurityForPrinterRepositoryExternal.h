/**
 *  Linux_SambaCommonSecurityForPrinterRepositoryExternal.h
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


#ifndef Linux_SambaCommonSecurityForPrinterRepositoryExternal_h
#define Linux_SambaCommonSecurityForPrinterRepositoryExternal_h

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"
#include "Linux_SambaCommonSecurityForPrinterRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterRepositoryExternal {
  	
    public:
    Linux_SambaCommonSecurityForPrinterRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaCommonSecurityForPrinterRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaCommonSecurityForPrinterRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityForPrinterInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaCommonSecurityForPrinterRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaCommonSecurityForPrinterRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaCommonSecurityForPrinterInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
