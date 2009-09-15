// =======================================================================
// Linux_SambaServiceConfigurationForServiceInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaServiceConfigurationForServiceInstance_h
#define Linux_SambaServiceConfigurationForServiceInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceInstance {
       
    private:
    void init();
    void init(const Linux_SambaServiceConfigurationForServiceInstance& anInstance);
    void reset();
       
    Linux_SambaServiceConfigurationForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaServiceConfigurationForServiceInstance();
    Linux_SambaServiceConfigurationForServiceInstance(
      const Linux_SambaServiceConfigurationForServiceInstance& anInstance);
    Linux_SambaServiceConfigurationForServiceInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaServiceConfigurationForServiceInstance();
       
    Linux_SambaServiceConfigurationForServiceInstance& operator=(
      const Linux_SambaServiceConfigurationForServiceInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);        
    const Linux_SambaServiceConfigurationForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement {

    Linux_SambaServiceConfigurationForServiceInstance* m_elementP;
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* m_nextP;

    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement();
    ~Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement();  

  };
  

  class Linux_SambaServiceConfigurationForServiceInstanceEnumeration {

    private:
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* m_firstElementP;
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* m_currentElementP;
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaServiceConfigurationForServiceInstanceEnumeration();
    Linux_SambaServiceConfigurationForServiceInstanceEnumeration(
      const Linux_SambaServiceConfigurationForServiceInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaServiceConfigurationForServiceInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaServiceConfigurationForServiceInstance& getNext();
    int getSize() const;
    const Linux_SambaServiceConfigurationForServiceInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaServiceConfigurationForServiceInstance& anInstance);

  };

}

#endif
