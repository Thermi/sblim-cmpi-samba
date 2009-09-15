// =======================================================================
// Linux_SambaDenyHostsForShareRepositoryInstance.h
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
#ifndef Linux_SambaDenyHostsForShareRepositoryInstance_h
#define Linux_SambaDenyHostsForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForShareRepositoryInstance();
    Linux_SambaDenyHostsForShareRepositoryInstance(
      const Linux_SambaDenyHostsForShareRepositoryInstance& anInstance);
    Linux_SambaDenyHostsForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForShareRepositoryInstance();
       
    Linux_SambaDenyHostsForShareRepositoryInstance& operator=(
      const Linux_SambaDenyHostsForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForShareRepositoryInstanceEnumerationElement {

    Linux_SambaDenyHostsForShareRepositoryInstance* m_elementP;
    Linux_SambaDenyHostsForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForShareRepositoryInstanceEnumeration();
    Linux_SambaDenyHostsForShareRepositoryInstanceEnumeration(
      const Linux_SambaDenyHostsForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForShareRepositoryInstance& anInstance);

  };

}

#endif
