/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00409f80; name: FUN_.text__00409f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00409f80(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = DAT_00ae99f8;
  if (DAT_00ae99f8 == (undefined8 *)0x0) {
LAB__text__0040a020:
    uVar4 = 2;
  }
  else {
    if (DAT_00ae99f8[5] == param_1) {
      puVar6 = (undefined8 *)0x0;
      puVar5 = DAT_00ae99f8;
    }
    else {
      puVar5 = DAT_00ae99f8;
      do {
        puVar6 = puVar5;
        puVar5 = (undefined8 *)puVar6[4];
        if (puVar5 == (undefined8 *)0x0) goto LAB__text__0040a020;
      } while (puVar5[5] != param_1);
    }
    iVar1 = *(int *)(puVar5 + 0xb);
    *(undefined4 *)(puVar5 + 0xb) = 0;
    if (iVar1 != 0) {
      DAT_00ae9a18 = 0;
      do {
        if (puVar7 != puVar5) {
          FUN__text__0040a5b0(&DAT_00ae9a00,puVar7 + 8);
        }
        puVar7 = (undefined8 *)puVar7[4];
      } while (puVar7 != (undefined8 *)0x0);
    }
    pcVar3 = DAT_00ae9a20;
    if ((((param_2 & 1) != 0) && (*(int *)(puVar5 + 6) != 0xb50007)) &&
       (DAT_00ae9a20 != (code *)0x0)) {
      uVar4 = FUN__text__0040dc30();
      (*pcVar3)(uVar4,*(undefined4 *)((long)puVar5 + 100),*(undefined4 *)(puVar5 + 0xd),1,1);
    }
    puVar7 = &DAT_00ae99f8;
    if (DAT_00ae99f8 != puVar5) {
      puVar7 = puVar6 + 4;
    }
    *puVar7 = puVar5[4];
    if (DAT_00ae99f0 == puVar5) {
      DAT_00ae99f0 = puVar6;
    }
    DAT_00ae99e8 = DAT_00ae99e8 + -1;
    (**(code **)*puVar5)(puVar5);
    FUN__text__00400fc0(0,puVar5);
    FUN__text__0041595c(0);
    plVar2 = _DAT_008a4a20;
    uVar4 = 1;
    if ((*_DAT_008a4a20 != 0) && (DAT_00ae99f8 == (undefined8 *)0x0)) {
      FUN__text__00400fc0(0);
      *plVar2 = 0;
      return 1;
    }
  }
  return uVar4;
}


