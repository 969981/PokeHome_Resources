/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bbac8; name: FUN_.text__006bbac8
 */


long * FUN__text__006bbac8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long local_18;
  
  local_18 = 0;
  lVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_18,0x666f6e74,param_3);
  plVar3 = (long *)0x0;
  if ((lVar1 != 0 && local_18 != 0) &&
     (plVar3 = (long *)FUN__text__006a0f04(0x108), plVar3 != (long *)0x0)) {
    FUN__text__0068be7c(plVar3);
    uVar2 = FUN__text__0068bf14(plVar3,param_2,lVar1,0,0,0);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      FUN__text__006a0f24(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


