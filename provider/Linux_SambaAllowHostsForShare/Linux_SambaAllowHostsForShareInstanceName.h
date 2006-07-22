// =======================================================================
// Linux_SambaAllowHostsForShareInstanceName.h
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
#ifndef Linux_SambaAllowHostsForShareInstanceName_h
#define Linux_SambaAllowHostsForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaHostInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaHostInstanceName m_PartComponent;
    Linux_SambaShareOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaAllowHostsForShareInstanceName();
  	
    Linux_SambaAllowHostsForShareInstanceName(const Linux_SambaAllowHostsForShareInstanceName& anInstanceName);
  	   
    Linux_SambaAllowHostsForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaAllowHostsForShareInstanceName();
       
    Linux_SambaAllowHostsForShareInstanceName& operator=(const Linux_SambaAllowHostsForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaHostInstanceName& aValue);
    const Linux_SambaHostInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaAllowHostsForShareInstanceNameEnumerationElement {
  	Linux_SambaAllowHostsForShareInstanceName* m_elementP;
  	Linux_SambaAllowHostsForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaAllowHostsForShareInstanceNameEnumerationElement();
  	~Linux_SambaAllowHostsForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaAllowHostsForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaAllowHostsForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaAllowHostsForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaAllowHostsForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaAllowHostsForShareInstanceNameEnumeration();
  	  
    Linux_SambaAllowHostsForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaAllowHostsForShareInstanceNameEnumeration(const Linux_SambaAllowHostsForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaAllowHostsForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaAllowHostsForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaAllowHostsForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaAllowHostsForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

