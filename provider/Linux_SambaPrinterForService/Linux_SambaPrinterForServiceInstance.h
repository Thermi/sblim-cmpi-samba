// =======================================================================
// Linux_SambaPrinterForServiceInstance.h
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
#ifndef Linux_SambaPrinterForServiceInstance_h
#define Linux_SambaPrinterForServiceInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterForServiceInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterForServiceInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterForServiceInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaPrinterForServiceInstance();
    Linux_SambaPrinterForServiceInstance(
      const Linux_SambaPrinterForServiceInstance& anInstance);
    Linux_SambaPrinterForServiceInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterForServiceInstance();
       
    Linux_SambaPrinterForServiceInstance& operator=(
      const Linux_SambaPrinterForServiceInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterForServiceInstanceName& anInstanceName);        
    const Linux_SambaPrinterForServiceInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaPrinterForServiceInstanceEnumerationElement {

    Linux_SambaPrinterForServiceInstance* m_elementP;
    Linux_SambaPrinterForServiceInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterForServiceInstanceEnumerationElement();
    ~Linux_SambaPrinterForServiceInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterForServiceInstanceEnumeration {

    private:
    Linux_SambaPrinterForServiceInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterForServiceInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterForServiceInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterForServiceInstanceEnumeration();
    Linux_SambaPrinterForServiceInstanceEnumeration(
      const Linux_SambaPrinterForServiceInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterForServiceInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterForServiceInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterForServiceInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterForServiceInstance& anInstance);

  };

}

#endif
