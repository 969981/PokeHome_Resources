/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d4e98; name: FUN_.text__005d4e98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d4e98(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  lVar1 = param_3[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0xcbf29ce484222645;
  param_1[5] = 0x70f683;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = _DAT_0089f4c0 + 0x10;
  param_1[9] = 0;
  param_1[0x2a] = 0x86a4f0;
  lVar1 = *(long *)(param_2 + 8);
  param_1[0x2b] = lVar1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0xffffffff00000006;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  lVar1 = FUN__text__005d5f00(param_1[0x2b],param_3[1]);
  thunk_FUN__text__005d6bd0(&local_18,*(undefined8 *)(lVar1 + 0x88));
  if (param_1[0x2c] != 0) {
    (**(code **)(*(long *)(param_1[0x2c] + 0x48) + 0x18))();
  }
  param_1[0x2c] = local_18;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  lVar1 = param_1[0x2d];
  param_1[0x2d] = local_18;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = param_1[0x2c];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = param_1[0x2e];
  param_1[0x2e] = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  FUN__text__006ebc88(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x3e) = 1;
  lVar1 = FUN__text__005d5f00(param_1[0x2b],param_1[1]);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar1 + 0x24);
  *(undefined4 *)((long)param_1 + 0x1a4) = *(undefined4 *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(lVar1 + 0x2c);
  *(undefined4 *)((long)param_1 + 0x1ac) = *(undefined4 *)(lVar1 + 0x30);
  *(uint *)(param_1 + 0x36) = (uint)*(ushort *)(lVar1 + 0x16);
  *(undefined4 *)((long)param_1 + 0x1b4) = *(undefined4 *)(lVar1 + 0x1c);
  param_1[0x37] = param_1[0x34];
  param_1[0x38] = param_1[0x35];
  param_1[0x39] = param_1[0x36];
  param_1[0x3a] = param_1[0x34];
  param_1[0x3b] = param_1[0x35];
  param_1[0x3c] = param_1[0x36];
  return;
}


