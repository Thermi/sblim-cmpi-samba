/**
 *  Linux_SambaReadListForGlobalInstance.h
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


#ifndef Linux_SambaReadListForGlobalInstance_h
#define Linux_SambaReadListForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForGlobalInstance {
  public:
       Linux_SambaReadListForGlobalInstance();
  	
       Linux_SambaReadListForGlobalInstance
  	    (const Linux_SambaReadListForGlobalInstance& original);
  	   
       Linux_SambaReadListForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForGlobalInstance();
       
       Linux_SambaReadListForGlobalInstance& operator=
  	    (const Linux_SambaReadListForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForGlobalInstanceName& val);        
       const Linux_SambaReadListForGlobalInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForGlobalInstance& original);
       void reset();
       
       Linux_SambaReadListForGlobalInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForGlobalInstanceEnumerationElement{
  	Linux_SambaReadListForGlobalInstance* m_elementP;
  	Linux_SambaReadListForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForGlobalInstanceEnumerationElement();
  	~Linux_SambaReadListForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaReadListForGlobalInstanceEnumeration(
  	   const Linux_SambaReadListForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForGlobalInstance& elementP);
  };
}
#endif

