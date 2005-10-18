/**
 *  Linux_SambaForceUserForPrinterManualInstance.h
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


#ifndef Linux_SambaForceUserForPrinterManualInstance_h
#define Linux_SambaForceUserForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForPrinterManualInstance {
  public:
       Linux_SambaForceUserForPrinterManualInstance();
  	
       Linux_SambaForceUserForPrinterManualInstance
  	    (const Linux_SambaForceUserForPrinterManualInstance& original);
  	   
       Linux_SambaForceUserForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForPrinterManualInstance();
       
       Linux_SambaForceUserForPrinterManualInstance& operator=
  	    (const Linux_SambaForceUserForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForPrinterInstanceName& val);        
       const Linux_SambaForceUserForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaForceUserForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForPrinterManualInstanceEnumerationElement{
  	Linux_SambaForceUserForPrinterManualInstance* m_elementP;
  	Linux_SambaForceUserForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaForceUserForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForPrinterManualInstanceEnumeration(
  	   const Linux_SambaForceUserForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForPrinterManualInstance& elementP);
  };
}
#endif

