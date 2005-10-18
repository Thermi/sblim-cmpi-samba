/**
 *  Linux_SambaWriteListForPrinterManualInstance.h
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


#ifndef Linux_SambaWriteListForPrinterManualInstance_h
#define Linux_SambaWriteListForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForPrinterManualInstance {
  public:
       Linux_SambaWriteListForPrinterManualInstance();
  	
       Linux_SambaWriteListForPrinterManualInstance
  	    (const Linux_SambaWriteListForPrinterManualInstance& original);
  	   
       Linux_SambaWriteListForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForPrinterManualInstance();
       
       Linux_SambaWriteListForPrinterManualInstance& operator=
  	    (const Linux_SambaWriteListForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForPrinterInstanceName& val);        
       const Linux_SambaWriteListForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaWriteListForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForPrinterManualInstanceEnumerationElement{
  	Linux_SambaWriteListForPrinterManualInstance* m_elementP;
  	Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaWriteListForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForPrinterManualInstanceEnumeration(
  	   const Linux_SambaWriteListForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForPrinterManualInstance& elementP);
  };
}
#endif

