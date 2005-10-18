/**
 *  Linux_SambaGroupForUserExternal.h
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


#ifndef Linux_SambaGroupForUserExternal_h
#define Linux_SambaGroupForUserExternal_h

#include "Linux_SambaGroupForUserInstance.h"
#include "Linux_SambaGroupInstance.h"
#include "Linux_SambaUserInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaGroupForUserExternal {
  	
    public:
    Linux_SambaGroupForUserExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaGroupForUserExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaGroupForUserInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaGroupForUserInstanceEnumeration&);
     
    virtual Linux_SambaGroupForUserInstance getInstance(
     const char* *properties,
     const Linux_SambaGroupForUserInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaGroupForUserInstance&);
     
    virtual void createInstance(
     const Linux_SambaGroupForUserInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaGroupForUserInstanceName&);
    
    //association calls
    
    void referencesGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupForUserInstanceEnumeration& instances);

    void referenceNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupForUserInstanceNameEnumeration& instanceNames);

    void referencesPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaGroupForUserInstanceEnumeration& instances);

    void referenceNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaGroupForUserInstanceNameEnumeration& instanceNames);

    void associatorsGroupComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupInstanceEnumeration& instances);

    void associatorNamesGroupComponent( 
     const char *nsp,
     const Linux_SambaUserInstanceName& sourceInst,
     Linux_SambaGroupInstanceNameEnumeration& instanceNames);

    void associatorsPartComponent( 
     const char *nsp,
     const char** properties,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaUserInstanceEnumeration& instances);

    void associatorNamesPartComponent( 
     const char *nsp,
     const Linux_SambaGroupInstanceName& sourceInst,
     Linux_SambaUserInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
