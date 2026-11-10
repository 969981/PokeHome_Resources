/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006515e0; name: FUN_.text__006515e0
 */


long * FUN__text__006515e0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN__text__0066c6a8();
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)0x0;
    iVar4 = -1;
    do {
      plVar5 = (long *)*puVar3;
      if ((plVar5[0x98] + plVar5[0x9c] == 0) && (*plVar5 == 0)) {
        iVar1 = FUN__text__0066c6d8(auVar6._0_8_,auVar6._8_8_,plVar5[0x47],plVar5[0x48]);
        if (iVar1 <= iVar4) {
          iVar1 = iVar4;
          plVar5 = plVar2;
        }
        plVar2 = plVar5;
        iVar4 = iVar1;
      }
      puVar3 = (undefined8 *)puVar3[2];
    } while (puVar3 != (undefined8 *)0x0);
    if (plVar2 != (long *)0x0) {
      FUN__text__006512cc(param_2,plVar2);
      *(long *)(*(long *)(param_1 + 0x1100) + 0x30) =
           *(long *)(*(long *)(param_1 + 0x1100) + 0x30) + -1;
      *plVar2 = param_1;
    }
  }
  return plVar2;
}


