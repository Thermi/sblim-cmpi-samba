/**
 *  Linux_SambaSharePrinterBrowseForPrinterInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseForPrinterInstance_h
#define Linux_SambaSharePrinterBrowseForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterInstance {
  public:
       Linux_SambaSharePrinterBrowseForPrinterInstance();
  	
       Linux_SambaSharePrinterBrowseForPrinterInstance
  	    (const Linux_SambaSharePrinterBrowseForPrinterInstance& original);
  	   
       Linux_SambaSharePrinterBrowseForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseForPrinterInstance();
       
       Linux_SambaSharePrinterBrowseForPrinterInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseForPrinterInstanceName& val);        
       const Linux_SambaSharePrinterBrowseForPrinterInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseForPrinterInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseForPrinterInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseForPrinterInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseForPrinterInstance& elementP);
  };
}
#endif

