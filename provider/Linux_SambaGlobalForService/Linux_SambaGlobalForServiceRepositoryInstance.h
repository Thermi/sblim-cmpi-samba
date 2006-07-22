// =======================================================================
// Linux_SambaGlobalForServiceRepositoryInstance.h
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
#ifndef Linux_SambaGlobalForServiceRepositoryInstance_h
#define Linux_SambaGlobalForServiceRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalForServiceRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalForServiceRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalForServiceRepositoryInstance();
    Linux_SambaGlobalForServiceRepositoryInstance(
      const Linux_SambaGlobalForServiceRepositoryInstance& anInstance);
    Linux_SambaGlobalForServiceRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalForServiceRepositoryInstance();
       
    Linux_SambaGlobalForServiceRepositoryInstance& operator=(
      const Linux_SambaGlobalForServiceRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalForServiceInstanceName& anInstanceName);        
    const Linux_SambaGlobalForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalForServiceRepositoryInstance* m_elementP;
    Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalForServiceRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalForServiceRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalForServiceRepositoryInstanceEnumeration();
    Linux_SambaGlobalForServiceRepositoryInstanceEnumeration(
      const Linux_SambaGlobalForServiceRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalForServiceRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalForServiceRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalForServiceRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalForServiceRepositoryInstance& anInstance);

  };

}

#endif
