/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067f7a8; name: FUN_.text__0067f7a8
 */


undefined8 FUN__text__0067f7a8(long param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0xc0);
  if ((int)(*(int *)(param_2 + 0xcc) - param_3) < iVar1 || (int)(param_3 ^ 0x7fffffff) < iVar1) {
    uVar2 = FUN__text__0067ad9c(param_1,*(undefined4 *)(param_2 + 0xb8),3);
    return uVar2;
  }
  *(uint *)(param_2 + 0xc0) = iVar1 + param_3;
  if (((param_4 == 0) || ((*(byte *)(param_1 + 0x99c) & 1) != 0)) ||
     (*(char *)(param_2 + 0xe7) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN__text__00679b44();
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN__text__0067f9fc(param_1,0,*(undefined4 *)(param_2 + 0xb8),
                                    *(undefined4 *)(param_2 + 0xc0)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_2 + 0xc0) = 0;
    }
  }
  return uVar2;
}


