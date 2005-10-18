/**
 *  Linux_SambaUsersForServiceManualInstance.h
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


#ifndef Linux_SambaUsersForServiceManualInstance_h
#define Linux_SambaUsersForServiceManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUsersForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaUsersForServiceManualInstance {
  public:
       Linux_SambaUsersForServiceManualInstance();
  	
       Linux_SambaUsersForServiceManualInstance
  	    (const Linux_SambaUsersForServiceManualInstance& original);
  	   
       Linux_SambaUsersForServiceManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaUsersForServiceManualInstance();
       
       Linux_SambaUsersForServiceManualInstance& operator=
  	    (const Linux_SambaUsersForServiceManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaUsersForServiceInstanceName& val);        
       const Linux_SambaUsersForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaUsersForServiceManualInstance& original);
       void reset();
       
       Linux_SambaUsersForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaUsersForServiceManualInstanceEnumerationElement{
  	Linux_SambaUsersForServiceManualInstance* m_elementP;
  	Linux_SambaUsersForServiceManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaUsersForServiceManualInstanceEnumerationElement();
  	~Linux_SambaUsersForServiceManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaUsersForServiceManualInstanceEnumeration {
  	private:
  	  Linux_SambaUsersForServiceManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaUsersForServiceManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaUsersForServiceManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaUsersForServiceManualInstanceEnumeration();
  	  
  	  Linux_SambaUsersForServiceManualInstanceEnumeration(
  	   const Linux_SambaUsersForServiceManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaUsersForServiceManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaUsersForServiceManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaUsersForServiceManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaUsersForServiceManualInstance& elementP);
  };
}
#endif

