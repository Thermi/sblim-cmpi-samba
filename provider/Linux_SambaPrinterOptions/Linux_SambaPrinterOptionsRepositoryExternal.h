/**
 *  Linux_SambaPrinterOptionsRepositoryExternal.h
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


#ifndef Linux_SambaPrinterOptionsRepositoryExternal_h
#define Linux_SambaPrinterOptionsRepositoryExternal_h

#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterOptionsRepositoryExternal {
  	
    public:
    Linux_SambaPrinterOptionsRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterOptionsRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaPrinterOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaPrinterOptionsRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaPrinterOptionsRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterOptionsRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterOptionsRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
