// =======================================================================
// Linux_SambaPrinterOptionsInstance.h
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
#ifndef Linux_SambaPrinterOptionsInstance_h
#define Linux_SambaPrinterOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterOptionsInstanceName m_instanceName;
    CMPIBoolean m_Available;
    const char* m_Caption;
    const char* m_Comment;
    const char* m_Description;
    const char* m_ElementName;
    const char* m_Path;
    CMPIBoolean m_Printable;
    const char* m_SystemPrinterName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Available:1;
      unsigned int Caption:1;
      unsigned int Comment:1;
      unsigned int Description:1;
      unsigned int ElementName:1;
      unsigned int Path:1;
      unsigned int Printable:1;
      unsigned int SystemPrinterName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterOptionsInstance();
    Linux_SambaPrinterOptionsInstance(
      const Linux_SambaPrinterOptionsInstance& anInstance);
    Linux_SambaPrinterOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterOptionsInstance();
       
    Linux_SambaPrinterOptionsInstance& operator=(
      const Linux_SambaPrinterOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterOptionsInstanceName& getInstanceName() const;

    unsigned int isAvailableSet() const;
    void setAvailable(const CMPIBoolean aValue);
    const CMPIBoolean getAvailable() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isCommentSet() const;
    void setComment(const char* aValue, int aCopyFlag = 1);
    const char* getComment() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

    unsigned int isPathSet() const;
    void setPath(const char* aValue, int aCopyFlag = 1);
    const char* getPath() const;

    unsigned int isPrintableSet() const;
    void setPrintable(const CMPIBoolean aValue);
    const CMPIBoolean getPrintable() const;

    unsigned int isSystemPrinterNameSet() const;
    void setSystemPrinterName(const char* aValue, int aCopyFlag = 1);
    const char* getSystemPrinterName() const;


  };
  
  struct Linux_SambaPrinterOptionsInstanceEnumerationElement {

    Linux_SambaPrinterOptionsInstance* m_elementP;
    Linux_SambaPrinterOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterOptionsInstanceEnumerationElement();
    ~Linux_SambaPrinterOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterOptionsInstanceEnumeration {

    private:
    Linux_SambaPrinterOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterOptionsInstanceEnumeration();
    Linux_SambaPrinterOptionsInstanceEnumeration(
      const Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterOptionsInstance& anInstance);

  };

}

#endif
