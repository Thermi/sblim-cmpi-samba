/**
 *  Linux_SambaUsersForServiceInstance.h
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


#ifndef Linux_SambaUsersForServiceInstance_h
#define Linux_SambaUsersForServiceInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUsersForServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaUsersForServiceInstance {
  public:
       Linux_SambaUsersForServiceInstance();
  	
       Linux_SambaUsersForServiceInstance
  	    (const Linux_SambaUsersForServiceInstance& original);
  	   
       Linux_SambaUsersForServiceInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaUsersForServiceInstance();
       
       Linux_SambaUsersForServiceInstance& operator=
  	    (const Linux_SambaUsersForServiceInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaUsersForServiceInstanceName& val);        
       const Linux_SambaUsersForServiceInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaUsersForServiceInstance& original);
       void reset();
       
       Linux_SambaUsersForServiceInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaUsersForServiceInstanceEnumerationElement{
  	Linux_SambaUsersForServiceInstance* m_elementP;
  	Linux_SambaUsersForServiceInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaUsersForServiceInstanceEnumerationElement();
  	~Linux_SambaUsersForServiceInstanceEnumerationElement();  	
  };
  

  class Linux_SambaUsersForServiceInstanceEnumeration {
  	private:
  	  Linux_SambaUsersForServiceInstanceEnumerationElement* firstElementP;
  	  Linux_SambaUsersForServiceInstanceEnumerationElement* currentElementP;
  	  Linux_SambaUsersForServiceInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaUsersForServiceInstanceEnumeration();
  	  
  	  Linux_SambaUsersForServiceInstanceEnumeration(
  	   const Linux_SambaUsersForServiceInstanceEnumeration& original);
  	  
  	  ~Linux_SambaUsersForServiceInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaUsersForServiceInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaUsersForServiceInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaUsersForServiceInstance& elementP);
  };
}
#endif

