// =======================================================================
// Linux_SambaGlobalBrowseOptionsRepositoryInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalBrowseOptionsRepositoryInstance_h
#define Linux_SambaGlobalBrowseOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalBrowseOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalBrowseOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalBrowseOptionsRepositoryInstance();
    Linux_SambaGlobalBrowseOptionsRepositoryInstance(
      const Linux_SambaGlobalBrowseOptionsRepositoryInstance& anInstance);
    Linux_SambaGlobalBrowseOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalBrowseOptionsRepositoryInstance();
       
    Linux_SambaGlobalBrowseOptionsRepositoryInstance& operator=(
      const Linux_SambaGlobalBrowseOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalBrowseOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalBrowseOptionsRepositoryInstance* m_elementP;
    Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration();
    Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration(
      const Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalBrowseOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalBrowseOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalBrowseOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalBrowseOptionsRepositoryInstance& anInstance);

  };

}

#endif
