// =======================================================================
// Linux_SambaForceUserForShareInstanceName.h
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
#ifndef Linux_SambaForceUserForShareInstanceName_h
#define Linux_SambaForceUserForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaUserInstanceName m_PartComponent;
    Linux_SambaShareOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaForceUserForShareInstanceName();
  	
    Linux_SambaForceUserForShareInstanceName(const Linux_SambaForceUserForShareInstanceName& anInstanceName);
  	   
    Linux_SambaForceUserForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaForceUserForShareInstanceName();
       
    Linux_SambaForceUserForShareInstanceName& operator=(const Linux_SambaForceUserForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaForceUserForShareInstanceNameEnumerationElement {
  	Linux_SambaForceUserForShareInstanceName* m_elementP;
  	Linux_SambaForceUserForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForShareInstanceNameEnumerationElement();
  	~Linux_SambaForceUserForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaForceUserForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaForceUserForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaForceUserForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaForceUserForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaForceUserForShareInstanceNameEnumeration();
  	  
    Linux_SambaForceUserForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaForceUserForShareInstanceNameEnumeration(const Linux_SambaForceUserForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaForceUserForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaForceUserForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaForceUserForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaForceUserForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

