/**
 *  Linux_SambaPrinterOptionsExternal.h
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


#ifndef Linux_SambaPrinterOptionsExternal_h
#define Linux_SambaPrinterOptionsExternal_h

#include "Linux_SambaPrinterOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaPrinterOptionsExternal {
  	
    public:
    Linux_SambaPrinterOptionsExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaPrinterOptionsExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaPrinterOptionsInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaPrinterOptionsInstanceEnumeration&);
     
    virtual Linux_SambaPrinterOptionsInstance getInstance(
     const char* *properties,
     const Linux_SambaPrinterOptionsInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaPrinterOptionsInstance&);
     
    virtual void createInstance(
     const Linux_SambaPrinterOptionsInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaPrinterOptionsInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
