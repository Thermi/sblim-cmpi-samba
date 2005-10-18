/**
 *  Linux_SambaReadListForShareManualInstance.h
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


#ifndef Linux_SambaReadListForShareManualInstance_h
#define Linux_SambaReadListForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForShareManualInstance {
  public:
       Linux_SambaReadListForShareManualInstance();
  	
       Linux_SambaReadListForShareManualInstance
  	    (const Linux_SambaReadListForShareManualInstance& original);
  	   
       Linux_SambaReadListForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForShareManualInstance();
       
       Linux_SambaReadListForShareManualInstance& operator=
  	    (const Linux_SambaReadListForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForShareInstanceName& val);        
       const Linux_SambaReadListForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForShareManualInstance& original);
       void reset();
       
       Linux_SambaReadListForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForShareManualInstanceEnumerationElement{
  	Linux_SambaReadListForShareManualInstance* m_elementP;
  	Linux_SambaReadListForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForShareManualInstanceEnumerationElement();
  	~Linux_SambaReadListForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaReadListForShareManualInstanceEnumeration(
  	   const Linux_SambaReadListForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForShareManualInstance& elementP);
  };
}
#endif

