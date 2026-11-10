/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5dc0; name: FUN_.text__005d5dc0
 */


undefined8 FUN__text__005d5dc0(long param_1,char *param_2)

{
  bool bVar1;
  size_t __n;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x198) + 0x78);
  lVar8 = *(long *)(lVar7 + 0x38);
  if (param_2 == (char *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = strlen(param_2);
  }
  uVar5 = (ulong)*(ushort *)(lVar8 + 0xc);
  puVar9 = (uint *)((int *)(lVar8 + 8) + uVar5 * 4);
  uVar4 = *puVar9;
  if (*(int *)(lVar8 + 8) < (int)*puVar9) {
    do {
      uVar6 = (long)((ulong)uVar4 << 0x20) >> 0x23;
      if (uVar6 < sVar3) {
        uVar6 = (ulong)((byte)param_2[sVar3 + ~uVar6] >> ((ulong)uVar4 & 7)) & 1;
      }
      else {
        uVar6 = 0;
      }
      uVar5 = (ulong)*(ushort *)(lVar8 + 8 + uVar5 * 0x10 + uVar6 * 2 + 4);
      puVar9 = (uint *)(lVar8 + 8 + uVar5 * 0x10);
      bVar1 = (int)uVar4 < (int)*puVar9;
      uVar4 = *puVar9;
    } while (bVar1);
  }
  uVar5 = (ulong)**(ushort **)(puVar9 + 2);
  __n = sVar3;
  if (uVar5 <= sVar3) {
    __n = uVar5;
  }
  iVar2 = memcmp(*(ushort **)(puVar9 + 2) + 1,param_2,__n);
  uVar4 = (uint)((ulong)((long)puVar9 + (-0x18 - lVar8)) >> 4);
  if (sVar3 != uVar5 || iVar2 != 0) {
    uVar4 = 0xffffffff;
  }
  if ((int)uVar4 < 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(lVar7 + 0x28) + (ulong)uVar4 * 8);
}


