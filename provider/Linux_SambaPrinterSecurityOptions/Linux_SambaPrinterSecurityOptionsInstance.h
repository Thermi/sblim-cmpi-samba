/**
 *  Linux_SambaPrinterSecurityOptionsInstance.h
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


#ifndef Linux_SambaPrinterSecurityOptionsInstance_h
#define Linux_SambaPrinterSecurityOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsInstance {
  public:
       Linux_SambaPrinterSecurityOptionsInstance();
  	
       Linux_SambaPrinterSecurityOptionsInstance
  	    (const Linux_SambaPrinterSecurityOptionsInstance& original);
  	   
       Linux_SambaPrinterSecurityOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityOptionsInstance();
       
       Linux_SambaPrinterSecurityOptionsInstance& operator=
  	    (const Linux_SambaPrinterSecurityOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityOptionsInstanceName& val);        
       const Linux_SambaPrinterSecurityOptionsInstanceName&
        getInstanceName() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityOptionsInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityOptionsInstanceName m_instanceName;
       const char* m_Caption;
       const char* m_Description;
       const char* m_ElementName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityOptionsInstance* m_elementP;
  	Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityOptionsInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityOptionsInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityOptionsInstance& elementP);
  };
}
#endif

