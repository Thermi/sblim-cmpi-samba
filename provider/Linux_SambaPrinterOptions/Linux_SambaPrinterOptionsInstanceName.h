/**
 *  Linux_SambaPrinterOptionsInstanceName.h
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


#ifndef Linux_SambaPrinterOptionsInstanceName_h
#define Linux_SambaPrinterOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaPrinterOptionsInstanceName {
  public:
       Linux_SambaPrinterOptionsInstanceName();
  	
       Linux_SambaPrinterOptionsInstanceName
  	    (const Linux_SambaPrinterOptionsInstanceName& original);
  	   
       Linux_SambaPrinterOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaPrinterOptionsInstanceName();
       
       Linux_SambaPrinterOptionsInstanceName& operator=
  	    (const Linux_SambaPrinterOptionsInstanceName& original);
       
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
       void init(const Linux_SambaPrinterOptionsInstanceName& original);
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
  
  
  struct Linux_SambaPrinterOptionsInstanceNameEnumerationElement{
  	Linux_SambaPrinterOptionsInstanceName* m_elementP;
  	Linux_SambaPrinterOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterOptionsInstanceNameEnumerationElement();
  	~Linux_SambaPrinterOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaPrinterOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaPrinterOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaPrinterOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaPrinterOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaPrinterOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaPrinterOptionsInstanceNameEnumeration(
  	   const Linux_SambaPrinterOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaPrinterOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaPrinterOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

