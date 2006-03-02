// =======================================================================
// Linux_SambaServiceConfigurationForServiceManualInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
// 
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE 
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaServiceConfigurationForServiceManualInstance_h
#define Linux_SambaServiceConfigurationForServiceManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaServiceConfigurationForServiceManualInstance& anInstance);
    void reset();
       
    Linux_SambaServiceConfigurationForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaServiceConfigurationForServiceManualInstance();
    Linux_SambaServiceConfigurationForServiceManualInstance(
      const Linux_SambaServiceConfigurationForServiceManualInstance& anInstance);
    Linux_SambaServiceConfigurationForServiceManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaServiceConfigurationForServiceManualInstance();
       
    Linux_SambaServiceConfigurationForServiceManualInstance& operator=(
      const Linux_SambaServiceConfigurationForServiceManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);        
    const Linux_SambaServiceConfigurationForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement {

    Linux_SambaServiceConfigurationForServiceManualInstance* m_elementP;
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* m_nextP;

    Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement();
    ~Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration {

    private:
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration();
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration(
      const Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaServiceConfigurationForServiceManualInstance& getNext();
    int getSize() const;
    const Linux_SambaServiceConfigurationForServiceManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaServiceConfigurationForServiceManualInstance& anInstance);

  };

}

#endif
