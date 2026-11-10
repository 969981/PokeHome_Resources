/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067d650; name: FUN_.text__0067d650
 */


undefined8 FUN__text__0067d650(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(lVar3 + 8);
  if (*(int *)(param_2 + 8) == 0) {
    if (lVar2 != 0) goto LAB__text__0067d6b4;
  }
  else if (lVar2 == 0) {
    lVar2 = FUN__text__00680914(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    if ((*(byte *)(lVar2 + 0xe4) >> 1 & 1) != 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0xdc) == 3) {
      return 0;
    }
    if (*(int *)(lVar2 + 0xdc) == 5) {
      return 0;
    }
LAB__text__0067d6b4:
    if (*(long *)(lVar3 + 0x18) != 0) {
      if (*(code **)(param_1 + 0x7e8) == (code *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
      goto joined_r0x0067d6d4;
    }
  }
  if (*(code **)(param_1 + 0x7f0) == (code *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(param_1 + 0x7f0))
                    (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8b8));
joined_r0x0067d6d4:
  if (iVar1 == 0) {
    return 0;
  }
  return 0xfffffc7a;
}


