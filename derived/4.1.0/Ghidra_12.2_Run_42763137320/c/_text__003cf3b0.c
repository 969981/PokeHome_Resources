/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf3b0; name: FUN_.text__003cf3b0
 */


bool FUN__text__003cf3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  if (*(char *)(param_1 + 0x20060) != '\0') {
    *(undefined1 *)(param_1 + 0x20060) = 0;
    do {
      uVar2 = FUN__text__003d444c(*(undefined8 *)(param_1 + 0x20048));
    } while ((uVar2 & 1) == 0);
  }
  nn::account::LoadProfileImage
            ((ulong *)(param_1 + 0x20020),(void *)(param_1 + 0x1c),0x20000,(Uid *)&local_30);
  iVar1 = FUN__text__003d43e8(*(undefined8 *)(param_1 + 0x20048),(void *)(param_1 + 0x1c),
                              *(ulong *)(param_1 + 0x20020));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x20060) = 1;
    return true;
  }
  return iVar1 == 0;
}


