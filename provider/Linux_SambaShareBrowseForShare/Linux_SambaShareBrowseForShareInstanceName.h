// =======================================================================
// Linux_SambaShareBrowseForShareInstanceName.h
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
#ifndef Linux_SambaShareBrowseForShareInstanceName_h
#define Linux_SambaShareBrowseForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareBrowseOptionsInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareBrowseForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareBrowseForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaShareBrowseOptionsInstanceName m_SettingData;
    Linux_SambaShareOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaShareBrowseForShareInstanceName();
  	
    Linux_SambaShareBrowseForShareInstanceName(const Linux_SambaShareBrowseForShareInstanceName& anInstanceName);
  	   
    Linux_SambaShareBrowseForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareBrowseForShareInstanceName();
       
    Linux_SambaShareBrowseForShareInstanceName& operator=(const Linux_SambaShareBrowseForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaShareBrowseOptionsInstanceName& aValue);
    const Linux_SambaShareBrowseOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaShareBrowseForShareInstanceNameEnumerationElement {
  	Linux_SambaShareBrowseForShareInstanceName* m_elementP;
  	Linux_SambaShareBrowseForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareBrowseForShareInstanceNameEnumerationElement();
  	~Linux_SambaShareBrowseForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareBrowseForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareBrowseForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareBrowseForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareBrowseForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareBrowseForShareInstanceNameEnumeration();
  	  
    Linux_SambaShareBrowseForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareBrowseForShareInstanceNameEnumeration(const Linux_SambaShareBrowseForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareBrowseForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareBrowseForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareBrowseForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareBrowseForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

