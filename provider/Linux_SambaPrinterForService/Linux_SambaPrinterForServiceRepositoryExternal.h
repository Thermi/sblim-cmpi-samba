/**
 *  Linux_SambaPrinterForServiceRepositoryExternal.h
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


#ifndef Linux_SambaPrinterForServiceRepositoryExternal_h
#define Linux_SambaPrinterForServiceRepositoryExternal_h

#include "Linux_SambaPrinterForServiceInstanceName.h"
#include "Linux_SambaPrinterForServiceRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterForServiceRepositoryExternal {
  	
    public:
    Linux_SambaPrinterForServiceRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterForServiceRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterForServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterForServiceRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterForServiceRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterForServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterForServiceRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterForServiceRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterForServiceInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
