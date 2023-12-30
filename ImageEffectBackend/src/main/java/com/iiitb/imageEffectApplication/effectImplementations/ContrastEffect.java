package com.iiitb.imageEffectApplication.effectImplementations;

import com.iiitb.imageEffectApplication.exception.IllegalParameterException;
import com.iiitb.imageEffectApplication.libraryInterfaces.ContrastInterface;
import com.iiitb.imageEffectApplication.libraryInterfaces.Pixel;
import com.iiitb.imageEffectApplication.service.LoggingService;

public class ContrastEffect {
    private float amount;
    public void setParameterValue(float parameterValue) throws IllegalParameterException{
       // if(amount<0 || amount>2) throw new IllegalParameterException("Invalid params, amount expected in [0,1].");
        this.amount=parameterValue;
    }
    public Pixel[][] apply(Pixel[][] image, String fileName, LoggingService loggingService){
        loggingService.addLog(fileName, "Contast", Float.toString(amount));
        return ContrastInterface.applyContrast(image, amount);
    }
    
    
}
