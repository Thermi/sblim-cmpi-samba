// =======================================================================
// Linux_SambaPrinterSecurityForPrinterInstanceName.h
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
#ifndef Linux_SambaPrinterSecurityForPrinterInstanceName_h
#define Linux_SambaPrinterSecurityForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaPrinterSecurityOptionsInstanceName m_SettingData;
    Linux_SambaPrinterOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaPrinterSecurityForPrinterInstanceName();
  	
    Linux_SambaPrinterSecurityForPrinterInstanceName(const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaPrinterSecurityForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaPrinterSecurityForPrinterInstanceName();
       
    Linux_SambaPrinterSecurityForPrinterInstanceName& operator=(const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaPrinterSecurityOptionsInstanceName& aValue);
    const Linux_SambaPrinterSecurityOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement {
  	Linux_SambaPrinterSecurityForPrinterInstanceName* m_elementP;
  	Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaPrinterSecurityForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration(const Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaPrinterSecurityForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaPrinterSecurityForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

