// =======================================================================
// Linux_SambaUsersForServiceRepositoryInstance.h
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
#ifndef Linux_SambaUsersForServiceRepositoryInstance_h
#define Linux_SambaUsersForServiceRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUsersForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaUsersForServiceRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaUsersForServiceRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaUsersForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaUsersForServiceRepositoryInstance();
    Linux_SambaUsersForServiceRepositoryInstance(
      const Linux_SambaUsersForServiceRepositoryInstance& anInstance);
    Linux_SambaUsersForServiceRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaUsersForServiceRepositoryInstance();
       
    Linux_SambaUsersForServiceRepositoryInstance& operator=(
      const Linux_SambaUsersForServiceRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaUsersForServiceInstanceName& anInstanceName);        
    const Linux_SambaUsersForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement {

    Linux_SambaUsersForServiceRepositoryInstance* m_elementP;
    Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement();
    ~Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaUsersForServiceRepositoryInstanceEnumeration {

    private:
    Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaUsersForServiceRepositoryInstanceEnumeration();
    Linux_SambaUsersForServiceRepositoryInstanceEnumeration(
      const Linux_SambaUsersForServiceRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaUsersForServiceRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaUsersForServiceRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaUsersForServiceRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaUsersForServiceRepositoryInstance& anInstance);

  };

}

#endif
