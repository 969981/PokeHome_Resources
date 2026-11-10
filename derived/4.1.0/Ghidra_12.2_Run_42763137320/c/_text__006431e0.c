/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006431e0; name: FUN_.text__006431e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006431e0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = -0x8060;
  puVar3 = (undefined8 *)(_DAT_008a6408 + 0x8040);
  do {
    plVar2 = (long *)*puVar3;
    *puVar3 = 0;
    if (plVar2 != (long *)0x0) {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        plVar2[1] = lVar1;
        (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
      }
      (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],plVar2,puVar3[2],puVar3[3]);
    }
    puVar3 = puVar3 + -4;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0);
  return;
}


