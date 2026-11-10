/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f5fc0; name: FUN_.text__003f5fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003f5fc0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  *param_1 = _DAT_008a43f8 + 0x10;
  lVar2 = lVar1;
  if ((int)param_1[2] != 0) {
    do {
      (**(code **)(*(long *)**(undefined8 **)(lVar2 + 0x10) + 0x10))();
      **(undefined8 **)(lVar2 + 0x10) = 0;
      lVar1 = *(long *)(lVar2 + 0x10);
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 0x18) != 0) {
          *(undefined4 *)(lVar1 + 0x20) = 0;
          if (*(long *)(lVar1 + 0x18) != lVar1 + 0x10) {
            FUN__text__00400fc0(0);
          }
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined4 *)(lVar1 + 0x24) = 0;
          lVar1 = *(long *)(lVar2 + 0x10);
        }
        FUN__text__00400fc0(0,lVar1);
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      lVar1 = param_1[1];
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1 + (ulong)*(uint *)(param_1 + 2) * 0x18);
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN__text__00400fc0(7,lVar1);
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  DAT_00ae8858 = 0;
  return;
}


