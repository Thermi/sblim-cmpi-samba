/**
 *  Linux_SambaServiceConfigurationForServiceExternal.h
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


#ifndef Linux_SambaServiceConfigurationForServiceExternal_h
#define Linux_SambaServiceConfigurationForServiceExternal_h

#include "Linux_SambaServiceConfigurationForServiceInstance.h"
#include "Linux_SambaServiceConfigurationInstance.h"
#include "Linux_SambaServiceInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceExternal {
  	
    public:
    Linux_SambaServiceConfigurationForServiceExternal(
     const CmpiBroker& brkr, const CmpiContext& ctx);
    virtual ~Linux_SambaServiceConfigurationForServiceExternal();
    
    virtual void enumInstanceNames(
     const char *nsp,
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char *nsp,
     const char* *properties,
     Linux_SambaServiceConfigurationForServiceInstanceEnumeration&);
     
    virtual Linux_SambaServiceConfigurationForServiceInstance getInstance(
     const char* *properties,
     const Linux_SambaServiceConfigurationForServiceInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaServiceConfigurationForServiceInstance&);
     
    virtual void createInstance(
     const Linux_SambaServiceConfigurationForServiceInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaServiceConfigurationForServiceInstanceName&);
    
    //association calls
    
    void referencesConfiguration( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceInstanceEnumeration& instances);

    void referenceNamesConfiguration( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instanceNames);

    void referencesElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceInstanceEnumeration& instances);

    void referenceNamesElement( 
     const char *nsp,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& instanceNames);

    void associatorsConfiguration( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationInstanceEnumeration& instances);

    void associatorNamesConfiguration( 
     const char *nsp,
     const Linux_SambaServiceInstanceName& sourceInst,
     Linux_SambaServiceConfigurationInstanceNameEnumeration& instanceNames);

    void associatorsElement( 
     const char *nsp,
     const char** properties,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceInstanceEnumeration& instances);

    void associatorNamesElement( 
     const char *nsp,
     const Linux_SambaServiceConfigurationInstanceName& sourceInst,
     Linux_SambaServiceInstanceNameEnumeration& instanceNames);

     
    private:
    CmpiBroker  broker;
    CmpiContext context;
  };
}
#endif
