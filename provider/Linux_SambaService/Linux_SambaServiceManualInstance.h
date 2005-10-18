/**
 *  Linux_SambaServiceManualInstance.h
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


#ifndef Linux_SambaServiceManualInstance_h
#define Linux_SambaServiceManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceManualInstance {
  public:
       Linux_SambaServiceManualInstance();
  	
       Linux_SambaServiceManualInstance
  	    (const Linux_SambaServiceManualInstance& original);
  	   
       Linux_SambaServiceManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaServiceManualInstance();
       
       Linux_SambaServiceManualInstance& operator=
  	    (const Linux_SambaServiceManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaServiceInstanceName& val);        
       const Linux_SambaServiceInstanceName&
        getInstanceName() const;

       unsigned int isStartedSet() const;
       void setStarted(const CMPIBoolean val);
       const CMPIBoolean getStarted() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceManualInstance& original);
       void reset();
       
       Linux_SambaServiceInstanceName m_instanceName;
       CMPIBoolean m_Started;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Started:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceManualInstanceEnumerationElement{
  	Linux_SambaServiceManualInstance* m_elementP;
  	Linux_SambaServiceManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceManualInstanceEnumerationElement();
  	~Linux_SambaServiceManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaServiceManualInstanceEnumeration {
  	private:
  	  Linux_SambaServiceManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaServiceManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaServiceManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceManualInstanceEnumeration();
  	  
  	  Linux_SambaServiceManualInstanceEnumeration(
  	   const Linux_SambaServiceManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaServiceManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaServiceManualInstance& elementP);
  };
}
#endif

