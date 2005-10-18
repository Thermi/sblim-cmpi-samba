/**
 *  Linux_SambaValidUsersForPrinterManualInstance.h
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


#ifndef Linux_SambaValidUsersForPrinterManualInstance_h
#define Linux_SambaValidUsersForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForPrinterManualInstance {
  public:
       Linux_SambaValidUsersForPrinterManualInstance();
  	
       Linux_SambaValidUsersForPrinterManualInstance
  	    (const Linux_SambaValidUsersForPrinterManualInstance& original);
  	   
       Linux_SambaValidUsersForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForPrinterManualInstance();
       
       Linux_SambaValidUsersForPrinterManualInstance& operator=
  	    (const Linux_SambaValidUsersForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForPrinterInstanceName& val);        
       const Linux_SambaValidUsersForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaValidUsersForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement{
  	Linux_SambaValidUsersForPrinterManualInstance* m_elementP;
  	Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForPrinterManualInstanceEnumeration(
  	   const Linux_SambaValidUsersForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForPrinterManualInstance& elementP);
  };
}
#endif

