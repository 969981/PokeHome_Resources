/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022c4c0; name: FUN_.text__0022c4c0
 */


void FUN__text__0022c4c0(undefined8 param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = 4;
  uVar1 = *(ushort *)(param_3 + 0x52) - 0x18;
  if ((uVar1 < 0x22) && ((0x31ffc03cfU >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    uVar2 = *(undefined4 *)(*(long *)((long)(short)uVar1 * 8 + 0x872468) + 4);
  }
  else {
    uVar2 = 0;
  }
  param_2[6] = uVar2;
  param_2[7] = (int)*(ulong *)(param_3 + 0x30) +
               (int)(*(ulong *)(param_3 + 0x30) / 1000000) * -1000000;
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_3 + 0x28);
  FUN__text__005f3460(param_2 + 10,param_3 + 0x38,0xd);
  param_2[9] = (uint)*(byte *)(param_3 + 0x54);
  uVar3 = *(undefined8 *)(param_3 + 0x5d);
  uVar4 = *(undefined8 *)(param_3 + 0x65);
  uVar5 = *(undefined8 *)(param_3 + 0x6d);
  *(undefined1 *)((long)param_2 + 0x62) = *(undefined1 *)(param_3 + 0x75);
  *(undefined8 *)((long)param_2 + 0x5a) = uVar5;
  *(undefined8 *)((long)param_2 + 0x52) = uVar4;
  *(undefined8 *)((long)param_2 + 0x4a) = uVar3;
  *(undefined8 *)((long)param_2 + 0x42) = *(undefined8 *)(param_3 + 0x55);
  param_2[0x46b2] = (int)*(undefined8 *)(param_3 + 0x10);
  param_2[0x46b3] = *(undefined4 *)(param_3 + 0x20);
  return;
}


