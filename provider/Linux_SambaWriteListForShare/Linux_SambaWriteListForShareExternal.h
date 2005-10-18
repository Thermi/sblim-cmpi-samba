/**
 *  Linux_SambaWriteListForShareExternal.h
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


#ifndef Linux_SambaWriteListForShareExternal_h
#define Linux_SambaWriteListForShareExternal_h

#include "Linux_SambaWriteListForShareInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaWriteListForShareExternal {
  	
    public:
    Linux_SambaWriteListForShareExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaWriteListForShareExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaWriteListForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaWriteListForShareInstanceEnumeration&);
     
    virtual Linux_SambaWriteListForShareInstance getInstance(
     const char* *properties,
     const Linux_SambaWriteListForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaWriteListForShareInstance&);
     
    virtual void createInstance(
     const Linux_SambaWriteListForShareInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaWriteListForShareInstanceName&);
    
    //association calls
    
    void referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaWriteListForShareInstanceEnumeration& instances);

    void referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaWriteListForShareInstanceNameEnumeration& instanceNames);

    void referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaWriteListForShareInstanceEnumeration& instances);

    void referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaWriteListForShareInstanceNameEnumeration& instanceNames);

    void associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances);

    void associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaUserInstanceNameEnumeration& instanceNames);

    void associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

    void associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
