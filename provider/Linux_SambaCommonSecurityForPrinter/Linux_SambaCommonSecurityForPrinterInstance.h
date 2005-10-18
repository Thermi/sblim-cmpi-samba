/**
 *  Linux_SambaCommonSecurityForPrinterInstance.h
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


#ifndef Linux_SambaCommonSecurityForPrinterInstance_h
#define Linux_SambaCommonSecurityForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterInstance {
  public:
       Linux_SambaCommonSecurityForPrinterInstance();
  	
       Linux_SambaCommonSecurityForPrinterInstance
  	    (const Linux_SambaCommonSecurityForPrinterInstance& original);
  	   
       Linux_SambaCommonSecurityForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForPrinterInstance();
       
       Linux_SambaCommonSecurityForPrinterInstance& operator=
  	    (const Linux_SambaCommonSecurityForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForPrinterInstanceName& val);        
       const Linux_SambaCommonSecurityForPrinterInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForPrinterInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForPrinterInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForPrinterInstance* m_elementP;
  	Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForPrinterInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForPrinterInstance& elementP);
  };
}
#endif

