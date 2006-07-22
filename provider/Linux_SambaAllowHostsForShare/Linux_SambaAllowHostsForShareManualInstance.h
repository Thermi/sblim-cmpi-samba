// =======================================================================
// Linux_SambaAllowHostsForShareManualInstance.h
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
#ifndef Linux_SambaAllowHostsForShareManualInstance_h
#define Linux_SambaAllowHostsForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForShareManualInstance();
    Linux_SambaAllowHostsForShareManualInstance(
      const Linux_SambaAllowHostsForShareManualInstance& anInstance);
    Linux_SambaAllowHostsForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForShareManualInstance();
       
    Linux_SambaAllowHostsForShareManualInstance& operator=(
      const Linux_SambaAllowHostsForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForShareInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForShareManualInstanceEnumerationElement {

    Linux_SambaAllowHostsForShareManualInstance* m_elementP;
    Linux_SambaAllowHostsForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForShareManualInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForShareManualInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForShareManualInstanceEnumeration();
    Linux_SambaAllowHostsForShareManualInstanceEnumeration(
      const Linux_SambaAllowHostsForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForShareManualInstance& anInstance);

  };

}

#endif
