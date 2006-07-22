// =======================================================================
// Linux_SambaValidUsersForShareRepositoryInstance.h
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
#ifndef Linux_SambaValidUsersForShareRepositoryInstance_h
#define Linux_SambaValidUsersForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaValidUsersForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaValidUsersForShareRepositoryInstance();
    Linux_SambaValidUsersForShareRepositoryInstance(
      const Linux_SambaValidUsersForShareRepositoryInstance& anInstance);
    Linux_SambaValidUsersForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaValidUsersForShareRepositoryInstance();
       
    Linux_SambaValidUsersForShareRepositoryInstance& operator=(
      const Linux_SambaValidUsersForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaValidUsersForShareInstanceName& anInstanceName);        
    const Linux_SambaValidUsersForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement {

    Linux_SambaValidUsersForShareRepositoryInstance* m_elementP;
    Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaValidUsersForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaValidUsersForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaValidUsersForShareRepositoryInstanceEnumeration();
    Linux_SambaValidUsersForShareRepositoryInstanceEnumeration(
      const Linux_SambaValidUsersForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaValidUsersForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaValidUsersForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaValidUsersForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaValidUsersForShareRepositoryInstance& anInstance);

  };

}

#endif
