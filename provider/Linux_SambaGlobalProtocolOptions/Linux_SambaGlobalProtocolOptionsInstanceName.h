// =======================================================================
// Linux_SambaGlobalProtocolOptionsInstanceName.h
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
#ifndef Linux_SambaGlobalProtocolOptionsInstanceName_h
#define Linux_SambaGlobalProtocolOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);
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
    Linux_SambaGlobalProtocolOptionsInstanceName();
  	
    Linux_SambaGlobalProtocolOptionsInstanceName(const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalProtocolOptionsInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalProtocolOptionsInstanceName();
       
    Linux_SambaGlobalProtocolOptionsInstanceName& operator=(const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);
       
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
  struct Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement {
  	Linux_SambaGlobalProtocolOptionsInstanceName* m_elementP;
  	Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement();
  	~Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalProtocolOptionsInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration();
  	  
    Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration(const Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalProtocolOptionsInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalProtocolOptionsInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

