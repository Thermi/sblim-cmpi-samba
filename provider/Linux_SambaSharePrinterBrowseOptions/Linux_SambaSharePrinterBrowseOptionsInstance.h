// =======================================================================
// Linux_SambaSharePrinterBrowseOptionsInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseOptionsInstance_h
#define Linux_SambaSharePrinterBrowseOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseOptionsInstanceName m_instanceName;
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
    Linux_SambaSharePrinterBrowseOptionsInstance();
    Linux_SambaSharePrinterBrowseOptionsInstance(
      const Linux_SambaSharePrinterBrowseOptionsInstance& anInstance);
    Linux_SambaSharePrinterBrowseOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseOptionsInstance();
       
    Linux_SambaSharePrinterBrowseOptionsInstance& operator=(
      const Linux_SambaSharePrinterBrowseOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& getInstanceName() const;

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
  
  struct Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseOptionsInstance* m_elementP;
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration();
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseOptionsInstance& anInstance);

  };

}

#endif
