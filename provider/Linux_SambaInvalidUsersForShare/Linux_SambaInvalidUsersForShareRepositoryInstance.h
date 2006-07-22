// =======================================================================
// Linux_SambaInvalidUsersForShareRepositoryInstance.h
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
#ifndef Linux_SambaInvalidUsersForShareRepositoryInstance_h
#define Linux_SambaInvalidUsersForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaInvalidUsersForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaInvalidUsersForShareRepositoryInstance();
    Linux_SambaInvalidUsersForShareRepositoryInstance(
      const Linux_SambaInvalidUsersForShareRepositoryInstance& anInstance);
    Linux_SambaInvalidUsersForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaInvalidUsersForShareRepositoryInstance();
       
    Linux_SambaInvalidUsersForShareRepositoryInstance& operator=(
      const Linux_SambaInvalidUsersForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName);        
    const Linux_SambaInvalidUsersForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement {

    Linux_SambaInvalidUsersForShareRepositoryInstance* m_elementP;
    Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaInvalidUsersForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration();
    Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration(
      const Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaInvalidUsersForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaInvalidUsersForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaInvalidUsersForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaInvalidUsersForShareRepositoryInstance& anInstance);

  };

}

#endif
