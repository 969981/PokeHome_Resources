/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00643670; name: FUN_.text__00643670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00643670(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = 0x402;
  puVar3 = _DAT_008a6408;
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
    puVar3 = puVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (DAT_00c2e918 != 0) {
    FUN__text__005d9290(DAT_00c2e918,&DAT_00c2e910);
    lVar4 = DAT_00c2e918;
    DAT_00c2e918 = 0;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00643720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      return;
    }
  }
  DAT_00c2e918 = 0;
  return;
}


