/**
 *  Linux_SambaInvalidUsersForPrinterManualInstance.h
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


#ifndef Linux_SambaInvalidUsersForPrinterManualInstance_h
#define Linux_SambaInvalidUsersForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaInvalidUsersForPrinterManualInstance {
  public:
       Linux_SambaInvalidUsersForPrinterManualInstance();
  	
       Linux_SambaInvalidUsersForPrinterManualInstance
  	    (const Linux_SambaInvalidUsersForPrinterManualInstance& original);
  	   
       Linux_SambaInvalidUsersForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForPrinterManualInstance();
       
       Linux_SambaInvalidUsersForPrinterManualInstance& operator=
  	    (const Linux_SambaInvalidUsersForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForPrinterInstanceName& val);        
       const Linux_SambaInvalidUsersForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForPrinterManualInstance* m_elementP;
  	Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForPrinterManualInstance& elementP);
  };
}
#endif

