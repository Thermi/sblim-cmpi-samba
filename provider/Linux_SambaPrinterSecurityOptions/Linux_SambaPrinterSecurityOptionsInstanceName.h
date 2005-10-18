/**
 *  Linux_SambaPrinterSecurityOptionsInstanceName.h
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


#ifndef Linux_SambaPrinterSecurityOptionsInstanceName_h
#define Linux_SambaPrinterSecurityOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsInstanceName {
  public:
       Linux_SambaPrinterSecurityOptionsInstanceName();
  	
       Linux_SambaPrinterSecurityOptionsInstanceName
  	    (const Linux_SambaPrinterSecurityOptionsInstanceName& original);
  	   
       Linux_SambaPrinterSecurityOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaPrinterSecurityOptionsInstanceName();
       
       Linux_SambaPrinterSecurityOptionsInstanceName& operator=
  	    (const Linux_SambaPrinterSecurityOptionsInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isInstanceIDSet() const;
       void setInstanceID(const char* val, int makeCopy = 1);
       const char* getInstanceID() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityOptionsInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_InstanceID;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int InstanceID:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityOptionsInstanceNameEnumerationElement{
  	Linux_SambaPrinterSecurityOptionsInstanceName* m_elementP;
  	Linux_SambaPrinterSecurityOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityOptionsInstanceNameEnumerationElement();
  	~Linux_SambaPrinterSecurityOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration(
  	   const Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaPrinterSecurityOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

