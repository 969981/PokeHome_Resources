/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006470c4; name: FUN_.text__006470c4
 */


undefined1 FUN__text__006470c4(long param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  uint *puVar4;
  undefined1 uVar5;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN__text__0063a140(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10)
                       );
    if (*(long *)(param_1 + 8) != 0) {
      FUN__text__0063a140(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar1 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar2 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar1 != sVar2) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  if (((ushort)puVar4[1] >> 2 & 1) == 0) {
    uVar5 = (char)puVar4[(ulong)*(byte *)(((ulong)(*puVar4 >> 0xd) & 0x1f) * 4 + 0x75fb13) * 0x14 +
                         0xd];
    if (*(char *)(param_1 + 0x18) == '\0' && *(char *)(param_1 + 0x19) == '\0') {
LAB__text__006471ac:
      uVar3 = FUN__text__0063a010(puVar4 + 2,0x140);
      *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar3;
      FUN__text__0063a0c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,
                          **(undefined4 **)(param_1 + 0x10));
      if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0))
      {
        FUN__text__0063a0c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      return uVar5;
    }
  }
  else {
    uVar5 = DAT_00c4715c;
    if (*(char *)(param_1 + 0x18) == '\0' && *(char *)(param_1 + 0x19) == '\0')
    goto LAB__text__006471ac;
  }
  return uVar5;
}


