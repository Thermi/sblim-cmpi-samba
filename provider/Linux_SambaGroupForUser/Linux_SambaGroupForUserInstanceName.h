// =======================================================================
// Linux_SambaGroupForUserInstanceName.h
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
#ifndef Linux_SambaGroupForUserInstanceName_h
#define Linux_SambaGroupForUserInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGroupInstanceName.h"
#include "Linux_SambaUserInstanceName.h"


namespace genProvider {

  class Linux_SambaGroupForUserInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGroupForUserInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGroupInstanceName m_GroupComponent;
    Linux_SambaUserInstanceName m_PartComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int GroupComponent:1;
      unsigned int PartComponent:1;

    } isSet;
  
    public:
    Linux_SambaGroupForUserInstanceName();
  	
    Linux_SambaGroupForUserInstanceName(const Linux_SambaGroupForUserInstanceName& anInstanceName);
  	   
    Linux_SambaGroupForUserInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGroupForUserInstanceName();
       
    Linux_SambaGroupForUserInstanceName& operator=(const Linux_SambaGroupForUserInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaGroupInstanceName& aValue);
    const Linux_SambaGroupInstanceName& getGroupComponent() const;

    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGroupForUserInstanceNameEnumerationElement {
  	Linux_SambaGroupForUserInstanceName* m_elementP;
  	Linux_SambaGroupForUserInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupForUserInstanceNameEnumerationElement();
  	~Linux_SambaGroupForUserInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGroupForUserInstanceNameEnumeration {
  
  	private:
    Linux_SambaGroupForUserInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGroupForUserInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGroupForUserInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGroupForUserInstanceNameEnumeration();
  	  
    Linux_SambaGroupForUserInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGroupForUserInstanceNameEnumeration(const Linux_SambaGroupForUserInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGroupForUserInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGroupForUserInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGroupForUserInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGroupForUserInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

