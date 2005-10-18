/**
 *  Linux_SambaPrinterForServiceInstanceName.h
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


#ifndef Linux_SambaPrinterForServiceInstanceName_h
#define Linux_SambaPrinterForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterForServiceInstanceName {
  public:
       Linux_SambaPrinterForServiceInstanceName();
  	
       Linux_SambaPrinterForServiceInstanceName
  	    (const Linux_SambaPrinterForServiceInstanceName& original);
  	   
       Linux_SambaPrinterForServiceInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaPrinterForServiceInstanceName();
       
       Linux_SambaPrinterForServiceInstanceName& operator=
  	    (const Linux_SambaPrinterForServiceInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaPrinterOptionsInstanceName& val);
       const Linux_SambaPrinterOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaServiceInstanceName& val);
       const Linux_SambaServiceInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterForServiceInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaPrinterOptionsInstanceName m_SettingData;
       Linux_SambaServiceInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterForServiceInstanceNameEnumerationElement{
  	Linux_SambaPrinterForServiceInstanceName* m_elementP;
  	Linux_SambaPrinterForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterForServiceInstanceNameEnumerationElement();
  	~Linux_SambaPrinterForServiceInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaPrinterForServiceInstanceNameEnumeration {
  	private:
  	  Linux_SambaPrinterForServiceInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaPrinterForServiceInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaPrinterForServiceInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterForServiceInstanceNameEnumeration();
  	  
  	  Linux_SambaPrinterForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaPrinterForServiceInstanceNameEnumeration(
  	   const Linux_SambaPrinterForServiceInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaPrinterForServiceInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterForServiceInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterForServiceInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaPrinterForServiceInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

