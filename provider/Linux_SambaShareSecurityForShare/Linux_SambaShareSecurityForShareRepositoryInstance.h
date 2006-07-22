// =======================================================================
// Linux_SambaShareSecurityForShareRepositoryInstance.h
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
#ifndef Linux_SambaShareSecurityForShareRepositoryInstance_h
#define Linux_SambaShareSecurityForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityForShareRepositoryInstance();
    Linux_SambaShareSecurityForShareRepositoryInstance(
      const Linux_SambaShareSecurityForShareRepositoryInstance& anInstance);
    Linux_SambaShareSecurityForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityForShareRepositoryInstance();
       
    Linux_SambaShareSecurityForShareRepositoryInstance& operator=(
      const Linux_SambaShareSecurityForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement {

    Linux_SambaShareSecurityForShareRepositoryInstance* m_elementP;
    Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration();
    Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration(
      const Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityForShareRepositoryInstance& anInstance);

  };

}

#endif
