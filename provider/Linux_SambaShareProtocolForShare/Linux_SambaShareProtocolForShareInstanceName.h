// =======================================================================
// Linux_SambaShareProtocolForShareInstanceName.h
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
#ifndef Linux_SambaShareProtocolForShareInstanceName_h
#define Linux_SambaShareProtocolForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareOptionsInstanceName.h"
#include "Linux_SambaShareProtocolOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareProtocolForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareProtocolForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaShareOptionsInstanceName m_ManagedElement;
    Linux_SambaShareProtocolOptionsInstanceName m_SettingData;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int ManagedElement:1;
      unsigned int SettingData:1;

    } isSet;
  
    public:
    Linux_SambaShareProtocolForShareInstanceName();
  	
    Linux_SambaShareProtocolForShareInstanceName(const Linux_SambaShareProtocolForShareInstanceName& anInstanceName);
  	   
    Linux_SambaShareProtocolForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareProtocolForShareInstanceName();
       
    Linux_SambaShareProtocolForShareInstanceName& operator=(const Linux_SambaShareProtocolForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getManagedElement() const;

    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaShareProtocolOptionsInstanceName& aValue);
    const Linux_SambaShareProtocolOptionsInstanceName& getSettingData() const;


  };
  
  //****************************************************************************
  struct Linux_SambaShareProtocolForShareInstanceNameEnumerationElement {
  	Linux_SambaShareProtocolForShareInstanceName* m_elementP;
  	Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareProtocolForShareInstanceNameEnumerationElement();
  	~Linux_SambaShareProtocolForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareProtocolForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareProtocolForShareInstanceNameEnumeration();
  	  
    Linux_SambaShareProtocolForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareProtocolForShareInstanceNameEnumeration(const Linux_SambaShareProtocolForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareProtocolForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareProtocolForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareProtocolForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareProtocolForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

