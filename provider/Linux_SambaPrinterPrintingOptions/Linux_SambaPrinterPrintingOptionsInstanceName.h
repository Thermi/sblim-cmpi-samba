// =======================================================================
// Linux_SambaPrinterPrintingOptionsInstanceName.h
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
#ifndef Linux_SambaPrinterPrintingOptionsInstanceName_h
#define Linux_SambaPrinterPrintingOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    const char* m_InstanceID;
    const char* m_Name;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int InstanceID:1;
      unsigned int Name:1;

    } isSet;
  
    public:
    Linux_SambaPrinterPrintingOptionsInstanceName();
  	
    Linux_SambaPrinterPrintingOptionsInstanceName(const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName);
  	   
    Linux_SambaPrinterPrintingOptionsInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaPrinterPrintingOptionsInstanceName();
       
    Linux_SambaPrinterPrintingOptionsInstanceName& operator=(const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isInstanceIDSet() const;
    void setInstanceID(const char* aValue, int aCopyFlag = 1);
    const char* getInstanceID() const;

    unsigned int isNameSet() const;
    void setName(const char* aValue, int aCopyFlag = 1);
    const char* getName() const;


  };
  
  //****************************************************************************
  struct Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement {
  	Linux_SambaPrinterPrintingOptionsInstanceName* m_elementP;
  	Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement();
  	~Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration {
  
  	private:
    Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaPrinterPrintingOptionsInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration();
  	  
    Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration(const Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaPrinterPrintingOptionsInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaPrinterPrintingOptionsInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaPrinterPrintingOptionsInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

