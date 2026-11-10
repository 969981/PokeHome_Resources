/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00213f98; name: FUN_.text__00213f98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00213f98(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ushort local_48;
  void *local_38;
  
  if (*(int *)(param_1 + 2) == 0 || *(char *)((long)param_1 + 0x14) == '\0') {
    uVar2 = 4;
  }
  else {
    lStack_a8 = FUN__text__00215448();
    if (lStack_a8 == 0) {
      return 4;
    }
    local_48 = 0;
    local_50 = *(undefined8 *)(lStack_a8 + 0x20);
    local_60 = *param_1;
    uStack_58 = param_1[1];
    local_e0 = FUN__text__00214448;
    local_d8 = FUN__text__002148d8;
    local_d0 = &LAB__text__00214a88;
    puStack_c8 = &LAB__text__00214a9c;
    local_c0 = param_1;
    local_b8 = param_2;
    local_b0 = param_3;
    uVar2 = FUN__text__00309c90(*_DAT_0089f528,&local_60,&local_e0,1);
    pcVar1 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      puStack_c8 = (undefined1 *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar1)(&local_c0);
    }
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
      return uVar2;
    }
  }
  return uVar2;
}


