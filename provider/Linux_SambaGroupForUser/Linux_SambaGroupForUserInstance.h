/**
 *  Linux_SambaGroupForUserInstance.h
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


#ifndef Linux_SambaGroupForUserInstance_h
#define Linux_SambaGroupForUserInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupForUserInstanceName.h"

namespace genProvider {

  class Linux_SambaGroupForUserInstance {
  public:
       Linux_SambaGroupForUserInstance();
  	
       Linux_SambaGroupForUserInstance
  	    (const Linux_SambaGroupForUserInstance& original);
  	   
       Linux_SambaGroupForUserInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGroupForUserInstance();
       
       Linux_SambaGroupForUserInstance& operator=
  	    (const Linux_SambaGroupForUserInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGroupForUserInstanceName& val);        
       const Linux_SambaGroupForUserInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaGroupForUserInstance& original);
       void reset();
       
       Linux_SambaGroupForUserInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGroupForUserInstanceEnumerationElement{
  	Linux_SambaGroupForUserInstance* m_elementP;
  	Linux_SambaGroupForUserInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupForUserInstanceEnumerationElement();
  	~Linux_SambaGroupForUserInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGroupForUserInstanceEnumeration {
  	private:
  	  Linux_SambaGroupForUserInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGroupForUserInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGroupForUserInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGroupForUserInstanceEnumeration();
  	  
  	  Linux_SambaGroupForUserInstanceEnumeration(
  	   const Linux_SambaGroupForUserInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGroupForUserInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGroupForUserInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGroupForUserInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGroupForUserInstance& elementP);
  };
}
#endif

