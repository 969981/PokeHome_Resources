/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00427f94; name: FUN_.text__00427f94
 */


void FUN__text__00427f94(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined2 local_8 [2];
  undefined4 local_4;
  
  *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) & 0xdf;
  if (param_2 == 2) {
    *(byte *)(param_1 + 0x20) =
         (byte)(*(uint *)(*(long *)(param_1 + 0x18) + 0x313) >> 0x14) & 2 |
         *(byte *)(param_1 + 0x20) & 0xfd;
LAB__text__00427fdc:
    (**(code **)(**(long **)(param_1 + 0x40) + 0x68))();
    return;
  }
  local_4 = 0;
  local_8[0] = 0;
  if (param_2 == 0) {
    local_4 = 0;
    if (*(long *)(param_1 + 0x18) == 0) {
      local_8[0] = 1;
    }
    else {
      local_8[0] = *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x310);
    }
  }
  else if (param_2 == 1) {
    if ((param_3 & 1) == 0) {
      local_4 = *(undefined4 *)(param_1 + 0x28);
      local_8[0] = *(undefined2 *)(param_1 + 0x38);
    }
    else {
      FUN__text__0042769c(param_1,&local_4,local_8);
    }
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))();
  if (iVar1 == 1) {
    *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) & 0xef;
    iVar1 = FUN__text__004277c8(param_1,local_4,local_8[0]);
    if ((iVar1 == 1) || (iVar1 = FUN__text__004277c8(param_1,0,local_8[0]), iVar1 == 1))
    goto LAB__text__00427fdc;
  }
  return;
}


