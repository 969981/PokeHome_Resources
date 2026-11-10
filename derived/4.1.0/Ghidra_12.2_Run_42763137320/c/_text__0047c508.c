/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c508; name: FUN_.text__0047c508
 */


void FUN__text__0047c508(undefined4 *param_1)

{
  long *plVar1;
  
  *param_1 = 0;
  if (*(long *)(param_1 + 0xc) != 0) {
    param_1[0xe] = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0xc) = 0;
    param_1[0xf] = 0;
  }
  if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
    plVar1 = *(long **)(param_1 + 4);
    if (plVar1 != (long *)0x0) {
      if (*(ushort *)(plVar1 + 2) - 1 == 0) {
        if (*plVar1 != 0) {
          *(undefined4 *)(plVar1 + 1) = 0;
          FUN__text__00400fc0(0);
          *plVar1 = 0;
          *(undefined4 *)((long)plVar1 + 0xc) = 0;
        }
        FUN__text__00400fc0(0,plVar1);
      }
      else {
        *(short *)(plVar1 + 2) = (short)(*(ushort *)(plVar1 + 2) - 1);
      }
    }
    *(undefined8 *)(param_1 + 4) = 0;
  }
  if (*(long *)(param_1 + 0x22) != 0) {
    param_1[0x24] = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
  }
  return;
}


