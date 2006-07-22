// =======================================================================
// Linux_SambaAllowHostsForShareInstance.h
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
#ifndef Linux_SambaAllowHostsForShareInstance_h
#define Linux_SambaAllowHostsForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForShareInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForShareInstance();
    Linux_SambaAllowHostsForShareInstance(
      const Linux_SambaAllowHostsForShareInstance& anInstance);
    Linux_SambaAllowHostsForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForShareInstance();
       
    Linux_SambaAllowHostsForShareInstance& operator=(
      const Linux_SambaAllowHostsForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForShareInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForShareInstanceEnumerationElement {

    Linux_SambaAllowHostsForShareInstance* m_elementP;
    Linux_SambaAllowHostsForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForShareInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForShareInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForShareInstanceEnumeration();
    Linux_SambaAllowHostsForShareInstanceEnumeration(
      const Linux_SambaAllowHostsForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForShareInstance& anInstance);

  };

}

#endif
