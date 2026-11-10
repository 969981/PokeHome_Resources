/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677b70; name: FUN_.text__00677b70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00677b70(undefined8 *param_1,int param_2,char *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(char *)((long)param_1 + (long)param_2 + 0x3f8) == '\0') ||
     (uVar2 = FUN__text__00677a70(param_1,param_2), (int)uVar2 == 0)) {
    uVar3 = FUN__text__00677b18(*param_1);
    plVar1 = _DAT_008a6598;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0x23;
    }
    else {
      *(byte *)(param_1 + (long)param_2 * 3 + 0x54) =
           *(byte *)(param_1 + (long)param_2 * 3 + 0x54) | 1;
      uVar2 = (**(code **)(*plVar1 + 0x68))(param_1,param_2,param_3);
      if ((int)uVar2 == 0) {
        if (*param_3 != '\0') {
          FUN__text__006663e0(*param_1,5);
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


