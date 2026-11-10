/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a50dc; name: FUN_.text__001a50dc
 */


void FUN__text__001a50dc(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 == 0) {
    param_2 = param_2 & 1;
    FUN__text__003c7c60(0,param_1 + 0x58,param_2);
    FUN__text__003c7c60(0,param_1 + 0x60,param_2);
    FUN__text__003c7c60(0,param_1 + 0x68,param_2);
    FUN__text__003c7c60(0,param_1 + 0x70,param_2);
    FUN__text__003c7c60(0,param_1 + 0x78,param_2);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  param_2 = param_2 & 1;
  FUN__text__003c7c60(lVar1,param_1 + 0x58,param_2);
  FUN__text__003c7c60(lVar1,param_1 + 0x60,param_2);
  FUN__text__003c7c60(lVar1,param_1 + 0x68,param_2);
  FUN__text__003c7c60(lVar1,param_1 + 0x70,param_2);
  FUN__text__003c7c60(lVar1,param_1 + 0x78,param_2);
                    /* WARNING: Could not recover jumptable at 0x001a5180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


