// =======================================================================
// Linux_SambaServiceConfigurationForServiceRepositoryInstance.h
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
#ifndef Linux_SambaServiceConfigurationForServiceRepositoryInstance_h
#define Linux_SambaServiceConfigurationForServiceRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaServiceConfigurationForServiceRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaServiceConfigurationForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaServiceConfigurationForServiceRepositoryInstance();
    Linux_SambaServiceConfigurationForServiceRepositoryInstance(
      const Linux_SambaServiceConfigurationForServiceRepositoryInstance& anInstance);
    Linux_SambaServiceConfigurationForServiceRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaServiceConfigurationForServiceRepositoryInstance();
       
    Linux_SambaServiceConfigurationForServiceRepositoryInstance& operator=(
      const Linux_SambaServiceConfigurationForServiceRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName);        
    const Linux_SambaServiceConfigurationForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement {

    Linux_SambaServiceConfigurationForServiceRepositoryInstance* m_elementP;
    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement();
    ~Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration {

    private:
    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration();
    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration(
      const Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaServiceConfigurationForServiceRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaServiceConfigurationForServiceRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaServiceConfigurationForServiceRepositoryInstance& anInstance);

  };

}

#endif
