/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045bf40; name: FUN_.text__0045bf40
 */


void FUN__text__0045bf40(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x120);
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        FUN__text__0045cc00(lVar1 + 0xe8);
        FUN__text__00451d7c(lVar1 + 0xc0);
        FUN__text__00451cdc(lVar1 + 0xc0);
        if (*(long *)(lVar1 + 0x80) != 0) {
          *(undefined4 *)(lVar1 + 0x88) = 0;
          (**(code **)(**(long **)(lVar1 + 0x78) + 0x18))();
          *(undefined8 *)(lVar1 + 0x80) = 0;
          *(undefined4 *)(lVar1 + 0x8c) = 0;
        }
        if ((*(long *)(lVar1 + 0xa0) != 0) && (*(char *)(lVar1 + 0xa8) != '\0')) {
          (**(code **)(**(long **)(lVar1 + 0x98) + 0x18))();
          *(undefined1 *)(lVar1 + 0xa8) = 0;
        }
        lVar4 = lVar4 + 0x118;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
      } while ((ulong)uVar2 * 0x118 != lVar4);
      lVar3 = *(long *)(param_1 + 0x118);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (lVar3 != param_1) {
      FUN__text__00400fc0(0,lVar3);
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  return;
}


