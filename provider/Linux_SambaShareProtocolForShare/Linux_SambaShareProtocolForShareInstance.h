/**
 *  Linux_SambaShareProtocolForShareInstance.h
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


#ifndef Linux_SambaShareProtocolForShareInstance_h
#define Linux_SambaShareProtocolForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareProtocolForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaShareProtocolForShareInstance {
  public:
       Linux_SambaShareProtocolForShareInstance();
  	
       Linux_SambaShareProtocolForShareInstance
  	    (const Linux_SambaShareProtocolForShareInstance& original);
  	   
       Linux_SambaShareProtocolForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareProtocolForShareInstance();
       
       Linux_SambaShareProtocolForShareInstance& operator=
  	    (const Linux_SambaShareProtocolForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareProtocolForShareInstanceName& val);        
       const Linux_SambaShareProtocolForShareInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaShareProtocolForShareInstance& original);
       void reset();
       
       Linux_SambaShareProtocolForShareInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareProtocolForShareInstanceEnumerationElement{
  	Linux_SambaShareProtocolForShareInstance* m_elementP;
  	Linux_SambaShareProtocolForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareProtocolForShareInstanceEnumerationElement();
  	~Linux_SambaShareProtocolForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareProtocolForShareInstanceEnumeration {
  	private:
  	  Linux_SambaShareProtocolForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareProtocolForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareProtocolForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareProtocolForShareInstanceEnumeration();
  	  
  	  Linux_SambaShareProtocolForShareInstanceEnumeration(
  	   const Linux_SambaShareProtocolForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareProtocolForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareProtocolForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareProtocolForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareProtocolForShareInstance& elementP);
  };
}
#endif

