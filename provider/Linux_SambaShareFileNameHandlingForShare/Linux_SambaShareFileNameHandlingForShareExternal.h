/**
 *  Linux_SambaShareFileNameHandlingForShareExternal.h
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


#ifndef Linux_SambaShareFileNameHandlingForShareExternal_h
#define Linux_SambaShareFileNameHandlingForShareExternal_h

#include "Linux_SambaShareFileNameHandlingForShareInstance.h"
#include "Linux_SambaShareFileNameHandlingOptionsInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareExternal {
  	
    public:
    Linux_SambaShareFileNameHandlingForShareExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaShareFileNameHandlingForShareExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaShareFileNameHandlingForShareInstanceEnumeration&);
     
    virtual Linux_SambaShareFileNameHandlingForShareInstance getInstance(
     const char* *properties,
     const Linux_SambaShareFileNameHandlingForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareFileNameHandlingForShareInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareFileNameHandlingForShareInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareFileNameHandlingForShareInstanceName&);
    
    //association calls
    
    void referencesSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingForShareInstanceEnumeration& instances);

    void referenceNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& instanceNames);

    void referencesManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingForShareInstanceEnumeration& instances);

    void referenceNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& instanceNames);

    void associatorsSettingData( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& instances);

    void associatorNamesSettingData( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& instanceNames);

    void associatorsManagedElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

    void associatorNamesManagedElement( 
     const char *nsp,
     const Linux_SambaShareFileNameHandlingOptionsInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
