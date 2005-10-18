/**
 *  Linux_SambaCommonSecurityForPrinterInstanceName.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaCommonSecurityForPrinterInstanceName_h
#define Linux_SambaCommonSecurityForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaCommonSecurityOptionsInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterInstanceName {
  public:
       Linux_SambaCommonSecurityForPrinterInstanceName();
  	
       Linux_SambaCommonSecurityForPrinterInstanceName
  	    (const Linux_SambaCommonSecurityForPrinterInstanceName& original);
  	   
       Linux_SambaCommonSecurityForPrinterInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaCommonSecurityForPrinterInstanceName();
       
       Linux_SambaCommonSecurityForPrinterInstanceName& operator=
  	    (const Linux_SambaCommonSecurityForPrinterInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaCommonSecurityOptionsInstanceName& val);
       const Linux_SambaCommonSecurityOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaPrinterOptionsInstanceName& val);
       const Linux_SambaPrinterOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForPrinterInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaCommonSecurityOptionsInstanceName m_SettingData;
       Linux_SambaPrinterOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement{
  	Linux_SambaCommonSecurityForPrinterInstanceName* m_elementP;
  	Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForPrinterInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration();
  	  
  	  Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration(
  	   const Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForPrinterInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForPrinterInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForPrinterInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaCommonSecurityForPrinterInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

