// =======================================================================
// Linux_SambaGlobalBrowseForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaGlobalBrowseForGlobalRepositoryInstance_h
#define Linux_SambaGlobalBrowseForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalBrowseForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalBrowseForGlobalRepositoryInstance();
    Linux_SambaGlobalBrowseForGlobalRepositoryInstance(
      const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& anInstance);
    Linux_SambaGlobalBrowseForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalBrowseForGlobalRepositoryInstance();
       
    Linux_SambaGlobalBrowseForGlobalRepositoryInstance& operator=(
      const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalBrowseForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalBrowseForGlobalRepositoryInstance* m_elementP;
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration();
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& anInstance);

  };

}

#endif
