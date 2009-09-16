// =======================================================================
// Linux_SambaInvalidUsersForGlobalInstance.h
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
#ifndef Linux_SambaInvalidUsersForGlobalInstance_h
#define Linux_SambaInvalidUsersForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaInvalidUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaInvalidUsersForGlobalInstance();
    Linux_SambaInvalidUsersForGlobalInstance(
      const Linux_SambaInvalidUsersForGlobalInstance& anInstance);
    Linux_SambaInvalidUsersForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaInvalidUsersForGlobalInstance();
       
    Linux_SambaInvalidUsersForGlobalInstance& operator=(
      const Linux_SambaInvalidUsersForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaInvalidUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement {

    Linux_SambaInvalidUsersForGlobalInstance* m_elementP;
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement();
    ~Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaInvalidUsersForGlobalInstanceEnumeration {

    private:
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaInvalidUsersForGlobalInstanceEnumeration();
    Linux_SambaInvalidUsersForGlobalInstanceEnumeration(
      const Linux_SambaInvalidUsersForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaInvalidUsersForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaInvalidUsersForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaInvalidUsersForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaInvalidUsersForGlobalInstance& anInstance);

  };

}

#endif
