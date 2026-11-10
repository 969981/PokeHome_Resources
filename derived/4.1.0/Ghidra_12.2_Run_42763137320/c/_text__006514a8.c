/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006514a8; name: FUN_.text__006514a8
 */


long * FUN__text__006514a8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_1 + 0x1100);
  auVar9 = FUN__text__0066c6a8();
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN__text__00667a44(param_1,5,2);
  }
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN__text__0065425c(lVar3,&local_78);
  lVar2 = FUN__text__0065426c(&local_78);
  if (lVar2 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    lVar5 = 0;
    plVar4 = (long *)0x0;
    iVar6 = -1;
    do {
      lVar2 = *(long *)(lVar2 + 0x18);
      for (puVar7 = *(undefined8 **)(lVar2 + 0x10); puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)puVar7[2]) {
        plVar8 = (long *)*puVar7;
        if ((plVar8[0x98] + plVar8[0x9c] == 0) && (*plVar8 == 0)) {
          iVar1 = FUN__text__0066c6d8(auVar9._0_8_,auVar9._8_8_,plVar8[0x47],plVar8[0x48]);
          if (iVar6 < iVar1) {
            lVar5 = lVar2;
            plVar4 = plVar8;
            iVar6 = iVar1;
          }
        }
      }
      lVar2 = FUN__text__0065426c(&local_78);
    } while (lVar2 != 0);
    if (plVar4 != (long *)0x0) {
      FUN__text__006512cc(lVar5,plVar4);
      *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
      *plVar4 = param_1;
    }
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN__text__00667a8c(param_1,5);
  }
  return plVar4;
}


