/**
 *  Linux_SambaShareProtocolForShareManualInstance.h
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


#ifndef Linux_SambaShareProtocolForShareManualInstance_h
#define Linux_SambaShareProtocolForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareProtocolForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaShareProtocolForShareManualInstance {
  public:
       Linux_SambaShareProtocolForShareManualInstance();
  	
       Linux_SambaShareProtocolForShareManualInstance
  	    (const Linux_SambaShareProtocolForShareManualInstance& original);
  	   
       Linux_SambaShareProtocolForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareProtocolForShareManualInstance();
       
       Linux_SambaShareProtocolForShareManualInstance& operator=
  	    (const Linux_SambaShareProtocolForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareProtocolForShareInstanceName& val);        
       const Linux_SambaShareProtocolForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareProtocolForShareManualInstance& original);
       void reset();
       
       Linux_SambaShareProtocolForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareProtocolForShareManualInstanceEnumerationElement{
  	Linux_SambaShareProtocolForShareManualInstance* m_elementP;
  	Linux_SambaShareProtocolForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareProtocolForShareManualInstanceEnumerationElement();
  	~Linux_SambaShareProtocolForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareProtocolForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareProtocolForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareProtocolForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareProtocolForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareProtocolForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaShareProtocolForShareManualInstanceEnumeration(
  	   const Linux_SambaShareProtocolForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareProtocolForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareProtocolForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareProtocolForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareProtocolForShareManualInstance& elementP);
  };
}
#endif

