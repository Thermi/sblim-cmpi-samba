/**
 *  Linux_SambaPrinterForServiceInstance.h
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


#ifndef Linux_SambaPrinterForServiceInstance_h
#define Linux_SambaPrinterForServiceInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterForServiceInstance {
  public:
       Linux_SambaPrinterForServiceInstance();
  	
       Linux_SambaPrinterForServiceInstance
  	    (const Linux_SambaPrinterForServiceInstance& original);
  	   
       Linux_SambaPrinterForServiceInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterForServiceInstance();
       
       Linux_SambaPrinterForServiceInstance& operator=
  	    (const Linux_SambaPrinterForServiceInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterForServiceInstanceName& val);        
       const Linux_SambaPrinterForServiceInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterForServiceInstance& original);
       void reset();
       
       Linux_SambaPrinterForServiceInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterForServiceInstanceEnumerationElement{
  	Linux_SambaPrinterForServiceInstance* m_elementP;
  	Linux_SambaPrinterForServiceInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterForServiceInstanceEnumerationElement();
  	~Linux_SambaPrinterForServiceInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterForServiceInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterForServiceInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterForServiceInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterForServiceInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterForServiceInstanceEnumeration();
  	  
  	  Linux_SambaPrinterForServiceInstanceEnumeration(
  	   const Linux_SambaPrinterForServiceInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterForServiceInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterForServiceInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterForServiceInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterForServiceInstance& elementP);
  };
}
#endif

