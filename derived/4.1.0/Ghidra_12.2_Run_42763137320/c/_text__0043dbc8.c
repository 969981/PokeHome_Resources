/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043dbc8; name: FUN_.text__0043dbc8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0043dbc8(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = (int)param_1;
  if (iVar1 == 2) {
    plVar2 = (long *)FUN__text__00400f80(param_1,0x98);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN__text__0042ce54(plVar2);
    *(undefined2 *)(plVar2 + 5) = 0;
    *(undefined2 *)(plVar2 + 8) = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    *(undefined4 *)(plVar2 + 0x12) = 2;
    *(byte *)((long)plVar2 + 0x94) = *(byte *)((long)plVar2 + 0x94) & 0xfc;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    lVar3 = _DAT_008a4958;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return (long *)0x0;
      }
      plVar2 = (long *)FUN__text__00400f80(2,0x98);
      if (plVar2 == (long *)0x0) {
        return (long *)0x0;
      }
      FUN__text__0042ce54(plVar2);
      *(undefined2 *)(plVar2 + 5) = 0;
      *(undefined2 *)(plVar2 + 8) = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar2[0x11] = 0;
      *(byte *)((long)plVar2 + 0x94) = *(byte *)((long)plVar2 + 0x94) & 0xfc | 1;
      plVar2[9] = 0;
      plVar2[10] = 0;
      plVar2[0xb] = 0;
      plVar2[0xc] = 0;
      plVar2[0xd] = 0;
      plVar2[0xe] = 0;
      plVar2[0xf] = 0;
      plVar2[0x10] = 0;
      lVar3 = _DAT_008a4950;
      *(undefined4 *)(plVar2 + 0x12) = 0;
      goto LAB__text__0043dcfc;
    }
    plVar2 = (long *)FUN__text__00400f80(2,0x98);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN__text__0042ce54(plVar2);
    *(undefined2 *)(plVar2 + 5) = 0;
    *(undefined2 *)(plVar2 + 8) = 0;
    *(undefined4 *)(plVar2 + 0x12) = 1;
    plVar2[3] = 0;
    plVar2[4] = 0;
    *(byte *)((long)plVar2 + 0x94) = *(byte *)((long)plVar2 + 0x94) | 3;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    lVar3 = _DAT_008a4960;
  }
  plVar2[0x11] = 0;
LAB__text__0043dcfc:
  *plVar2 = lVar3 + 0x10;
  return plVar2;
}


