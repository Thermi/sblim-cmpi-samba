/**
 *  Linux_SambaPrinterSecurityForGlobalInstance.h
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


#ifndef Linux_SambaPrinterSecurityForGlobalInstance_h
#define Linux_SambaPrinterSecurityForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalInstance {
  public:
       Linux_SambaPrinterSecurityForGlobalInstance();
  	
       Linux_SambaPrinterSecurityForGlobalInstance
  	    (const Linux_SambaPrinterSecurityForGlobalInstance& original);
  	   
       Linux_SambaPrinterSecurityForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterSecurityForGlobalInstance();
       
       Linux_SambaPrinterSecurityForGlobalInstance& operator=
  	    (const Linux_SambaPrinterSecurityForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterSecurityForGlobalInstanceName& val);        
       const Linux_SambaPrinterSecurityForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterSecurityForGlobalInstance& original);
       void reset();
       
       Linux_SambaPrinterSecurityForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement{
  	Linux_SambaPrinterSecurityForGlobalInstance* m_elementP;
  	Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement();
  	~Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterSecurityForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterSecurityForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaPrinterSecurityForGlobalInstanceEnumeration(
  	   const Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterSecurityForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterSecurityForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterSecurityForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterSecurityForGlobalInstance& elementP);
  };
}
#endif

