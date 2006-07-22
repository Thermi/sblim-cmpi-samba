// =======================================================================
// Linux_SambaReadListForShareInstanceName.h
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
#ifndef Linux_SambaReadListForShareInstanceName_h
#define Linux_SambaReadListForShareInstanceName_h

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

  class Linux_SambaReadListForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaReadListForShareInstanceName& anInstanceName);
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
    Linux_SambaReadListForShareInstanceName();
  	
    Linux_SambaReadListForShareInstanceName(const Linux_SambaReadListForShareInstanceName& anInstanceName);
  	   
    Linux_SambaReadListForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaReadListForShareInstanceName();
       
    Linux_SambaReadListForShareInstanceName& operator=(const Linux_SambaReadListForShareInstanceName& anInstanceName);
       
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
  struct Linux_SambaReadListForShareInstanceNameEnumerationElement {
  	Linux_SambaReadListForShareInstanceName* m_elementP;
  	Linux_SambaReadListForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForShareInstanceNameEnumerationElement();
  	~Linux_SambaReadListForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaReadListForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaReadListForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaReadListForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaReadListForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaReadListForShareInstanceNameEnumeration();
  	  
    Linux_SambaReadListForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaReadListForShareInstanceNameEnumeration(const Linux_SambaReadListForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaReadListForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaReadListForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaReadListForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaReadListForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

