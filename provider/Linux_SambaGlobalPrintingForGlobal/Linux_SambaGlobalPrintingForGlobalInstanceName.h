// =======================================================================
// Linux_SambaGlobalPrintingForGlobalInstanceName.h
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
#ifndef Linux_SambaGlobalPrintingForGlobalInstanceName_h
#define Linux_SambaGlobalPrintingForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGlobalPrintingOptionsInstanceName m_SettingData;
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaGlobalPrintingForGlobalInstanceName();
  	
    Linux_SambaGlobalPrintingForGlobalInstanceName(const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalPrintingForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalPrintingForGlobalInstanceName();
       
    Linux_SambaGlobalPrintingForGlobalInstanceName& operator=(const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaGlobalPrintingOptionsInstanceName& aValue);
    const Linux_SambaGlobalPrintingOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement {
  	Linux_SambaGlobalPrintingForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration(const Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalPrintingForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalPrintingForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

