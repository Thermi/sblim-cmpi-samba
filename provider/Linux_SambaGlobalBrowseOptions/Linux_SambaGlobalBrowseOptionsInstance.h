/**
 *  Linux_SambaGlobalBrowseOptionsInstance.h
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


#ifndef Linux_SambaGlobalBrowseOptionsInstance_h
#define Linux_SambaGlobalBrowseOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseOptionsInstance {
  public:
       Linux_SambaGlobalBrowseOptionsInstance();
  	
       Linux_SambaGlobalBrowseOptionsInstance
  	    (const Linux_SambaGlobalBrowseOptionsInstance& original);
  	   
       Linux_SambaGlobalBrowseOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalBrowseOptionsInstance();
       
       Linux_SambaGlobalBrowseOptionsInstance& operator=
  	    (const Linux_SambaGlobalBrowseOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalBrowseOptionsInstanceName& val);        
       const Linux_SambaGlobalBrowseOptionsInstanceName&
        getInstanceName() const;

       unsigned int isBrowsableSet() const;
       void setBrowsable(const CMPIBoolean val);
       const CMPIBoolean getBrowsable() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isDomainMasterSet() const;
       void setDomainMaster(const CMPIUint16 val);
       const CMPIUint16 getDomainMaster() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalBrowseOptionsInstance& original);
       void reset();
       
       Linux_SambaGlobalBrowseOptionsInstanceName m_instanceName;
       CMPIBoolean m_Browsable;
       const char* m_Caption;
       const char* m_Description;
       CMPIUint16 m_DomainMaster;
       const char* m_ElementName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Browsable:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int DomainMaster:1;
         unsigned int ElementName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement{
  	Linux_SambaGlobalBrowseOptionsInstance* m_elementP;
  	Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement();
  	~Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalBrowseOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalBrowseOptionsInstanceEnumeration();
  	  
  	  Linux_SambaGlobalBrowseOptionsInstanceEnumeration(
  	   const Linux_SambaGlobalBrowseOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalBrowseOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalBrowseOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalBrowseOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalBrowseOptionsInstance& elementP);
  };
}
#endif

