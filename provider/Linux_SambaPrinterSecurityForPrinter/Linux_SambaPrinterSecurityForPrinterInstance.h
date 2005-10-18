/**
 *  Linux_SambaPrinterSecurityForPrinterInstance.h
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


#ifndef Linux_SambaPrinterSecurityForPrinterInstance_h
#define Linux_SambaPrinterSecurityForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterInstance {
  public:
       Linux_SambaPrinterSecurityForPrinterInstance();
  	
       Linux_SambaPrinterSecurityForPrinterInstance
  	    (const Linux_SambaPrinterSecurityForPrinterInstance& original);
  	   
       Linux_SambaPrinterSecurityForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityForPrinterInstance();
       
       Linux_SambaPrinterSecurityForPrinterInstance& operator=
  	    (const Linux_SambaPrinterSecurityForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityForPrinterInstanceName& val);        
       const Linux_SambaPrinterSecurityForPrinterInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityForPrinterInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityForPrinterInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityForPrinterInstance* m_elementP;
  	Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityForPrinterInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityForPrinterInstance& elementP);
  };
}
#endif

