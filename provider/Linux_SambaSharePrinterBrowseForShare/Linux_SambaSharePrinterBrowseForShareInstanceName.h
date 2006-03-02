// =======================================================================
// Linux_SambaSharePrinterBrowseForShareInstanceName.h
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
#ifndef Linux_SambaSharePrinterBrowseForShareInstanceName_h
#define Linux_SambaSharePrinterBrowseForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaSharePrinterBrowseOptionsInstanceName m_SettingData;
    Linux_SambaShareOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaSharePrinterBrowseForShareInstanceName();
  	
    Linux_SambaSharePrinterBrowseForShareInstanceName(const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);
  	   
    Linux_SambaSharePrinterBrowseForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaSharePrinterBrowseForShareInstanceName();
       
    Linux_SambaSharePrinterBrowseForShareInstanceName& operator=(const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaSharePrinterBrowseOptionsInstanceName& aValue);
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement {
  	Linux_SambaSharePrinterBrowseForShareInstanceName* m_elementP;
  	Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration();
  	  
    Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration(const Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaSharePrinterBrowseForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaSharePrinterBrowseForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

