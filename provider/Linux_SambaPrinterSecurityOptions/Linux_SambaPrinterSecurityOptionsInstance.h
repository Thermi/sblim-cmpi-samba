// =======================================================================
// Linux_SambaPrinterSecurityOptionsInstance.h
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
#ifndef Linux_SambaPrinterSecurityOptionsInstance_h
#define Linux_SambaPrinterSecurityOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityOptionsInstanceName m_instanceName;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityOptionsInstance();
    Linux_SambaPrinterSecurityOptionsInstance(
      const Linux_SambaPrinterSecurityOptionsInstance& anInstance);
    Linux_SambaPrinterSecurityOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityOptionsInstance();
       
    Linux_SambaPrinterSecurityOptionsInstance& operator=(
      const Linux_SambaPrinterSecurityOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityOptionsInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;


  };
  
  struct Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement {

    Linux_SambaPrinterSecurityOptionsInstance* m_elementP;
    Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityOptionsInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityOptionsInstanceEnumeration();
    Linux_SambaPrinterSecurityOptionsInstanceEnumeration(
      const Linux_SambaPrinterSecurityOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityOptionsInstance& anInstance);

  };

}

#endif
