// =======================================================================
// Linux_SambaReadListForGlobalInstanceName.h
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
#ifndef Linux_SambaReadListForGlobalInstanceName_h
#define Linux_SambaReadListForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaReadListForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaReadListForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaUserInstanceName m_PartComponent;
    Linux_SambaGlobalOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaReadListForGlobalInstanceName();
  	
    Linux_SambaReadListForGlobalInstanceName(const Linux_SambaReadListForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaReadListForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaReadListForGlobalInstanceName();
       
    Linux_SambaReadListForGlobalInstanceName& operator=(const Linux_SambaReadListForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaReadListForGlobalInstanceNameEnumerationElement {
  	Linux_SambaReadListForGlobalInstanceName* m_elementP;
  	Linux_SambaReadListForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaReadListForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaReadListForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaReadListForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaReadListForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaReadListForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaReadListForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaReadListForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaReadListForGlobalInstanceNameEnumeration(const Linux_SambaReadListForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaReadListForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaReadListForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaReadListForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaReadListForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

