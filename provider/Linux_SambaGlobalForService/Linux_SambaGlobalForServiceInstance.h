// =======================================================================
// Linux_SambaGlobalForServiceInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaGlobalForServiceInstance_h
#define Linux_SambaGlobalForServiceInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalForServiceInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalForServiceInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalForServiceInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaGlobalForServiceInstance();
    Linux_SambaGlobalForServiceInstance(
      const Linux_SambaGlobalForServiceInstance& anInstance);
    Linux_SambaGlobalForServiceInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalForServiceInstance();
       
    Linux_SambaGlobalForServiceInstance& operator=(
      const Linux_SambaGlobalForServiceInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalForServiceInstanceName& anInstanceName);        
    const Linux_SambaGlobalForServiceInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaGlobalForServiceInstanceEnumerationElement {

    Linux_SambaGlobalForServiceInstance* m_elementP;
    Linux_SambaGlobalForServiceInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalForServiceInstanceEnumerationElement();
    ~Linux_SambaGlobalForServiceInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalForServiceInstanceEnumeration {

    private:
    Linux_SambaGlobalForServiceInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalForServiceInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalForServiceInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalForServiceInstanceEnumeration();
    Linux_SambaGlobalForServiceInstanceEnumeration(
      const Linux_SambaGlobalForServiceInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalForServiceInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalForServiceInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalForServiceInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalForServiceInstance& anInstance);

  };

}

#endif
