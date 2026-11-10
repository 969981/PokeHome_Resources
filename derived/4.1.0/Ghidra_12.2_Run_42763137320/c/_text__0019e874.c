/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019e874; name: FUN_.text__0019e874
 */


void FUN__text__0019e874(long param_1)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_60;
  undefined8 local_58;
  uint local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = &local_60;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (**(int **)(lVar3 + 0xb8) == 1) {
    uVar4 = *(ulong *)(lVar3 + 0x28);
    uVar1 = FUN__text__0019bb38(uVar4);
    local_48 = 0;
    uStack_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    local_38 = 0;
    local_4c = local_4c & 0xffffff00;
    local_60 = uVar4;
    (**(code **)(*(long *)(uVar4 + 0x48) + 0x10))((long *)(uVar4 + 0x48));
    FUN__text__0019a164(&local_60,uVar1,&local_4c);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    local_60 = (ulong)(*(int *)(param_1 + 0x1b0) != local_48 &&
                      *(int *)(param_1 + 0x1b4) == local_48);
    local_58 = CONCAT44(uStack_3c,local_40);
  }
  else {
    lVar3 = *(long *)(lVar3 + 8);
    puVar2 = (ulong *)&local_4c;
    uStack_44 = (undefined4)*(undefined8 *)(lVar3 + 0x44);
    local_40 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x44) >> 0x20);
    local_48 = *(int *)((long)*(int *)(lVar3 + 0x40) * 4 + 0x724880);
    local_4c = *(uint *)(&DAT_00723978 + (long)*(int *)(lVar3 + 0x3c) * 4);
  }
  FUN__text__0019e97c(param_1,puVar2,1,1);
  return;
}


