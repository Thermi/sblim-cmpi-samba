// =======================================================================
// Linux_SambaShareSecurityForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaShareSecurityForGlobalRepositoryInstance_h
#define Linux_SambaShareSecurityForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityForGlobalRepositoryInstance();
    Linux_SambaShareSecurityForGlobalRepositoryInstance(
      const Linux_SambaShareSecurityForGlobalRepositoryInstance& anInstance);
    Linux_SambaShareSecurityForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityForGlobalRepositoryInstance();
       
    Linux_SambaShareSecurityForGlobalRepositoryInstance& operator=(
      const Linux_SambaShareSecurityForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaShareSecurityForGlobalRepositoryInstance* m_elementP;
    Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration();
    Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityForGlobalRepositoryInstance& anInstance);

  };

}

#endif
