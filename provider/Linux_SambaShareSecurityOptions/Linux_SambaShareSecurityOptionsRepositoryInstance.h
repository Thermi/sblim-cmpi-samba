// =======================================================================
// Linux_SambaShareSecurityOptionsRepositoryInstance.h
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
#ifndef Linux_SambaShareSecurityOptionsRepositoryInstance_h
#define Linux_SambaShareSecurityOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityOptionsRepositoryInstance();
    Linux_SambaShareSecurityOptionsRepositoryInstance(
      const Linux_SambaShareSecurityOptionsRepositoryInstance& anInstance);
    Linux_SambaShareSecurityOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityOptionsRepositoryInstance();
       
    Linux_SambaShareSecurityOptionsRepositoryInstance& operator=(
      const Linux_SambaShareSecurityOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaShareSecurityOptionsRepositoryInstance* m_elementP;
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration();
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration(
      const Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityOptionsRepositoryInstance& anInstance);

  };

}

#endif
