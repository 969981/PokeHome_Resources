/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022c5c0; name: FUN_.text__0022c5c0
 */


void FUN__text__0022c5c0(undefined8 param_1,undefined4 *param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  param_2[0x4685] = param_4;
  uVar2 = 0;
  uVar1 = *(ushort *)(param_3 + 0xea) - 0x18;
  if (uVar1 < 0x22) {
    if ((0x31ffc03cfU >> ((ulong)uVar1 & 0x3f) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)((long)(short)uVar1 * 8 + 0x872468) + 4);
    }
  }
  param_2[6] = uVar2;
  param_2[7] = (int)*(ulong *)(param_3 + 200) +
               (int)(*(ulong *)(param_3 + 200) / 1000000) * -1000000;
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_3 + 0xc0);
  FUN__text__005f3460(param_2 + 10,param_3 + 0xd0,0xd);
  param_2[9] = (uint)*(byte *)(param_3 + 0xec);
  param_2[6] = 0xf;
  param_2[0x4686] = (uint)*(ushort *)(param_3 + 0x10);
  *(undefined2 *)(param_2 + 0x4687) = *(undefined2 *)(param_3 + 0x12);
  param_2[0x4688] = (uint)*(byte *)(param_3 + 0x18);
  *(bool *)(param_2 + 0x4689) = *(char *)(param_3 + 0x34) != '\0';
  param_2[0x468c] = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)(param_2 + 0x468d) = *(undefined1 *)(param_3 + 0x19);
  param_2[0x4696] = (uint)*(byte *)(param_3 + 0x14);
  param_2[0x468e] = (uint)*(ushort *)(param_3 + 0x16);
  FUN__text__005f3460(param_2 + 0x468f,param_3 + 0x1a,0xd);
  *(undefined8 *)(param_2 + 0x4697) = 0;
  param_2[0x4699] = 0;
  param_2[0x469a] = (uint)*(ushort *)(param_3 + 0x90);
  *(undefined2 *)(param_2 + 0x469b) = *(undefined2 *)(param_3 + 0x92);
  param_2[0x469c] = (uint)*(byte *)(param_3 + 0x98);
  *(bool *)(param_2 + 0x469d) = *(char *)(param_3 + 0xb4) != '\0';
  param_2[0x46a0] = *(undefined4 *)(param_3 + 0xb8);
  *(undefined1 *)(param_2 + 0x46a1) = *(undefined1 *)(param_3 + 0x99);
  param_2[0x46aa] = (uint)*(byte *)(param_3 + 0x94);
  param_2[0x46a2] = (uint)*(ushort *)(param_3 + 0x96);
  FUN__text__005f3460(param_2 + 0x46a3,param_3 + 0x9a,0xd);
  *(undefined8 *)(param_2 + 0x46ab) = 0;
  param_2[0x46ad] = 0;
  return;
}


