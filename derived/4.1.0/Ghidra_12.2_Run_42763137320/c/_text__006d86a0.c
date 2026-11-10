/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d86a0; name: FUN_.text__006d86a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d86a0(void)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = _DAT_008a6b60;
  piVar2 = _DAT_008a6b58;
  puVar1 = _DAT_008a6b48;
  if (0 < *_DAT_008a6b58) {
    lVar4 = 0;
    do {
      lVar5 = lVar4 * 8;
      (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,*(undefined8 *)(*plVar3 + lVar5));
      lVar4 = lVar4 + 1;
      *(undefined8 *)(*plVar3 + lVar5) = 0;
    } while (lVar4 < *piVar2);
  }
  *piVar2 = 0;
  return;
}


