// =======================================================================
// Linux_SambaAllowHostsForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaAllowHostsForGlobalRepositoryInstance_h
#define Linux_SambaAllowHostsForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForGlobalRepositoryInstance();
    Linux_SambaAllowHostsForGlobalRepositoryInstance(
      const Linux_SambaAllowHostsForGlobalRepositoryInstance& anInstance);
    Linux_SambaAllowHostsForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForGlobalRepositoryInstance();
       
    Linux_SambaAllowHostsForGlobalRepositoryInstance& operator=(
      const Linux_SambaAllowHostsForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaAllowHostsForGlobalRepositoryInstance* m_elementP;
    Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumeration();
    Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForGlobalRepositoryInstance& anInstance);

  };

}

#endif
