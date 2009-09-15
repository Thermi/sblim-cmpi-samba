// =======================================================================
// Linux_SambaServiceManualInstance.h
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
#ifndef Linux_SambaServiceManualInstance_h
#define Linux_SambaServiceManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaServiceManualInstance& anInstance);
    void reset();
       
    Linux_SambaServiceInstanceName m_instanceName;
    CMPIBoolean m_Started;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Started:1;

    } isSet;
    
    public:
    Linux_SambaServiceManualInstance();
    Linux_SambaServiceManualInstance(
      const Linux_SambaServiceManualInstance& anInstance);
    Linux_SambaServiceManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaServiceManualInstance();
       
    Linux_SambaServiceManualInstance& operator=(
      const Linux_SambaServiceManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaServiceInstanceName& anInstanceName);        
    const Linux_SambaServiceInstanceName& getInstanceName() const;

    unsigned int isStartedSet() const;
    void setStarted(const CMPIBoolean aValue);
    const CMPIBoolean getStarted() const;


  };
  
  struct Linux_SambaServiceManualInstanceEnumerationElement {

    Linux_SambaServiceManualInstance* m_elementP;
    Linux_SambaServiceManualInstanceEnumerationElement* m_nextP;

    Linux_SambaServiceManualInstanceEnumerationElement();
    ~Linux_SambaServiceManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaServiceManualInstanceEnumeration {

    private:
    Linux_SambaServiceManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaServiceManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaServiceManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaServiceManualInstanceEnumeration();
    Linux_SambaServiceManualInstanceEnumeration(
      const Linux_SambaServiceManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaServiceManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaServiceManualInstance& getNext();
    int getSize() const;
    const Linux_SambaServiceManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaServiceManualInstance& anInstance);

  };

}

#endif
