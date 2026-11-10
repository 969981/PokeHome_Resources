/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006477f0; name: FUN_.text__006477f0
 */


void FUN__text__006477f0(long param_1,undefined1 param_2)

{
  long lVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  uint *puVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN__text__0063a140(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10)
                       );
    if (*(long *)(param_1 + 8) != 0) {
      FUN__text__0063a140(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar2 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar4 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar2 != sVar4) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
      puVar6 = *(uint **)(param_1 + 0x10);
      uVar3 = (ushort)puVar6[1];
      goto joined_r0x006478c8;
    }
  }
  puVar6 = *(uint **)(param_1 + 0x10);
  uVar3 = (ushort)puVar6[1];
joined_r0x006478c8:
  if ((uVar3 >> 2 & 1) == 0) {
    lVar1 = ((ulong)(*puVar6 >> 0xd) & 0x1f) * 4;
    uVar7 = (ulong)*(byte *)(lVar1 + 0x75fb12);
    if ((char)puVar6[uVar7 * 0x14 + 9] == '\0') {
      *(undefined1 *)((long)puVar6 + (ulong)*(byte *)(lVar1 + 0x75fb13) * 0x50 + 0x22) = param_2;
      if (*(char *)(param_1 + 0x18) != '\0' || *(char *)(param_1 + 0x19) != '\0') {
        return;
      }
    }
    else {
      *(undefined1 *)(puVar6 + uVar7 * 0x14 + 10) = param_2;
      if (*(char *)(param_1 + 0x18) != '\0' || *(char *)(param_1 + 0x19) != '\0') {
        return;
      }
    }
  }
  else if (DAT_00c470fc == '\0') {
    DAT_00c4729a = param_2;
    if (*(char *)(param_1 + 0x18) != '\0' || *(char *)(param_1 + 0x19) != '\0') {
      return;
    }
  }
  else {
    DAT_00c47250 = param_2;
    if (*(char *)(param_1 + 0x18) != '\0' || *(char *)(param_1 + 0x19) != '\0') {
      return;
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140);
    *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar5;
    FUN__text__0063a0c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10)
                       );
  }
  if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
    FUN__text__0063a0c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


