// =======================================================================
// Linux_SambaForceUserForGlobalInstanceName.h
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
#ifndef Linux_SambaForceUserForGlobalInstanceName_h
#define Linux_SambaForceUserForGlobalInstanceName_h

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

  class Linux_SambaForceUserForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForGlobalInstanceName& anInstanceName);
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
    Linux_SambaForceUserForGlobalInstanceName();
  	
    Linux_SambaForceUserForGlobalInstanceName(const Linux_SambaForceUserForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaForceUserForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaForceUserForGlobalInstanceName();
       
    Linux_SambaForceUserForGlobalInstanceName& operator=(const Linux_SambaForceUserForGlobalInstanceName& anInstanceName);
       
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
  struct Linux_SambaForceUserForGlobalInstanceNameEnumerationElement {
  	Linux_SambaForceUserForGlobalInstanceName* m_elementP;
  	Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaForceUserForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaForceUserForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaForceUserForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaForceUserForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaForceUserForGlobalInstanceNameEnumeration(const Linux_SambaForceUserForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaForceUserForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaForceUserForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaForceUserForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaForceUserForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

