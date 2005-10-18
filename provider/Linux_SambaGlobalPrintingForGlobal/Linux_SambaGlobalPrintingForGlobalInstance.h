/**
 *  Linux_SambaGlobalPrintingForGlobalInstance.h
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


#ifndef Linux_SambaGlobalPrintingForGlobalInstance_h
#define Linux_SambaGlobalPrintingForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalInstance {
  public:
       Linux_SambaGlobalPrintingForGlobalInstance();
  	
       Linux_SambaGlobalPrintingForGlobalInstance
  	    (const Linux_SambaGlobalPrintingForGlobalInstance& original);
  	   
       Linux_SambaGlobalPrintingForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalPrintingForGlobalInstance();
       
       Linux_SambaGlobalPrintingForGlobalInstance& operator=
  	    (const Linux_SambaGlobalPrintingForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalPrintingForGlobalInstanceName& val);        
       const Linux_SambaGlobalPrintingForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalPrintingForGlobalInstance& original);
       void reset();
       
       Linux_SambaGlobalPrintingForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement{
  	Linux_SambaGlobalPrintingForGlobalInstance* m_elementP;
  	Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement();
  	~Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalPrintingForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalPrintingForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaGlobalPrintingForGlobalInstanceEnumeration(
  	   const Linux_SambaGlobalPrintingForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalPrintingForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalPrintingForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalPrintingForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalPrintingForGlobalInstance& elementP);
  };
}
#endif

