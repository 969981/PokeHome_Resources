/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4b00; name: FUN_.text__006b4b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b4b00(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  local_30 = 0;
  (**(code **)(*param_1 + 0x68))(param_1,&local_30);
  uVar4 = uRam0000000000724ae8;
  uVar3 = _DAT_00724ae0;
  uVar2 = uRam0000000000724938;
  uVar1 = _DAT_00724930;
  fVar6 = 1.0 / ((local_30._4_4_ - local_28._4_4_) - local_30._4_4_);
  fVar5 = 1.0 / (((float)local_30 + (float)local_28) - (float)local_30);
  param_2[1] = (ulong)(uint)-(((float)local_30 + (float)local_30 + (float)local_28) * fVar5) << 0x20
  ;
  *param_2 = (ulong)(uint)(fVar5 + fVar5);
  param_2[3] = (ulong)(uint)-((local_30._4_4_ + (local_30._4_4_ - local_28._4_4_)) * fVar6) << 0x20;
  param_2[2] = (ulong)(uint)(fVar6 + fVar6) << 0x20;
  param_2[5] = uVar4;
  param_2[4] = uVar3;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  return;
}


