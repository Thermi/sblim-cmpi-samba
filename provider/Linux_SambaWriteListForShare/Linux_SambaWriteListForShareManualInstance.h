/**
 *  Linux_SambaWriteListForShareManualInstance.h
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


#ifndef Linux_SambaWriteListForShareManualInstance_h
#define Linux_SambaWriteListForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForShareManualInstance {
  public:
       Linux_SambaWriteListForShareManualInstance();
  	
       Linux_SambaWriteListForShareManualInstance
  	    (const Linux_SambaWriteListForShareManualInstance& original);
  	   
       Linux_SambaWriteListForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForShareManualInstance();
       
       Linux_SambaWriteListForShareManualInstance& operator=
  	    (const Linux_SambaWriteListForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForShareInstanceName& val);        
       const Linux_SambaWriteListForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForShareManualInstance& original);
       void reset();
       
       Linux_SambaWriteListForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForShareManualInstanceEnumerationElement{
  	Linux_SambaWriteListForShareManualInstance* m_elementP;
  	Linux_SambaWriteListForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForShareManualInstanceEnumerationElement();
  	~Linux_SambaWriteListForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForShareManualInstanceEnumeration(
  	   const Linux_SambaWriteListForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForShareManualInstance& elementP);
  };
}
#endif

