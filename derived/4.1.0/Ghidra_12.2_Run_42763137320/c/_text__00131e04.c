/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00131e04; name: FUN_.text__00131e04
 */


void FUN__text__00131e04(long param_1,undefined8 *param_2,long *param_3)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x650) != 0) {
    bVar1 = FUN__text__00132a80(*(long *)(param_1 + 0x650),param_3);
    *(byte *)(param_1 + 0x690) = bVar1 & 1;
  }
  if (*(long *)(param_1 + 0x670) != 0) {
    bVar1 = FUN__text__00133648(*(long *)(param_1 + 0x670),param_3);
    *(byte *)(param_1 + 0x690) = bVar1 & 1;
  }
  *(undefined1 *)(param_1 + 0x691) = *(undefined1 *)(param_2 + 2);
  FUN__text__003c4c48(*(undefined8 *)(param_1 + 0x640),*(undefined1 *)((long)param_2 + 0x12));
  FUN__text__003c4c58(*(undefined8 *)(param_1 + 0x640),*(undefined1 *)((long)param_2 + 0x13));
  FUN__text__003c4c60(*(undefined8 *)(param_1 + 0x640),*(undefined1 *)((long)param_2 + 0x14));
  FUN__text__003c4b4c(*(undefined8 *)(param_1 + 0x640),*(undefined4 *)(param_2 + 1),
                      *(undefined4 *)((long)param_2 + 0xc));
  (**(code **)(**(long **)(param_1 + 0x640) + 0x50))(*(long **)(param_1 + 0x640),*param_2);
  FUN__text__003c4c50(*(undefined8 *)(param_1 + 0x640),*param_3 == 0);
  if (*(char *)((long)param_2 + 0x11) != '\0') {
    FUN__text__003c4740(*(undefined8 *)(param_1 + 0x640));
  }
  if (*(long *)(param_1 + 0x650) == 0 && *(long *)(param_1 + 0x670) == 0) {
    return;
  }
  FUN__text__0012bca0(param_1 + 0x110,1);
  return;
}


