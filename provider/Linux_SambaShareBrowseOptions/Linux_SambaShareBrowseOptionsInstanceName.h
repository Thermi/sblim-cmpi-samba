// =======================================================================
// Linux_SambaShareBrowseOptionsInstanceName.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareBrowseOptionsInstanceName_h
#define Linux_SambaShareBrowseOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"


namespace genProvider {

  class Linux_SambaShareBrowseOptionsInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);
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
    Linux_SambaShareBrowseOptionsInstanceName();
  	
    Linux_SambaShareBrowseOptionsInstanceName(const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);
  	   
    Linux_SambaShareBrowseOptionsInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareBrowseOptionsInstanceName();
       
    Linux_SambaShareBrowseOptionsInstanceName& operator=(const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);
       
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
  struct Linux_SambaShareBrowseOptionsInstanceNameEnumerationElement {
  	Linux_SambaShareBrowseOptionsInstanceName* m_elementP;
  	Linux_SambaShareBrowseOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareBrowseOptionsInstanceNameEnumerationElement();
  	~Linux_SambaShareBrowseOptionsInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareBrowseOptionsInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareBrowseOptionsInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareBrowseOptionsInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareBrowseOptionsInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareBrowseOptionsInstanceNameEnumeration();
  	  
    Linux_SambaShareBrowseOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareBrowseOptionsInstanceNameEnumeration(const Linux_SambaShareBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareBrowseOptionsInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareBrowseOptionsInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareBrowseOptionsInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

