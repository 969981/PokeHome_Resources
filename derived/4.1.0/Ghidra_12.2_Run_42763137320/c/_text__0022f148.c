/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022f148; name: FUN_.text__0022f148
 */


void FUN__text__0022f148(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                        undefined8 param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  long *plVar2;
  long local_28;
  
  local_28 = *param_3;
  if (local_28 == 0) {
    FUN__text__0022ef30(param_1,param_2,&local_28,param_4,param_5,*param_6,param_6[1],param_6[2],
                        param_6[3],param_6[4]);
    return;
  }
  plVar2 = (long *)(local_28 + 0x48);
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__0022ef30(uVar1,param_2,&local_28,param_4,param_5,*param_6,param_6[1],param_6[2],
                      param_6[3],param_6[4]);
                    /* WARNING: Could not recover jumptable at 0x0022f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


