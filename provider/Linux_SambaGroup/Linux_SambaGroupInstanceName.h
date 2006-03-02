// =======================================================================
// Linux_SambaGroupInstanceName.h
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
#ifndef Linux_SambaGroupInstanceName_h
#define Linux_SambaGroupInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaGroupInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGroupInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    const char* m_SambaGroupName;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SambaGroupName:1;

    } isSet;
  
    public:
    Linux_SambaGroupInstanceName();
  	
    Linux_SambaGroupInstanceName(const Linux_SambaGroupInstanceName& anInstanceName);
  	   
    Linux_SambaGroupInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGroupInstanceName();
       
    Linux_SambaGroupInstanceName& operator=(const Linux_SambaGroupInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSambaGroupNameSet() const;
    void setSambaGroupName(const char* aValue, int aCopyFlag = 1);
    const char* getSambaGroupName() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGroupInstanceNameEnumerationElement {
  	Linux_SambaGroupInstanceName* m_elementP;
  	Linux_SambaGroupInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupInstanceNameEnumerationElement();
  	~Linux_SambaGroupInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGroupInstanceNameEnumeration {
  
  	private:
    Linux_SambaGroupInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGroupInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGroupInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGroupInstanceNameEnumeration();
  	  
    Linux_SambaGroupInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGroupInstanceNameEnumeration(const Linux_SambaGroupInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGroupInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGroupInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGroupInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGroupInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

