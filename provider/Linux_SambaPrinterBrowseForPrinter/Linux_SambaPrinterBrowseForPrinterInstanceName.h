// =======================================================================
// Linux_SambaPrinterBrowseForPrinterInstanceName.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaPrinterBrowseForPrinterInstanceName_h
#define Linux_SambaPrinterBrowseForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaPrinterBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaPrinterOptionsInstanceName m_ManagedElement;
    Linux_SambaPrinterBrowseOptionsInstanceName m_SettingData;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int ManagedElement:1;
      unsigned int SettingData:1;

    } isSet;
  
    public:
    Linux_SambaPrinterBrowseForPrinterInstanceName();
  	
    Linux_SambaPrinterBrowseForPrinterInstanceName(const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaPrinterBrowseForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaPrinterBrowseForPrinterInstanceName();
       
    Linux_SambaPrinterBrowseForPrinterInstanceName& operator=(const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getManagedElement() const;

    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaPrinterBrowseOptionsInstanceName& aValue);
    const Linux_SambaPrinterBrowseOptionsInstanceName& getSettingData() const;


  };
  
  //****************************************************************************
  struct Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement {
  	Linux_SambaPrinterBrowseForPrinterInstanceName* m_elementP;
  	Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration(const Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaPrinterBrowseForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaPrinterBrowseForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

