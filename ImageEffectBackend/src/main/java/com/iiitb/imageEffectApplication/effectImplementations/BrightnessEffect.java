package com.iiitb.imageEffectApplication.effectImplementations;



import com.iiitb.imageEffectApplication.baseEffects.SingleValueParameterizableEffect;
import com.iiitb.imageEffectApplication.exception.IllegalParameterException;
import com.iiitb.imageEffectApplication.libraryInterfaces.Pixel;
import com.iiitb.imageEffectApplication.libraryInterfaces.BrightnessInterface;
import com.iiitb.imageEffectApplication.service.LoggingService;



public class BrightnessEffect implements SingleValueParameterizableEffect{
    private float amount;
    public void setParameterValue(float parameterValue) throws IllegalParameterException{
        if(parameterValue>8000) throw new IllegalParameterException("INVALID PARAMETER FOUND");
        this.amount=parameterValue;
    }
    public Pixel[][] apply(Pixel[][] image, String fileName, LoggingService loggingService){
       
        loggingService.addLog(fileName, "Brightness", Float.toString(amount)); // handling logging for this 

        return BrightnessInterface.applyBrightness(image, amount);

    }
    
}
