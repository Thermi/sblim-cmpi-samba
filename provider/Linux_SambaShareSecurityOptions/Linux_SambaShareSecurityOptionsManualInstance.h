/**
 *  Linux_SambaShareSecurityOptionsManualInstance.h
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


#ifndef Linux_SambaShareSecurityOptionsManualInstance_h
#define Linux_SambaShareSecurityOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityOptionsManualInstance {
  public:
       Linux_SambaShareSecurityOptionsManualInstance();
  	
       Linux_SambaShareSecurityOptionsManualInstance
  	    (const Linux_SambaShareSecurityOptionsManualInstance& original);
  	   
       Linux_SambaShareSecurityOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityOptionsManualInstance();
       
       Linux_SambaShareSecurityOptionsManualInstance& operator=
  	    (const Linux_SambaShareSecurityOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityOptionsInstanceName& val);        
       const Linux_SambaShareSecurityOptionsInstanceName&
        getInstanceName() const;

       unsigned int isCreateMaskSet() const;
       void setCreateMask(const CMPIUint16 val);
       const CMPIUint16 getCreateMask() const;

       unsigned int isDirectoryMaskSet() const;
       void setDirectoryMask(const CMPIUint16 val);
       const CMPIUint16 getDirectoryMask() const;

       unsigned int isDirectorySecurityMaskSet() const;
       void setDirectorySecurityMask(const CMPIUint16 val);
       const CMPIUint16 getDirectorySecurityMask() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityOptionsManualInstance& original);
       void reset();
       
       Linux_SambaShareSecurityOptionsInstanceName m_instanceName;
       CMPIUint16 m_CreateMask;
       CMPIUint16 m_DirectoryMask;
       CMPIUint16 m_DirectorySecurityMask;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int CreateMask:1;
         unsigned int DirectoryMask:1;
         unsigned int DirectorySecurityMask:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement{
  	Linux_SambaShareSecurityOptionsManualInstance* m_elementP;
  	Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement();
  	~Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityOptionsManualInstanceEnumeration(
  	   const Linux_SambaShareSecurityOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityOptionsManualInstance& elementP);
  };
}
#endif

