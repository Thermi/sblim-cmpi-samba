// =======================================================================
// Linux_SambaPrinterPrintingForPrinterInstanceName.h
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
#ifndef Linux_SambaPrinterPrintingForPrinterInstanceName_h
#define Linux_SambaPrinterPrintingForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaPrinterPrintingOptionsInstanceName m_SettingData;
    Linux_SambaPrinterOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaPrinterPrintingForPrinterInstanceName();
  	
    Linux_SambaPrinterPrintingForPrinterInstanceName(const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaPrinterPrintingForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaPrinterPrintingForPrinterInstanceName();
       
    Linux_SambaPrinterPrintingForPrinterInstanceName& operator=(const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaPrinterPrintingOptionsInstanceName& aValue);
    const Linux_SambaPrinterPrintingOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement {
  	Linux_SambaPrinterPrintingForPrinterInstanceName* m_elementP;
  	Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration(const Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaPrinterPrintingForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaPrinterPrintingForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

