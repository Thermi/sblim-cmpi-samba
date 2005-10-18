/**
 *  Linux_SambaReadListForPrinterManualInstance.h
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


#ifndef Linux_SambaReadListForPrinterManualInstance_h
#define Linux_SambaReadListForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForPrinterManualInstance {
  public:
       Linux_SambaReadListForPrinterManualInstance();
  	
       Linux_SambaReadListForPrinterManualInstance
  	    (const Linux_SambaReadListForPrinterManualInstance& original);
  	   
       Linux_SambaReadListForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForPrinterManualInstance();
       
       Linux_SambaReadListForPrinterManualInstance& operator=
  	    (const Linux_SambaReadListForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForPrinterInstanceName& val);        
       const Linux_SambaReadListForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaReadListForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForPrinterManualInstanceEnumerationElement{
  	Linux_SambaReadListForPrinterManualInstance* m_elementP;
  	Linux_SambaReadListForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaReadListForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaReadListForPrinterManualInstanceEnumeration(
  	   const Linux_SambaReadListForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForPrinterManualInstance& elementP);
  };
}
#endif

