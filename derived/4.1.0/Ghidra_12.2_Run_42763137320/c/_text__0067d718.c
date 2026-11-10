/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067d718; name: FUN_.text__0067d718
 */


undefined8 FUN__text__0067d718(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN__text__00680914(param_1,*(undefined4 *)(param_2 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  if (((*(byte *)(lVar2 + 0xe4) >> 1 & 1) == 0) &&
     (*(int *)(lVar2 + 0xdc) != 3 && *(int *)(lVar2 + 0xdc) != 5)) {
    if (((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) &&
       (((*(byte *)(param_2 + 0xd) & 1) != 0 && (iVar1 = FUN__text__00685518(lVar2), iVar1 != 0))))
    {
      uVar3 = FUN__text__0067ad9c(param_1,*(undefined4 *)(lVar2 + 0xb8),1);
      if ((int)uVar3 < -900) {
        return uVar3;
      }
    }
    else if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
            (iVar1 = (**(code **)(param_1 + 0x7e8))
                               (param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)), iVar1 != 0)) {
      return 0xfffffc7a;
    }
    if ((((*(byte *)(param_2 + 0xd) & 1) != 0) &&
        (FUN__text__00685b30(lVar2,1), ((*(byte *)(lVar2 + 0xe5) ^ 0xff) & 3) == 0)) &&
       (uVar3 = FUN__text__0067aeb8(param_1,*(undefined4 *)(lVar2 + 0xb8),0), (int)uVar3 < -900)) {
      return uVar3;
    }
  }
  return 0;
}


