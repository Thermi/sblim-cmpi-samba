// =======================================================================
// Linux_SambaHostInstanceName.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#ifndef Linux_SambaHostInstanceName_h
#define Linux_SambaHostInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaHostInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaHostInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    const char* m_Name;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int Name:1;

    } isSet;
  
    public:
    Linux_SambaHostInstanceName();
  	
    Linux_SambaHostInstanceName(const Linux_SambaHostInstanceName& anInstanceName);
  	   
    Linux_SambaHostInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaHostInstanceName();
       
    Linux_SambaHostInstanceName& operator=(const Linux_SambaHostInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isNameSet() const;
    void setName(const char* aValue, int aCopyFlag = 1);
    const char* getName() const;


  };
  
  //****************************************************************************
  struct Linux_SambaHostInstanceNameEnumerationElement {
  	Linux_SambaHostInstanceName* m_elementP;
  	Linux_SambaHostInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaHostInstanceNameEnumerationElement();
  	~Linux_SambaHostInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaHostInstanceNameEnumeration {
  
  	private:
    Linux_SambaHostInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaHostInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaHostInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaHostInstanceNameEnumeration();
  	  
    Linux_SambaHostInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaHostInstanceNameEnumeration(const Linux_SambaHostInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaHostInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaHostInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaHostInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaHostInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

