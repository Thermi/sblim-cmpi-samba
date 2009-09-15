// =======================================================================
// Linux_SambaAllowHostsForGlobalInstance.h
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
#ifndef Linux_SambaAllowHostsForGlobalInstance_h
#define Linux_SambaAllowHostsForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForGlobalInstance();
    Linux_SambaAllowHostsForGlobalInstance(
      const Linux_SambaAllowHostsForGlobalInstance& anInstance);
    Linux_SambaAllowHostsForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForGlobalInstance();
       
    Linux_SambaAllowHostsForGlobalInstance& operator=(
      const Linux_SambaAllowHostsForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForGlobalInstanceEnumerationElement {

    Linux_SambaAllowHostsForGlobalInstance* m_elementP;
    Linux_SambaAllowHostsForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForGlobalInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForGlobalInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForGlobalInstanceEnumeration();
    Linux_SambaAllowHostsForGlobalInstanceEnumeration(
      const Linux_SambaAllowHostsForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForGlobalInstance& anInstance);

  };

}

#endif
