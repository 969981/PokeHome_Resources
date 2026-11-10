/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fe770; name: FUN_.text__003fe770
 */


void FUN__text__003fe770(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar2 = *(long **)(param_1 + 0x28);
      do {
        *(undefined4 *)(*plVar2 + 0x20) = 0xffffffff;
        lVar1 = *plVar2;
        if (*(short *)(lVar1 + 0x24) == 0) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(lVar1 + 0x1c);
          FUN__text__003ff460(param_1 + 0x38,*(int *)(lVar1 + 8) - *(int *)(param_1 + 0x338),
                              *(undefined4 *)(lVar1 + 0x1c));
          FUN__text__00400fc0(7,lVar1);
          FUN__text__003fe0c8(*(undefined8 *)(param_1 + 0x360));
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN__text__00400fc0(7);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((*(long *)(param_1 + 0x338) != 0) && (*(int *)(param_1 + 0x354) != -1)) {
    FUN__text__00400fc0();
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}


