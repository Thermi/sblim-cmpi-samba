/**
 *  Linux_SambaGlobalPrintingForGlobalManualInstance.h
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


#ifndef Linux_SambaGlobalPrintingForGlobalManualInstance_h
#define Linux_SambaGlobalPrintingForGlobalManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalManualInstance {
  public:
       Linux_SambaGlobalPrintingForGlobalManualInstance();
  	
       Linux_SambaGlobalPrintingForGlobalManualInstance
  	    (const Linux_SambaGlobalPrintingForGlobalManualInstance& original);
  	   
       Linux_SambaGlobalPrintingForGlobalManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalPrintingForGlobalManualInstance();
       
       Linux_SambaGlobalPrintingForGlobalManualInstance& operator=
  	    (const Linux_SambaGlobalPrintingForGlobalManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalPrintingForGlobalInstanceName& val);        
       const Linux_SambaGlobalPrintingForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalPrintingForGlobalManualInstance& original);
       void reset();
       
       Linux_SambaGlobalPrintingForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement{
  	Linux_SambaGlobalPrintingForGlobalManualInstance* m_elementP;
  	Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement();
  	~Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration(
  	   const Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalPrintingForGlobalManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalPrintingForGlobalManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalPrintingForGlobalManualInstance& elementP);
  };
}
#endif

