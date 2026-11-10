/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e717c; name: FUN_.text__004e717c
 */


undefined8
FUN__text__004e717c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,long *param_11)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  plVar1 = (long *)FUN__text__00400f80(0,0x1a0);
  if (plVar1 != (long *)0x0) {
    FUN__text__004e5550(plVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10);
    *param_11 = (long)plVar1;
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((int)uVar2 == 1) {
      return uVar2;
    }
    FUN__text__00447104(*param_11);
  }
  *param_11 = 0;
  return 2;
}


