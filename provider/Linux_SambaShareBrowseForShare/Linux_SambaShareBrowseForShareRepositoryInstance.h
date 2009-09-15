// =======================================================================
// Linux_SambaShareBrowseForShareRepositoryInstance.h
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
#ifndef Linux_SambaShareBrowseForShareRepositoryInstance_h
#define Linux_SambaShareBrowseForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareBrowseForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareBrowseForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareBrowseForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaShareBrowseForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareBrowseForShareRepositoryInstance();
    Linux_SambaShareBrowseForShareRepositoryInstance(
      const Linux_SambaShareBrowseForShareRepositoryInstance& anInstance);
    Linux_SambaShareBrowseForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareBrowseForShareRepositoryInstance();
       
    Linux_SambaShareBrowseForShareRepositoryInstance& operator=(
      const Linux_SambaShareBrowseForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareBrowseForShareInstanceName& anInstanceName);        
    const Linux_SambaShareBrowseForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareBrowseForShareRepositoryInstanceEnumerationElement {

    Linux_SambaShareBrowseForShareRepositoryInstance* m_elementP;
    Linux_SambaShareBrowseForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaShareBrowseForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaShareBrowseForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareBrowseForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaShareBrowseForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareBrowseForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareBrowseForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareBrowseForShareRepositoryInstanceEnumeration();
    Linux_SambaShareBrowseForShareRepositoryInstanceEnumeration(
      const Linux_SambaShareBrowseForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareBrowseForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareBrowseForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaShareBrowseForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareBrowseForShareRepositoryInstance& anInstance);

  };

}

#endif
