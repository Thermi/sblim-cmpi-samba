// =======================================================================
// Linux_SambaCommonSecurityOptionsRepositoryInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaCommonSecurityOptionsRepositoryInstance_h
#define Linux_SambaCommonSecurityOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityOptionsRepositoryInstance();
    Linux_SambaCommonSecurityOptionsRepositoryInstance(
      const Linux_SambaCommonSecurityOptionsRepositoryInstance& anInstance);
    Linux_SambaCommonSecurityOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityOptionsRepositoryInstance();
       
    Linux_SambaCommonSecurityOptionsRepositoryInstance& operator=(
      const Linux_SambaCommonSecurityOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaCommonSecurityOptionsRepositoryInstance* m_elementP;
    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration();
    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration(
      const Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityOptionsRepositoryInstance& anInstance);

  };

}

#endif
