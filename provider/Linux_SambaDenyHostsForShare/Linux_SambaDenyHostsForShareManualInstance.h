// =======================================================================
// Linux_SambaDenyHostsForShareManualInstance.h
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
#ifndef Linux_SambaDenyHostsForShareManualInstance_h
#define Linux_SambaDenyHostsForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForShareManualInstance();
    Linux_SambaDenyHostsForShareManualInstance(
      const Linux_SambaDenyHostsForShareManualInstance& anInstance);
    Linux_SambaDenyHostsForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForShareManualInstance();
       
    Linux_SambaDenyHostsForShareManualInstance& operator=(
      const Linux_SambaDenyHostsForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForShareInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForShareManualInstanceEnumerationElement {

    Linux_SambaDenyHostsForShareManualInstance* m_elementP;
    Linux_SambaDenyHostsForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForShareManualInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForShareManualInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForShareManualInstanceEnumeration();
    Linux_SambaDenyHostsForShareManualInstanceEnumeration(
      const Linux_SambaDenyHostsForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForShareManualInstance& anInstance);

  };

}

#endif
