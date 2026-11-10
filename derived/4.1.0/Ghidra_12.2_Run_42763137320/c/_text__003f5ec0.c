/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f5ec0; name: FUN_.text__003f5ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003f5ec0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  puVar1 = _DAT_008a43e8;
  *_DAT_008a43e0 = 0;
  plVar2 = (long *)*puVar1;
  uVar3 = (ulong)*(uint *)(puVar1 + 1);
  if (*(uint *)(puVar1 + 1) != 0) {
    plVar4 = plVar2;
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x30))();
        plVar2 = (long *)*puVar1;
        uVar3 = (ulong)*(uint *)(puVar1 + 1);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + uVar3);
  }
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    FUN__text__00400fc0(7);
    *puVar1 = 0;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
  }
  plVar2 = _DAT_008a43f0;
  if (*_DAT_008a43f0 != 0) {
    *(undefined4 *)(_DAT_008a43f0 + 1) = 0;
    FUN__text__00400fc0(7);
    *plVar2 = 0;
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
  }
  (**(code **)*param_1)(param_1);
  FUN__text__00400fc0(7,param_1);
  return;
}


