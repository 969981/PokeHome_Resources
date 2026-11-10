/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00182d74; name: FUN_.text__00182d74
 */


undefined8 FUN__text__00182d74(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x80) == 2) {
    if (*(int *)(param_1 + 0xa0) < 1) {
      FUN__text__001324ec(*(undefined8 *)(param_1 + 0x78));
      iVar1 = *(int *)(param_1 + 0x80);
      goto joined_r0x00182dbc;
    }
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
  }
  uVar2 = FUN__text__001324ec(*(undefined8 *)(param_1 + 0x78));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x80);
joined_r0x00182dbc:
  if (iVar1 == 2) {
    uVar3 = 3;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN__text__00132530(*(undefined8 *)(param_1 + 0x78));
    if (iVar1 == 0) {
      FUN__text__00182aa0(param_1,2);
      *(undefined4 *)(param_1 + 0xa0) = 0xb4;
      FUN__text__0030d610();
      return 0;
    }
    uVar3 = 4;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    uVar3 = 1;
  }
  FUN__text__00182aa0(param_1,uVar3);
  return 0;
}


