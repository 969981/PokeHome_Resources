/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e917c; name: FUN_.text__001e917c
 */


void FUN__text__001e917c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,
                        undefined4 param_5)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    uVar1 = FUN__text__00139b48(param_3,0,param_5);
    *param_2 = uVar1;
    uVar1 = FUN__text__00139b48(param_3,1,param_5);
    param_2[1] = uVar1;
    uVar1 = FUN__text__00139b48(param_3,2,param_5);
    param_2[2] = uVar1;
    uVar1 = FUN__text__00139b48(param_3,3,param_5);
    param_2[3] = uVar1;
    return;
  }
  uVar1 = FUN__text__00139c48();
  *param_2 = uVar1;
  uVar1 = FUN__text__00139c48(param_3,1,param_5);
  param_2[1] = uVar1;
  uVar1 = FUN__text__00139c48(param_3,2,param_5);
  param_2[2] = uVar1;
  uVar1 = FUN__text__00139c48(param_3,3,param_5);
  param_2[3] = uVar1;
  return;
}


