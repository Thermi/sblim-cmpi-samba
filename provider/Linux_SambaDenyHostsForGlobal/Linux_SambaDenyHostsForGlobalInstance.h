// =======================================================================
// Linux_SambaDenyHostsForGlobalInstance.h
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
#ifndef Linux_SambaDenyHostsForGlobalInstance_h
#define Linux_SambaDenyHostsForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForGlobalInstance();
    Linux_SambaDenyHostsForGlobalInstance(
      const Linux_SambaDenyHostsForGlobalInstance& anInstance);
    Linux_SambaDenyHostsForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForGlobalInstance();
       
    Linux_SambaDenyHostsForGlobalInstance& operator=(
      const Linux_SambaDenyHostsForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForGlobalInstanceEnumerationElement {

    Linux_SambaDenyHostsForGlobalInstance* m_elementP;
    Linux_SambaDenyHostsForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForGlobalInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForGlobalInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForGlobalInstanceEnumeration();
    Linux_SambaDenyHostsForGlobalInstanceEnumeration(
      const Linux_SambaDenyHostsForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForGlobalInstance& anInstance);

  };

}

#endif
