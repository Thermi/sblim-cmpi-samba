// =======================================================================
// Linux_SambaPrinterBrowseOptionsInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterBrowseOptionsInstance_h
#define Linux_SambaPrinterBrowseOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterBrowseOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterBrowseOptionsInstanceName m_instanceName;
    CMPIBoolean m_Browsable;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Browsable:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterBrowseOptionsInstance();
    Linux_SambaPrinterBrowseOptionsInstance(
      const Linux_SambaPrinterBrowseOptionsInstance& anInstance);
    Linux_SambaPrinterBrowseOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterBrowseOptionsInstance();
       
    Linux_SambaPrinterBrowseOptionsInstance& operator=(
      const Linux_SambaPrinterBrowseOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterBrowseOptionsInstanceName& getInstanceName() const;

    unsigned int isBrowsableSet() const;
    void setBrowsable(const CMPIBoolean aValue);
    const CMPIBoolean getBrowsable() const;

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
  
  struct Linux_SambaPrinterBrowseOptionsInstanceEnumerationElement {

    Linux_SambaPrinterBrowseOptionsInstance* m_elementP;
    Linux_SambaPrinterBrowseOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterBrowseOptionsInstanceEnumerationElement();
    ~Linux_SambaPrinterBrowseOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterBrowseOptionsInstanceEnumeration {

    private:
    Linux_SambaPrinterBrowseOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterBrowseOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterBrowseOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterBrowseOptionsInstanceEnumeration();
    Linux_SambaPrinterBrowseOptionsInstanceEnumeration(
      const Linux_SambaPrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterBrowseOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterBrowseOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterBrowseOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterBrowseOptionsInstance& anInstance);

  };

}

#endif
