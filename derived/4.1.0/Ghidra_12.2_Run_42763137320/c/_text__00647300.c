/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00647300; name: FUN_.text__00647300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00647300(long param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  
  if (*(long *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN__text__0063a140(*(undefined4 **)(param_1 + 0x10) + 2,0x140,
                          **(undefined4 **)(param_1 + 0x10));
      if (*(long *)(param_1 + 8) != 0) {
        FUN__text__0063a140(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(param_1 + 0x10) + 6);
      sVar3 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140);
      if (sVar2 != sVar3) {
        *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
      }
    }
    puVar1 = *(undefined1 **)(param_1 + 8);
    if ((*(ushort *)(*(long *)(param_1 + 0x10) + 4) & 4) != 0) {
      puVar1 = _DAT_008a64b8;
    }
    *puVar1 = param_2;
    if (*(char *)(param_1 + 0x18) == '\0' && *(char *)(param_1 + 0x19) == '\0') {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar4 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140);
        *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar4;
        FUN__text__0063a0c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,
                            **(undefined4 **)(param_1 + 0x10));
      }
      if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0))
      {
        FUN__text__0063a0c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  return;
}


