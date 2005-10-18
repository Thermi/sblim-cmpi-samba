/**
 *  Linux_SambaForceGroupForShareExternal.h
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


#ifndef Linux_SambaForceGroupForShareExternal_h
#define Linux_SambaForceGroupForShareExternal_h

#include "Linux_SambaForceGroupForShareInstance.h"
#include "Linux_SambaShareOptionsInstance.h"
#include "Linux_SambaGroupInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaForceGroupForShareExternal {
  	
    public:
    Linux_SambaForceGroupForShareExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaForceGroupForShareExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaForceGroupForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaForceGroupForShareInstanceEnumeration&);
     
    virtual Linux_SambaForceGroupForShareInstance getInstance(
     const char* *properties,
     const Linux_SambaForceGroupForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaForceGroupForShareInstance&);
     
    virtual void createInstance(
     const Linux_SambaForceGroupForShareInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaForceGroupForShareInstanceName&);
    
    //association calls
    
    void referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForShareInstanceEnumeration& instances);

    void referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaForceGroupForShareInstanceNameEnumeration& instanceNames);

    void referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForShareInstanceEnumeration& instances);

    void referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaForceGroupForShareInstanceNameEnumeration& instanceNames);

    void associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceEnumeration& instances);

    void associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaShareOptionsInstanceNameEnumeration& instanceNames);

    void associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances);

    void associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaShareOptionsInstanceName& sourceInst,
     Linux_SambaGroupInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
