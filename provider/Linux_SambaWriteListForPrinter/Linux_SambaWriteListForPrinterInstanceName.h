// =======================================================================
// Linux_SambaWriteListForPrinterInstanceName.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaWriteListForPrinterInstanceName_h
#define Linux_SambaWriteListForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaUserInstanceName m_PartComponent;
    Linux_SambaPrinterOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaWriteListForPrinterInstanceName();
  	
    Linux_SambaWriteListForPrinterInstanceName(const Linux_SambaWriteListForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaWriteListForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaWriteListForPrinterInstanceName();
       
    Linux_SambaWriteListForPrinterInstanceName& operator=(const Linux_SambaWriteListForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaWriteListForPrinterInstanceNameEnumerationElement {
  	Linux_SambaWriteListForPrinterInstanceName* m_elementP;
  	Linux_SambaWriteListForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaWriteListForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaWriteListForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaWriteListForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaWriteListForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaWriteListForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaWriteListForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaWriteListForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaWriteListForPrinterInstanceNameEnumeration(const Linux_SambaWriteListForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaWriteListForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaWriteListForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaWriteListForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaWriteListForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

