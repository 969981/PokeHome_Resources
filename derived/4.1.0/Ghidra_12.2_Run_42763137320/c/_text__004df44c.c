/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004df44c; name: FUN_.text__004df44c
 */


ulong * FUN__text__004df44c(long *param_1,ulong param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar5) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN__text__004e01a0(param_1,iVar1);
    if ((uVar3 & 1) == 0) {
      return (ulong *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
      return (ulong *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar5 + 1;
  if (*param_1 == 0) {
    return (ulong *)0x0;
  }
  puVar4 = (ulong *)(*param_1 + (ulong)uVar5 * 0xc0);
  puVar4[8] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0x3f80000000000000;
  puVar4[2] = 0x3f800000;
  puVar4[3] = 0x3f800000;
  *(undefined4 *)(puVar4 + 9) = 0x3f800000;
  *(undefined2 *)((long)puVar4 + 0x4c) = 0;
  *(undefined1 *)(puVar4 + 0x11) = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)(puVar4 + 0x15) = 0;
  puVar4[0x17] = 0;
  *(int *)(puVar4 + 0x16) = param_4;
  puVar4[6] = 0xffff3f800000;
  puVar4[7] = 0x3f800000;
  *(undefined1 *)((long)puVar4 + 0x4e) = 1;
  puVar4[10] = 0x3f8000003f800000;
  puVar4[0xb] = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0x32;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0x2b00000000;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  *puVar4 = param_2 | (ulong)param_3 << 0x38;
  puVar4[1] = 0;
  if (param_4 == 3) {
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  }
  return puVar4;
}


