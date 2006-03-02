// =======================================================================
// Linux_SambaSharePrinterBrowseForPrinterInstanceName.h
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
#ifndef Linux_SambaSharePrinterBrowseForPrinterInstanceName_h
#define Linux_SambaSharePrinterBrowseForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaPrinterOptionsInstanceName m_ManagedElement;
    Linux_SambaSharePrinterBrowseOptionsInstanceName m_SettingData;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int ManagedElement:1;
      unsigned int SettingData:1;

    } isSet;
  
    public:
    Linux_SambaSharePrinterBrowseForPrinterInstanceName();
  	
    Linux_SambaSharePrinterBrowseForPrinterInstanceName(const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaSharePrinterBrowseForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaSharePrinterBrowseForPrinterInstanceName();
       
    Linux_SambaSharePrinterBrowseForPrinterInstanceName& operator=(const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getManagedElement() const;

    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaSharePrinterBrowseOptionsInstanceName& aValue);
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& getSettingData() const;


  };
  
  //****************************************************************************
  struct Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement {
  	Linux_SambaSharePrinterBrowseForPrinterInstanceName* m_elementP;
  	Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration(const Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaSharePrinterBrowseForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaSharePrinterBrowseForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

