/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f0f70; name: FUN_.text__002f0f70
 */


void FUN__text__002f0f70(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  double dVar6;
  double dVar7;
  
  if (DAT_008e5278 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  puVar1 = *(undefined8 **)(DAT_008e5278 + 0x1e8);
  puVar2 = *(undefined8 **)(DAT_008e5278 + 0x1f0);
  while( true ) {
    if (puVar1 == puVar2) {
      return;
    }
    plVar5 = (long *)*puVar1;
    plVar3 = (long *)(**(code **)plVar5[10])();
    plVar4 = (long *)FUN__text__002e29c4();
    if (plVar4 == plVar3) break;
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
    if (plVar3 != (long *)0x0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      break;
    }
    puVar1 = puVar1 + 1;
  }
  dVar6 = (double)(**(code **)(*plVar5 + 0x90))(plVar5);
  dVar7 = 3599999.0;
  if (dVar6 < 3599999.0) {
    dVar7 = dVar6;
  }
  *param_1 = (uint)(int)dVar7 / 0xe10;
  *param_2 = ((uint)(int)dVar7 % 0xe10) / 0x3c;
  return;
}


