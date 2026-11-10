/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00637e5c; name: FUN_.text__00637e5c
 */


int FUN__text__00637e5c(uint param_1,ushort param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8,ushort param_9,ushort param_10,ushort param_11,
                       ushort param_12,ushort param_13,ushort param_14,byte param_15)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  long lVar9;
  int iVar10;
  
  uVar6 = param_1 & 0xffff;
  uVar1 = (((uint)param_10 + param_4 * 2 & 0xffff) * uVar6) / 100 + 5;
  uVar2 = (((uint)param_11 + param_5 * 2 & 0xffff) * uVar6) / 100 + 5;
  cVar8 = *(char *)((ulong)param_2 + (ulong)param_2 * 4 + 0x75accc);
  uVar3 = (((uint)param_13 + param_7 * 2 & 0xffff) * uVar6) / 100 + 5;
  uVar4 = (((uint)param_14 + param_8 * 2 & 0xffff) * uVar6) / 100 + 5;
  uVar5 = uVar1;
  if (cVar8 == '\x01') {
    uVar5 = (uVar1 * 0x6e >> 2 & 0x3fff) / 0x19;
  }
  lVar9 = (ulong)param_2 * 5;
  uVar1 = (uVar1 * 0x5a >> 2 & 0x3fff) / 0x19;
  if (cVar8 != -1) {
    uVar1 = uVar5;
  }
  uVar5 = uVar2;
  if (*(char *)(lVar9 + 0x75accd) == '\x01') {
    uVar5 = (uVar2 * 0x6e >> 2 & 0x3fff) / 0x19;
  }
  uVar2 = (uVar2 * 0x5a >> 2 & 0x3fff) / 0x19;
  if (*(char *)(lVar9 + 0x75accd) != -1) {
    uVar2 = uVar5;
  }
  uVar5 = (((uint)param_12 + param_6 * 2 & 0xffff) * uVar6) / 100 + 5;
  iVar10 = (int)((((float)param_15 / 255.0) / 10.0 + 1.0) * 100.0);
  uVar7 = uVar5;
  if (*(char *)(lVar9 + 0x75acce) == '\x01') {
    uVar7 = (uVar5 * 0x6e >> 2 & 0x3fff) / 0x19;
  }
  uVar5 = (uVar5 * 0x5a >> 2 & 0x3fff) / 0x19;
  if (*(char *)(lVar9 + 0x75acce) != -1) {
    uVar5 = uVar7;
  }
  uVar7 = uVar3;
  if (*(char *)(lVar9 + 0x75accf) == '\x01') {
    uVar7 = (uVar3 * 0x6e >> 2 & 0x3fff) / 0x19;
  }
  uVar3 = (uVar3 * 0x5a >> 2 & 0x3fff) / 0x19;
  if (*(char *)(lVar9 + 0x75accf) != -1) {
    uVar3 = uVar7;
  }
  uVar7 = uVar4;
  if (*(char *)(lVar9 + 0x75acd0) == '\x01') {
    uVar7 = (uVar4 * 0x6e >> 2 & 0x3fff) / 0x19;
  }
  uVar4 = (uVar4 * 0x5a >> 2 & 0x3fff) / 0x19;
  if (*(char *)(lVar9 + 0x75acd0) != -1) {
    uVar4 = uVar7;
  }
  return (int)(((float)(param_1 + (((uint)param_9 + param_3 * 2 & 0xffff) * uVar6) / 100 +
                        (uVar1 * iVar10 >> 2 & 0x3fff) / 0x19 +
                        (uVar2 * iVar10 >> 2 & 0x3fff) / 0x19 +
                        (uVar5 * iVar10 >> 2 & 0x3fff) / 0x19 +
                        (uVar3 * iVar10 >> 2 & 0x3fff) / 0x19 +
                        (uVar4 * iVar10 >> 2 & 0x3fff) / 0x19 + 10 & 0xffff) * 6.0 * (float)uVar6) /
              100.0);
}


