/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cb950; name: FUN_.text__005cb950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cb950(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *local_40;
  undefined1 uStack_31;
  
  FUN__text__005a7c38(param_1,0,0);
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *param_1 = 0x896688;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[9] = 0x896720;
  param_1[10] = 0x896760;
  param_1[0x27] = *param_2;
  param_1[0x28] = param_2[1];
  param_1[0x29] = param_2[2];
  lVar2 = param_2[3];
  param_1[0x2a] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[0x40] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0xbf800000bf800000;
  param_1[0x38] = 0;
  param_1[0x39] = 0xbf800000bf800000;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0xbf800000bf800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((long)param_1 + 0x1a5) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x100000001;
  local_40 = param_1;
  lVar2 = FUN__text__005cbcd0(&uStack_31,param_1[1],&local_40);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(undefined4 *)(lVar2 + 0x268) = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
  }
  param_1[0xe] = lVar2;
  plVar1 = _DAT_0089f5b8;
  *(ulong *)(lVar2 + 0x138) = *(ulong *)(lVar2 + 0x138) | 1;
  lVar2 = *(long *)(*plVar1 + 0x168);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
  }
  lVar3 = *plVar1;
  param_1[0x16] = lVar2;
  lVar2 = *(long *)(*(long *)(lVar3 + 0x168) + 0xa8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
  }
  param_1[0x26] = lVar2;
  FUN__text__006ebde4(param_1 + 0x2b);
  FUN__text__006ebdf4(param_1 + 0x31);
  return;
}


