/**
 *  Linux_SambaShareProtocolForShareExternal.h
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


#ifndef Linux_SambaShareProtocolForShareExternal_h
#define Linux_SambaShareProtocolForShareExternal_h

#include "Linux_SambaShareProtocolForShareInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaShareProtocolOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareProtocolForShareExternal {
  	
    public:
    Linux_SambaShareProtocolForShareExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaShareProtocolForShareExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaShareProtocolForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaShareProtocolForShareInstanceEnumeration&);
     
    virtual Linux_SambaShareProtocolForShareInstance getInstance(
     const char* *properties,
     const Linux_SambaShareProtocolForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareProtocolForShareInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareProtocolForShareInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareProtocolForShareInstanceName&);
    
    //association calls
    
    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareInstanceNameEnumeration& instanceNames);

    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolForShareInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareProtocolOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareProtocolOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
