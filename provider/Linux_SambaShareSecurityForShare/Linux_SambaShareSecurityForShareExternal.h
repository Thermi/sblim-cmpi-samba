/**
 *  Linux_SambaShareSecurityForShareExternal.h
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


#ifndef Linux_SambaShareSecurityForShareExternal_h
#define Linux_SambaShareSecurityForShareExternal_h

#include "Linux_SambaShareSecurityForShareInstance.h"
#include "Linux_SambaShareSecurityOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareSecurityForShareExternal {
  	
    public:
    Linux_SambaShareSecurityForShareExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaShareSecurityForShareExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaShareSecurityForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaShareSecurityForShareInstanceEnumeration&);
     
    virtual Linux_SambaShareSecurityForShareInstance getInstance(
     const char* *properties,
     const Linux_SambaShareSecurityForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareSecurityForShareInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareSecurityForShareInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareSecurityForShareInstanceName&);
    
    //association calls
    
    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareInstanceNameEnumeration& instanceNames);

    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityForShareInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareSecurityOptionsInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareSecurityOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
