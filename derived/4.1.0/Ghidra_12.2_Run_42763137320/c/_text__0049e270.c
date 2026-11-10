/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049e270; name: FUN_.text__0049e270
 */


void FUN__text__0049e270(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0x108) + 0x40))();
      *(ushort *)(param_1 + 0x13d) = *(ushort *)(param_1 + 0x13d) & 0xfff7;
      if (*(int *)(param_1 + 0x118) != 0) {
        lVar2 = *(long *)(param_1 + 0x110);
        do {
          (**(code **)(**(long **)(lVar2 + 8) + 0x10))();
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != *(long *)(param_1 + 0x110) + (ulong)*(uint *)(param_1 + 0x118) * 0x10);
      }
      *(undefined4 *)(param_1 + 0x118) = 0;
      if (*(long **)(param_1 + 0x120) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x120) + 0x10))();
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))();
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  return;
}


