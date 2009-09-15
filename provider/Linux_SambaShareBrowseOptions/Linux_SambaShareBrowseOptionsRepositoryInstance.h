// =======================================================================
// Linux_SambaShareBrowseOptionsRepositoryInstance.h
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
#ifndef Linux_SambaShareBrowseOptionsRepositoryInstance_h
#define Linux_SambaShareBrowseOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareBrowseOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareBrowseOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaShareBrowseOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareBrowseOptionsRepositoryInstance();
    Linux_SambaShareBrowseOptionsRepositoryInstance(
      const Linux_SambaShareBrowseOptionsRepositoryInstance& anInstance);
    Linux_SambaShareBrowseOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareBrowseOptionsRepositoryInstance();
       
    Linux_SambaShareBrowseOptionsRepositoryInstance& operator=(
      const Linux_SambaShareBrowseOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareBrowseOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareBrowseOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaShareBrowseOptionsRepositoryInstance* m_elementP;
    Linux_SambaShareBrowseOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaShareBrowseOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaShareBrowseOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareBrowseOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaShareBrowseOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareBrowseOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareBrowseOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareBrowseOptionsRepositoryInstanceEnumeration();
    Linux_SambaShareBrowseOptionsRepositoryInstanceEnumeration(
      const Linux_SambaShareBrowseOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareBrowseOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareBrowseOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaShareBrowseOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareBrowseOptionsRepositoryInstance& anInstance);

  };

}

#endif
