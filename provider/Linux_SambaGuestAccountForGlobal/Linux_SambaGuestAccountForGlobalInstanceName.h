// =======================================================================
// Linux_SambaGuestAccountForGlobalInstanceName.h
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
#ifndef Linux_SambaGuestAccountForGlobalInstanceName_h
#define Linux_SambaGuestAccountForGlobalInstanceName_h

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

  class Linux_SambaGuestAccountForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName);
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
    Linux_SambaGuestAccountForGlobalInstanceName();
  	
    Linux_SambaGuestAccountForGlobalInstanceName(const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaGuestAccountForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGuestAccountForGlobalInstanceName();
       
    Linux_SambaGuestAccountForGlobalInstanceName& operator=(const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName);
       
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
  struct Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement {
  	Linux_SambaGuestAccountForGlobalInstanceName* m_elementP;
  	Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGuestAccountForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGuestAccountForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaGuestAccountForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGuestAccountForGlobalInstanceNameEnumeration(const Linux_SambaGuestAccountForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGuestAccountForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGuestAccountForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGuestAccountForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

