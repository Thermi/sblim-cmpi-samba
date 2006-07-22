// =======================================================================
// Linux_SambaGroupManualInstance.h
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
#ifndef Linux_SambaGroupManualInstance_h
#define Linux_SambaGroupManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupInstanceName.h"


namespace genProvider {

  class Linux_SambaGroupManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGroupManualInstance& anInstance);
    void reset();
       
    Linux_SambaGroupInstanceName m_instanceName;
    const char* m_SystemGroupName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int SystemGroupName:1;

    } isSet;
    
    public:
    Linux_SambaGroupManualInstance();
    Linux_SambaGroupManualInstance(
      const Linux_SambaGroupManualInstance& anInstance);
    Linux_SambaGroupManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGroupManualInstance();
       
    Linux_SambaGroupManualInstance& operator=(
      const Linux_SambaGroupManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGroupInstanceName& anInstanceName);        
    const Linux_SambaGroupInstanceName& getInstanceName() const;

    unsigned int isSystemGroupNameSet() const;
    void setSystemGroupName(const char* aValue, int aCopyFlag = 1);
    const char* getSystemGroupName() const;


  };
  
  struct Linux_SambaGroupManualInstanceEnumerationElement {

    Linux_SambaGroupManualInstance* m_elementP;
    Linux_SambaGroupManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGroupManualInstanceEnumerationElement();
    ~Linux_SambaGroupManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGroupManualInstanceEnumeration {

    private:
    Linux_SambaGroupManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGroupManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGroupManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGroupManualInstanceEnumeration();
    Linux_SambaGroupManualInstanceEnumeration(
      const Linux_SambaGroupManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGroupManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGroupManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGroupManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGroupManualInstance& anInstance);

  };

}

#endif
