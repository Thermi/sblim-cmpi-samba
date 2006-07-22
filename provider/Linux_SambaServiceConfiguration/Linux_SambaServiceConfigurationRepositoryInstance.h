// =======================================================================
// Linux_SambaServiceConfigurationRepositoryInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaServiceConfigurationRepositoryInstance_h
#define Linux_SambaServiceConfigurationRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceConfigurationRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaServiceConfigurationRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaServiceConfigurationInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaServiceConfigurationRepositoryInstance();
    Linux_SambaServiceConfigurationRepositoryInstance(
      const Linux_SambaServiceConfigurationRepositoryInstance& anInstance);
    Linux_SambaServiceConfigurationRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaServiceConfigurationRepositoryInstance();
       
    Linux_SambaServiceConfigurationRepositoryInstance& operator=(
      const Linux_SambaServiceConfigurationRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaServiceConfigurationInstanceName& anInstanceName);        
    const Linux_SambaServiceConfigurationInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement {

    Linux_SambaServiceConfigurationRepositoryInstance* m_elementP;
    Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement();
    ~Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaServiceConfigurationRepositoryInstanceEnumeration {

    private:
    Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaServiceConfigurationRepositoryInstanceEnumeration();
    Linux_SambaServiceConfigurationRepositoryInstanceEnumeration(
      const Linux_SambaServiceConfigurationRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaServiceConfigurationRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaServiceConfigurationRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaServiceConfigurationRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaServiceConfigurationRepositoryInstance& anInstance);

  };

}

#endif
