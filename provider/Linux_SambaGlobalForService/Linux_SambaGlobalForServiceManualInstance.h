/**
 *  Linux_SambaGlobalForServiceManualInstance.h
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


#ifndef Linux_SambaGlobalForServiceManualInstance_h
#define Linux_SambaGlobalForServiceManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalForServiceManualInstance {
  public:
       Linux_SambaGlobalForServiceManualInstance();
  	
       Linux_SambaGlobalForServiceManualInstance
  	    (const Linux_SambaGlobalForServiceManualInstance& original);
  	   
       Linux_SambaGlobalForServiceManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalForServiceManualInstance();
       
       Linux_SambaGlobalForServiceManualInstance& operator=
  	    (const Linux_SambaGlobalForServiceManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalForServiceInstanceName& val);        
       const Linux_SambaGlobalForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalForServiceManualInstance& original);
       void reset();
       
       Linux_SambaGlobalForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalForServiceManualInstanceEnumerationElement{
  	Linux_SambaGlobalForServiceManualInstance* m_elementP;
  	Linux_SambaGlobalForServiceManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalForServiceManualInstanceEnumerationElement();
  	~Linux_SambaGlobalForServiceManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalForServiceManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalForServiceManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalForServiceManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalForServiceManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalForServiceManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalForServiceManualInstanceEnumeration(
  	   const Linux_SambaGlobalForServiceManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalForServiceManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalForServiceManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalForServiceManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalForServiceManualInstance& elementP);
  };
}
#endif

