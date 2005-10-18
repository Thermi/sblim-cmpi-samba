/**
 *  Linux_SambaPrinterForServiceManualInstance.h
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


#ifndef Linux_SambaPrinterForServiceManualInstance_h
#define Linux_SambaPrinterForServiceManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterForServiceManualInstance {
  public:
       Linux_SambaPrinterForServiceManualInstance();
  	
       Linux_SambaPrinterForServiceManualInstance
  	    (const Linux_SambaPrinterForServiceManualInstance& original);
  	   
       Linux_SambaPrinterForServiceManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterForServiceManualInstance();
       
       Linux_SambaPrinterForServiceManualInstance& operator=
  	    (const Linux_SambaPrinterForServiceManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterForServiceInstanceName& val);        
       const Linux_SambaPrinterForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterForServiceManualInstance& original);
       void reset();
       
       Linux_SambaPrinterForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterForServiceManualInstanceEnumerationElement{
  	Linux_SambaPrinterForServiceManualInstance* m_elementP;
  	Linux_SambaPrinterForServiceManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterForServiceManualInstanceEnumerationElement();
  	~Linux_SambaPrinterForServiceManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterForServiceManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterForServiceManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterForServiceManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterForServiceManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterForServiceManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterForServiceManualInstanceEnumeration(
  	   const Linux_SambaPrinterForServiceManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterForServiceManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterForServiceManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterForServiceManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterForServiceManualInstance& elementP);
  };
}
#endif

