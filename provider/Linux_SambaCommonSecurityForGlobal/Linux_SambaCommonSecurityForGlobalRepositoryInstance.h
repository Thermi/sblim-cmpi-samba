// =======================================================================
// Linux_SambaCommonSecurityForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaCommonSecurityForGlobalRepositoryInstance_h
#define Linux_SambaCommonSecurityForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForGlobalRepositoryInstance();
    Linux_SambaCommonSecurityForGlobalRepositoryInstance(
      const Linux_SambaCommonSecurityForGlobalRepositoryInstance& anInstance);
    Linux_SambaCommonSecurityForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForGlobalRepositoryInstance();
       
    Linux_SambaCommonSecurityForGlobalRepositoryInstance& operator=(
      const Linux_SambaCommonSecurityForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaCommonSecurityForGlobalRepositoryInstance* m_elementP;
    Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration();
    Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForGlobalRepositoryInstance& anInstance);

  };

}

#endif
