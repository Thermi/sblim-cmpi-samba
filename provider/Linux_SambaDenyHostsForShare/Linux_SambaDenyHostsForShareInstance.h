// =======================================================================
// Linux_SambaDenyHostsForShareInstance.h
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
#ifndef Linux_SambaDenyHostsForShareInstance_h
#define Linux_SambaDenyHostsForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForShareInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForShareInstance();
    Linux_SambaDenyHostsForShareInstance(
      const Linux_SambaDenyHostsForShareInstance& anInstance);
    Linux_SambaDenyHostsForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForShareInstance();
       
    Linux_SambaDenyHostsForShareInstance& operator=(
      const Linux_SambaDenyHostsForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForShareInstanceEnumerationElement {

    Linux_SambaDenyHostsForShareInstance* m_elementP;
    Linux_SambaDenyHostsForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForShareInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForShareInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForShareInstanceEnumeration();
    Linux_SambaDenyHostsForShareInstanceEnumeration(
      const Linux_SambaDenyHostsForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForShareInstance& anInstance);

  };

}

#endif
