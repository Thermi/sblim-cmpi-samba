/**
 *  Linux_SambaSharePrinterBrowseForShareInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseForShareInstance_h
#define Linux_SambaSharePrinterBrowseForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareInstance {
  public:
       Linux_SambaSharePrinterBrowseForShareInstance();
  	
       Linux_SambaSharePrinterBrowseForShareInstance
  	    (const Linux_SambaSharePrinterBrowseForShareInstance& original);
  	   
       Linux_SambaSharePrinterBrowseForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseForShareInstance();
       
       Linux_SambaSharePrinterBrowseForShareInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseForShareInstanceName& val);        
       const Linux_SambaSharePrinterBrowseForShareInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseForShareInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseForShareInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseForShareInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseForShareInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseForShareInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseForShareInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseForShareInstance& elementP);
  };
}
#endif

