// =======================================================================
// Linux_SambaAllowHostsForShareRepositoryInstance.h
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
#ifndef Linux_SambaAllowHostsForShareRepositoryInstance_h
#define Linux_SambaAllowHostsForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForShareRepositoryInstance();
    Linux_SambaAllowHostsForShareRepositoryInstance(
      const Linux_SambaAllowHostsForShareRepositoryInstance& anInstance);
    Linux_SambaAllowHostsForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForShareRepositoryInstance();
       
    Linux_SambaAllowHostsForShareRepositoryInstance& operator=(
      const Linux_SambaAllowHostsForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForShareInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForShareRepositoryInstanceEnumerationElement {

    Linux_SambaAllowHostsForShareRepositoryInstance* m_elementP;
    Linux_SambaAllowHostsForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForShareRepositoryInstanceEnumeration();
    Linux_SambaAllowHostsForShareRepositoryInstanceEnumeration(
      const Linux_SambaAllowHostsForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForShareRepositoryInstance& anInstance);

  };

}

#endif
