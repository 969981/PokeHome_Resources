/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b81e8; name: FUN_.text__003b81e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b81e8(undefined4 param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float fStack_4c;
  ulong uStack_48;
  
  lVar1 = _DAT_008a04a8;
  fVar3 = *(float *)(param_2 + 0x90);
  fVar5 = *(float *)(param_2 + 0xa0);
  fVar2 = (float)(**(code **)(_DAT_008a04a8 + (ulong)*(uint *)(param_2 + 0xb0) * 8))();
  fVar4 = *(float *)(param_2 + 0x94);
  fVar6 = *(float *)(param_2 + 0xa4);
  _local_50 = CONCAT44(fStack_4c,fVar3 + fVar2 * (fVar5 - fVar3));
  fVar2 = (float)(**(code **)(lVar1 + (ulong)*(uint *)(param_2 + 0xb0) * 8))(param_1);
  fVar3 = *(float *)(param_2 + 0x98);
  fVar5 = *(float *)(param_2 + 0xa8);
  _local_50 = CONCAT44(fVar4 + fVar2 * (fVar6 - fVar4),local_50);
  fVar2 = (float)(**(code **)(lVar1 + (ulong)*(uint *)(param_2 + 0xb0) * 8))(param_1);
  uStack_48 = (ulong)(uint)(fVar3 + fVar2 * (fVar5 - fVar3));
  (**(code **)(**(long **)(param_2 + 0x80) + 0x38))(*(long **)(param_2 + 0x80),&local_50);
  return;
}


