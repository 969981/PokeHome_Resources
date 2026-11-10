/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677fa0; name: FUN_.text__00677fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN__text__00677fa0(void *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = _DAT_008b4670;
  if (*_DAT_008a6598 != 0x89a3d8) {
    lVar1 = *_DAT_008a6598;
  }
  if (lVar1 != DAT_00c5f738) {
    DAT_00c5f738 = lVar1;
    if (_DAT_008b4670 == 0) {
      puVar3 = &DAT_00c5f740;
    }
    else {
      lVar6 = 0;
      puVar3 = &DAT_00c5f740;
      lVar2 = _DAT_008b4670;
      do {
        puVar4 = puVar3;
        if (lVar6 != 0) {
          lVar2 = *(long *)(&DAT_008b4670 + lVar6 * 8);
          puVar4 = puVar3 + 1;
          *puVar3 = 0x20;
        }
        puVar5 = puVar4;
        if (lVar1 != lVar2) {
          lVar1 = *(long *)(&DAT_008b4670 + lVar6 * 8);
          puVar5 = puVar4 + 1;
          *puVar4 = 0x28;
        }
        lVar2 = (**(code **)(lVar1 + 0x30))(puVar5,(long)&DAT_00c5f808 - (long)puVar5);
        lVar1 = DAT_00c5f738;
        puVar5 = puVar5 + lVar2;
        puVar3 = puVar5;
        if (DAT_00c5f738 != *(long *)(&DAT_008b4670 + lVar6 * 8)) {
          puVar3 = puVar5 + 1;
          *puVar5 = 0x29;
        }
        lVar2 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        lVar2 = *(long *)(&DAT_008b4678 + lVar2);
      } while (lVar2 != 0);
    }
    *puVar3 = 0;
    DAT_00c5f808 = puVar3 + -0xc5f740;
  }
  puVar3 = DAT_00c5f808;
  if (param_2 < DAT_00c5f808) {
    memcpy(param_1,&DAT_00c5f740,(size_t)(DAT_00c5f808 + 1));
  }
  else {
    memcpy(param_1,&DAT_00c5f740,(size_t)(param_2 + -1));
    *(undefined1 *)((long)param_1 + (long)(param_2 + -1)) = 0;
  }
  return puVar3;
}


