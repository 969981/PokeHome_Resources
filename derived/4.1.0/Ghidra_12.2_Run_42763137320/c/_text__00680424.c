/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680424; name: FUN_.text__00680424
 */


undefined8 FUN__text__00680424(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN__text__00685e10(param_1,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN__text__0067ad9c(*param_2,*(undefined4 *)(param_1 + 0xb8),3);
    return uVar2;
  }
  if (((*(byte *)(*param_2 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0xe7) == '\0')) {
    uVar2 = FUN__text__00679b44(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xc0));
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN__text__0067f9fc(*param_2,0,*(undefined4 *)(param_1 + 0xb8),
                                    *(undefined4 *)(param_1 + 0xc0)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


