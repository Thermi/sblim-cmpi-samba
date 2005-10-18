/**
 *  Linux_SambaForceUserForShareManualInstance.h
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


#ifndef Linux_SambaForceUserForShareManualInstance_h
#define Linux_SambaForceUserForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForShareManualInstance {
  public:
       Linux_SambaForceUserForShareManualInstance();
  	
       Linux_SambaForceUserForShareManualInstance
  	    (const Linux_SambaForceUserForShareManualInstance& original);
  	   
       Linux_SambaForceUserForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForShareManualInstance();
       
       Linux_SambaForceUserForShareManualInstance& operator=
  	    (const Linux_SambaForceUserForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForShareInstanceName& val);        
       const Linux_SambaForceUserForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForShareManualInstance& original);
       void reset();
       
       Linux_SambaForceUserForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForShareManualInstanceEnumerationElement{
  	Linux_SambaForceUserForShareManualInstance* m_elementP;
  	Linux_SambaForceUserForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForShareManualInstanceEnumerationElement();
  	~Linux_SambaForceUserForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForShareManualInstanceEnumeration(
  	   const Linux_SambaForceUserForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForShareManualInstance& elementP);
  };
}
#endif

