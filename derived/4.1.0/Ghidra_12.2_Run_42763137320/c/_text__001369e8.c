/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001369e8; name: FUN_.text__001369e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001369e8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 auStack_d0 [24];
  long local_b8;
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90 [12];
  
  iVar2 = *(int *)(param_1 + 0x6e0);
  pcVar4 = *(char **)(*(long *)(param_1 + 0x6d0) + (long)iVar2 * 0x18 + 8);
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    pcVar4 = (char *)0x0;
    *(uint *)(param_1 + 0x6e0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x6d8) <= iVar2 + 1U) goto LAB__text__00136a74;
  }
  else {
    *(uint *)(param_1 + 0x6e0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x6d8) <= iVar2 + 1U) {
LAB__text__00136a74:
      FUN__text__0012bca0(param_1 + 0x110,0);
      puVar1 = (undefined8 *)(_DAT_0089fb60 + 8);
      if (pcVar4 != (char *)0x0) {
        puVar1 = (undefined8 *)(_DAT_0089fb60 + 0x18);
      }
      local_b0 = FUN__text__00137750;
      local_a8 = FUN__text__00137790;
      local_a0 = &LAB__text__00137794;
      puStack_98 = &LAB__text__001377a0;
      local_90[0] = param_1;
      FUN__text__0012c3b0(param_1 + 0x110,*puVar1,&local_b0);
      pcVar3 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = (undefined1 *)0x0;
        puStack_98 = (undefined1 *)0x0;
        local_b0 = (code *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar3)(local_90);
      }
      FUN__text__005e927c(auStack_d0,0x869ab0);
      FUN__text__003c1e4c(auStack_d0);
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      }
      return;
    }
  }
  FUN__text__00136b34(param_1);
  FUN__text__00128ca0(param_1,1,1);
  return;
}


